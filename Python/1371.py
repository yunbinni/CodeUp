n = int(input())

# 상단부
for i in range(n):
    # 1번째 공백
    for j in range(n - 1 - i):
        print(" ", end='')
    # 1번째 별
    print("*", end='')
    # 2번째 공백
    for j in range(2*i):
        print(" ", end='')
    # 2번째 별
    print("*")

# 하단부
for i in range(n):
    # 1번째 공백
    for j in range(i):
        print(" ", end='')
    # 1번째 별
    print("*", end='')
    # 2번째 공백
    for j in range(2*(n-1-i)):
        print(" ", end='')
    # 2번째 별
    print("*")