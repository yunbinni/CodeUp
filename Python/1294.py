inStr = input()

for i in inStr:
    if 120 <= ord(i) <= 122 : print(chr(ord(i) - 23), end='')
    elif i == " " : print(i, end='')
    else : print(chr(ord(i) + 3), end='')