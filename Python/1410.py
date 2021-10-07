inStr = input()
c1, c2 = 0, 0

for i in inStr:
    if i=="(" : c1 += 1
    elif i==")" : c2 += 1

print("%d %d" % (c1, c2))