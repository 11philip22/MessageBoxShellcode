#include <Windows.h>

/* C:\Users\Administrator\source\repos\11philip22\MessageBoxShellcode\bin\ShellcodeB_x64.bin (10/6/2021 6:32:44 AM)
   StartOffset(h): 00000000, EndOffset(h): 000001E7, Length(h): 000001E8 */

BYTE shellcodeBuf[488] = {
	0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x74, 0x24, 0x10, 0x55, 0x57,
	0x41, 0x56, 0x48, 0x8B, 0xEC, 0x48, 0x83, 0xEC, 0x70, 0x45, 0x33, 0xC0,
	0xC7, 0x45, 0xE0, 0x75, 0x00, 0x73, 0x00, 0x4C, 0x8B, 0xF1, 0x4C, 0x89,
	0x45, 0x30, 0xB9, 0x13, 0x9C, 0xBF, 0xBD, 0x44, 0x89, 0x45, 0xC4, 0x44,
	0x89, 0x45, 0xD4, 0x48, 0x8B, 0xF2, 0xC7, 0x45, 0xE4, 0x65, 0x00, 0x72,
	0x00, 0xC7, 0x45, 0xE8, 0x33, 0x00, 0x32, 0x00, 0xC7, 0x45, 0xEC, 0x2E,
	0x00, 0x64, 0x00, 0xC7, 0x45, 0xF0, 0x6C, 0x00, 0x6C, 0x00, 0xC7, 0x45,
	0xB0, 0x4D, 0x65, 0x73, 0x73, 0xC7, 0x45, 0xB4, 0x61, 0x67, 0x65, 0x42,
	0xC7, 0x45, 0xB8, 0x6F, 0x78, 0x57, 0x00, 0xE8, 0x70, 0x00, 0x00, 0x00,
	0xB9, 0xB5, 0x41, 0xD9, 0x5E, 0x48, 0x8B, 0xD8, 0xE8, 0x63, 0x00, 0x00,
	0x00, 0x48, 0x8B, 0xF8, 0xC7, 0x45, 0xC0, 0x14, 0x00, 0x14, 0x00, 0x48,
	0x8D, 0x45, 0xE0, 0x33, 0xD2, 0x4C, 0x8D, 0x4D, 0x38, 0x48, 0x89, 0x45,
	0xC8, 0x4C, 0x8D, 0x45, 0xC0, 0x33, 0xC9, 0xFF, 0xD3, 0x48, 0x8B, 0x4D,
	0x38, 0x48, 0x8D, 0x45, 0xB0, 0x45, 0x33, 0xC0, 0x48, 0x89, 0x45, 0xD8,
	0x4C, 0x8D, 0x4D, 0x30, 0xC7, 0x45, 0xD0, 0x0C, 0x00, 0x0C, 0x00, 0x48,
	0x8D, 0x55, 0xD0, 0xFF, 0xD7, 0x45, 0x33, 0xC9, 0x4C, 0x8B, 0xC6, 0x49,
	0x8B, 0xD6, 0x33, 0xC9, 0xFF, 0x55, 0x30, 0x4C, 0x8D, 0x5C, 0x24, 0x70,
	0x49, 0x8B, 0x5B, 0x20, 0x49, 0x8B, 0x73, 0x28, 0x49, 0x8B, 0xE3, 0x41,
	0x5E, 0x5F, 0x5D, 0xC3, 0x48, 0x8B, 0xC4, 0x48, 0x89, 0x58, 0x08, 0x48,
	0x89, 0x68, 0x10, 0x48, 0x89, 0x70, 0x18, 0x48, 0x89, 0x78, 0x20, 0x41,
	0x56, 0x48, 0x83, 0xEC, 0x10, 0x65, 0x48, 0x8B, 0x04, 0x25, 0x60, 0x00,
	0x00, 0x00, 0x8B, 0xE9, 0x45, 0x33, 0xF6, 0x48, 0x8B, 0x50, 0x18, 0x4C,
	0x8B, 0x4A, 0x10, 0x4D, 0x8B, 0x41, 0x30, 0x4D, 0x85, 0xC0, 0x0F, 0x84,
	0xB3, 0x00, 0x00, 0x00, 0x41, 0x0F, 0x10, 0x41, 0x58, 0x49, 0x63, 0x40,
	0x3C, 0x41, 0x8B, 0xD6, 0x4D, 0x8B, 0x09, 0xF3, 0x0F, 0x7F, 0x04, 0x24,
	0x46, 0x8B, 0x9C, 0x00, 0x88, 0x00, 0x00, 0x00, 0x45, 0x85, 0xDB, 0x74,
	0xD2, 0x48, 0x8B, 0x04, 0x24, 0x48, 0xC1, 0xE8, 0x10, 0x66, 0x44, 0x3B,
	0xF0, 0x73, 0x22, 0x48, 0x8B, 0x4C, 0x24, 0x08, 0x44, 0x0F, 0xB7, 0xD0,
	0x0F, 0xBE, 0x01, 0xC1, 0xCA, 0x0D, 0x80, 0x39, 0x61, 0x7C, 0x03, 0x83,
	0xC2, 0xE0, 0x03, 0xD0, 0x48, 0xFF, 0xC1, 0x49, 0x83, 0xEA, 0x01, 0x75,
	0xE7, 0x4F, 0x8D, 0x14, 0x18, 0x45, 0x8B, 0xDE, 0x41, 0x8B, 0x7A, 0x20,
	0x49, 0x03, 0xF8, 0x45, 0x39, 0x72, 0x18, 0x76, 0x8E, 0x8B, 0x37, 0x41,
	0x8B, 0xDE, 0x49, 0x03, 0xF0, 0x48, 0x8D, 0x7F, 0x04, 0x0F, 0xBE, 0x0E,
	0x48, 0xFF, 0xC6, 0xC1, 0xCB, 0x0D, 0x03, 0xD9, 0x84, 0xC9, 0x75, 0xF1,
	0x8D, 0x04, 0x13, 0x3B, 0xC5, 0x74, 0x0E, 0x41, 0xFF, 0xC3, 0x45, 0x3B,
	0x5A, 0x18, 0x72, 0xD5, 0xE9, 0x5E, 0xFF, 0xFF, 0xFF, 0x41, 0x8B, 0x42,
	0x24, 0x43, 0x8D, 0x0C, 0x1B, 0x49, 0x03, 0xC0, 0x0F, 0xB7, 0x14, 0x01,
	0x41, 0x8B, 0x4A, 0x1C, 0x49, 0x03, 0xC8, 0x8B, 0x04, 0x91, 0x49, 0x03,
	0xC0, 0xEB, 0x02, 0x33, 0xC0, 0x48, 0x8B, 0x5C, 0x24, 0x20, 0x48, 0x8B,
	0x6C, 0x24, 0x28, 0x48, 0x8B, 0x74, 0x24, 0x30, 0x48, 0x8B, 0x7C, 0x24,
	0x38, 0x48, 0x83, 0xC4, 0x10, 0x41, 0x5E, 0xC3
};

typedef VOID(__stdcall* SHELLCODE)(LPCWSTR, LPCWSTR);

int main()
{
	WCHAR szMsgContent[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', 0 };
	WCHAR szMsgTitle[] = { 'D', 'e', 'm', 'o', '!', 0 };

	LPVOID lpPayload = VirtualAlloc(NULL, sizeof(shellcodeBuf), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	if (lpPayload) 
	{
		memcpy(lpPayload, shellcodeBuf, sizeof(shellcodeBuf));

		SHELLCODE MyMessageboxW = (SHELLCODE)lpPayload;
		MyMessageboxW(szMsgContent, szMsgTitle);
	}
}
