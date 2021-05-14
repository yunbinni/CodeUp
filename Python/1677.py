n, m = map(int, input().split())

for i in range(m):
    # 맨 윗줄, 맨 아랫줄
    if i==0 or i==m-1:
        for j in range(n):
            if j==0 or j==n-1:
                print("+", end='')
            else:
                print("-", end='')
    
    # 나머지줄
    else:
        for j in range(n):
            if j==0 or j==n-1:
                print("|", end='')
            else:
                print(" ", end='')
    
    print()