from itertools import *

n, k = map(int, input().split())
arr = [0 for i in range(n + 1)]

for i in range(k):
    s, e, u = map(int, input().split())
    arr[s - 1] += u
    arr[e] -= u

# 출력
print(*arr[:len(arr) - 1])
print(*list(accumulate(arr))[:len(arr) - 1])