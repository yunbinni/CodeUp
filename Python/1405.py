n = int(input())
inList = list(map(int, input().split()))

for i in range(n):
    k = i
    for j in range(n):
        if k==n : k = 0
        print("%d " % inList[k], end='')
        k += 1
    print()