# 초기부
n, m = map(int, input().split())

arr = []
for i in range(n):
    arr.append([])
    for j in range(m):
        arr[i].append(m)

cnt, r, c, lim, direct = 1, 0, -1, 0, 1

# 입력부
while(cnt <= n * m):
    # 가로 채우기
    for i in range(0, m - lim):
        c += direct
        arr[r][c] = cnt
        cnt += 1
    
    # 세로 채우기
    for i in range(0, n - lim - 1):
        r += direct
        arr[r][c] = cnt
        cnt += 1
    
    # 방향 바꾸기
    direct *= -1

    # 제한값 증가
    lim += 1

# 출력부
for i in range(n):
    for j in range(m):
        print("%d " % arr[i][j], end='')
    print()