# �ʱ��
n, m = map(int, input().split())

arr = []
for i in range(n):
    arr.append([])
    for j in range(m):
        arr[i].append(m)

cnt, r, c, lim, direct = 1, 0, -1, 0, 1

# �Էº�
while(cnt <= n * m):
    # ���� ä���
    for i in range(0, m - lim):
        c += direct
        arr[r][c] = cnt
        cnt += 1
    
    # ���� ä���
    for i in range(0, n - lim - 1):
        r += direct
        arr[r][c] = cnt
        cnt += 1
    
    # ���� �ٲٱ�
    direct *= -1

    # ���Ѱ� ����
    lim += 1

# ��º�
for i in range(n):
    for j in range(m):
        print("%d " % arr[i][j], end='')
    print()