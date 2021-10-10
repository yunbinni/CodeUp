n = int(input())

arr = [] ; count = 1

for i in range(n):
    arr.append([])
    for j in range(n):
        if i%2==0:
            arr[i].append(count)
            count += 1
        else:
            arr[i].append(count)
            count += 1
            arr[i] = sorted(arr[i], reverse=True)

for i in range(n):
    for j in range(n):
        print("%d " % arr[i][j], end='')
    print()