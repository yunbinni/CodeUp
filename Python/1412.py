import string

inStr = input()
alpha = list(string.ascii_lowercase)
alphaCnt = [0] * 26

for i in inStr:
    for j in range(26):
        if i==alpha[j]:
            alphaCnt[j] += 1

for i in range(26):
    print("%c:%d" % (alpha[i], alphaCnt[i]))