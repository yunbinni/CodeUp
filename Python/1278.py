n = int(input())
cnt = 0

while n > 0:
    n = int(n/10)
    cnt += 1

print(cnt)