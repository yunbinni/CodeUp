n, k = map(int, input().split())
res = 1

for i in range(k):
    res *= n

print(res)