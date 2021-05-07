import argparse
import os
import sys

StartMarker = 'MARKER:S'
EndMarker  = 'MARKER:E'

NativeTemplate = """
    LPSTR rdiShellcode32 = "{}";
    LPSTR rdiShellcode64 = "{}";
    DWORD rdiShellcode32Length = {}, rdiShellcode64Length = {};
    """


def main():
    parser = argparse.ArgumentParser(description='sRDI Blob Encoder', conflict_handler='resolve')
    parser.add_argument('solution_dir', help='Solution Directory')
    arguments = parser.parse_args()

    binFile32 = os.path.join(arguments.solution_dir, 'bin', 'ShellcodeRDI_x86.bin')
    binFile64 = os.path.join(arguments.solution_dir, 'bin', 'ShellcodeRDI_x64.bin')

    native_file = os.path.join(arguments.solution_dir, 'BeakeyBoi/Loader.cpp')

    if not os.path.isfile(binFile32) or not os.path.isfile(binFile64):
        print("[!] ShellcodeRDI_x86.bin and ShellcodeRDI_x64.bin files weren't in the bin directory")
        return

    binData32 = open(binFile32, 'rb').read()
    binData64 = open(binFile64, 'rb').read()

    # Patch the native loader

    native_insert = NativeTemplate.format(
        ''.join('\\x{:02X}'.format(b) for b in binData32),
        ''.join('\\x{:02X}'.format(b) for b in binData64),
        len(binData32), len(binData64)
    )

    code = open(native_file, 'r').read()
    start = code.find(StartMarker) + len(StartMarker)
    end = code.find(EndMarker) - 2 # for the //
    code = code[:start] + native_insert + code[end:] 
    open(native_file, 'w').write(code)

    print('[+] Updated {}'.format(native_file))

    print("")

if __name__ == '__main__':
    main()
