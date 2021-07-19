n, k = map(int, input().split())
rem = k-2

for i in range(n):
    # 첫째줄
    if i==0:
        print("*"*n)
    
    # 2~(n-1)번째줄
    elif 0 < i < n-1:
        for j in range(n):
            if j==0 or j%k==rem or k==1 or j==n-1:
                print("*", end='')
            else:
                print(" ", end='')
        print()

        # 나머지 갱신
        if(0 < rem <= k-1):
            rem -= 1
        else:
            rem = k-1

    # n번째줄
    elif i==n-1:
        print("*"*n)