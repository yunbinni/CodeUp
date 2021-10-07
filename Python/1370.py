h, r = map(int, input().split())

# 전체 반복
for i in range(r):

    # 부분 반복(상단부)
    for j in range(h):
        # 공백 반복
        for k in range(j):
            print(" ", end='')
        # 별 찍기
        print("*")

    # 부분 반복(하단부)
    for j in range(h-1):
        # 공백 반복
        for k in range(h - j - 2):
            print(" ", end='')
        # 별 찍기
        print("*")