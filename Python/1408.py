s = input()

print(''.join([chr(ord(i)+2) for i in s]))
print(''.join([chr((ord(i)*7) % 80 + 48) for i in s]))