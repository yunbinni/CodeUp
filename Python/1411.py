N = int(input())
arr = []
for i in range(N-1) : arr.append(int(input()))

for j in range(1, N+1):
    cnt = 0
    for i in range(N-1):
        cnt += 1
        if j==arr[i]:
            cnt = 0
            break
    if cnt==N-1:
        print(j)
        break