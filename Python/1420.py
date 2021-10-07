n = int(input())
name_scr = []

# 이름과 점수 입력받기
for i in range(n):
    name_scr.append(input())

# 이름리스트와 점수리스트에 분할하여 넣기
name, scr = ['']*n, [0]*n
for i in range(n):
    name[i], scr[i] = name_scr[i].split()[0], int(name_scr[i].split()[1])

# 세번째수의 인덱스
third = sorted(scr, reverse=True)[2]
thirdIdx = scr.index(third)

# 출력
print(name[thirdIdx])