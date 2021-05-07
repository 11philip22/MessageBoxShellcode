from sys import argv
out = ""
for c in argv[1]:
    c = f"'{c}', "
    out += c
print(out)
