n = int(input())
arr = []
cnt = 1

for i in range(n):
    arr.append([])
    for j in range(n):
        arr[i].append(cnt)
        cnt += 1
        if i%2==0:
            arr[i].sort(reverse=True)
    
    for k in range(n):
        print(arr[i][k], end=' ')
    print()