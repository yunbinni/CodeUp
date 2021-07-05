# 입력받기
a, b = map(int, input().split())
x, y, z = map(int, input().split())
d, r = [], []
for i in range(a):
    d.append(list(map(int, input().split())))
    d[i].insert(0, 0)
    d[i].append(0)
    r.append([0 for i in range(b + 2)])

d.insert(0, [0 for i in range(b + 2)])
d.append([0 for i in range(b + 2)])
r.insert(0, [0 for i in range(b+ 2)])
r.append([0 for i in range(b + 2)])

k = int(input())

# 연산
while k > 0:
    for i in range(1, a + 1):
        for j in range(1, b + 1):
            # 8방향 더하기
            r[i][j] = d[i-1][j-1] + d[i-1][j] + d[i-1][j+1] + d[i][j-1] + d[i][j+1] + d[i+1][j-1] + d[i+1][j] + d[i+1][j+1]
            if(d[i][j] == 0):
                if r[i][j] == x : r[i][j] = 1
                else : r[i][j] = 0
            else:
                if y <= r[i][j] and r[i][j] < z : r[i][j] = 1
                else : r[i][j] = 0
        
        # 세대 업데이트
        for i in range(1, a + 1):
            for j in range(1, b + 1):
                d[i][j] = r[i][j]

    k -= 1

# 출력
for i in range(1, a + 1):
    for j in range(1, b + 1):
        print("%d " % r[i][j], end='')
    print()