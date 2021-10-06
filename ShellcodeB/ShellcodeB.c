#define WIN32_LEAN_AND_MEAN

#pragma warning( disable : 4201 ) // Disable warning about 'nameless struct/union'

#include "GetProcAddressWithHash.h"

#include <Windows.h>

/** NOTE: module hashes are computed using all-caps unicode strings */
#define LDRLOADDLL_HASH					0xbdbf9c13
#define LDRGETPROCADDRESS_HASH			0x5ed941b5

typedef int (WINAPI* MESSAGEBOXW)(HWND, LPCWSTR, LPCWSTR, UINT);
typedef NTSTATUS(WINAPI* LDRLOADDLL)(PWCHAR, ULONG, PUNICODE_STRING, PHANDLE);
typedef NTSTATUS(WINAPI* LDRGETPROCADDRESS)(HMODULE, PANSI_STRING, WORD, PVOID*);

#define FILL_STRING_WITH_BUF(string, buffer) \
	string.Length = sizeof(buffer); \
	string.MaximumLength = string.Length; \
	string.Buffer = (PCHAR)buffer

VOID Run(LPCWSTR szMsgContent, LPCWSTR szMsgTitle)
{
#pragma warning( push )
#pragma warning( disable : 4055 ) // Ignore cast warnings

	// Function pointers
	LDRLOADDLL pLdrLoadDll = NULL;
	LDRGETPROCADDRESS pLdrGetProcAddress = NULL;
	MESSAGEBOXW pMessageBoxW = NULL;

	// General
	HANDLE hUser32;
	
	// String
	UNICODE_STRING uString = { 0 };
	STRING aString = { 0 };

	WCHAR sUser32[] = { 'u', 's', 'e', 'r', '3', '2', '.', 'd', 'l', 'l' };

	BYTE sMessageBoxW[] = { 'M', 'e', 's', 's', 'a', 'g', 'e', 'B', 'o', 'x', 'W', 0 };

	//
	// STEP 1: locate all the required functions
	//
	pLdrLoadDll = GetProcAddressWithHash(LDRLOADDLL_HASH);
	pLdrGetProcAddress = GetProcAddressWithHash(LDRGETPROCADDRESS_HASH);

	uString.Buffer = sUser32;
	uString.MaximumLength = sizeof(sUser32);
	uString.Length = sizeof(sUser32);

	pLdrLoadDll(NULL, 0, &uString, &hUser32);

	FILL_STRING_WITH_BUF(aString, sMessageBoxW);
	pLdrGetProcAddress(hUser32, &aString, 0, (PVOID*)&pMessageBoxW);

	//
	// STEP 2: pop messagebox
	//
	pMessageBoxW(NULL, szMsgContent, szMsgTitle, 0x00000000L);
}
