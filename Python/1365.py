n = int(input())

for i in range(n):
    # 첫째줄
    if i==0:
        print("*"*n)
    
    # 2~(n-1)번째줄
    elif 0 < i < n-1:
        for j in range(n):
            if(j==0 or j==i or j==n-1-i or j==n-1) : print("*", end='')
            else : print(" ", end='')
        print()

    # n번째줄
    elif i==n-1:
        print("*"*n)