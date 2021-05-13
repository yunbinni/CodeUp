n = int(input())
inList = list(map(int, input().split()))

for i in range(n // 2):
    inList[i], inList[len(inList) - 1 - i] = inList[len(inList) - 1 - i], inList[i]

print(*inList)