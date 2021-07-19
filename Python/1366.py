n = int(input())

for i in range(n):
    # 첫째줄
    if i==0:
        print("*"*n)
    
    # 2~(n-1)번째줄(가운데줄 제외)
    elif 0 < i and i != (n-1)/2 and i < n-1:
        for j in range(n):
            if(j==0 or j==i or j==(n-1)/2 or j==n-1-i or j==n-1) : print("*", end='')
            else : print(" ", end='')
        print()
    
    # 가운데줄
    elif i==(n-1)/2:
        print("*"*n)

    # n번째줄
    elif i==n-1:
        print("*"*n)