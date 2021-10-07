N, C = map(int, input().split())
std = sorted(list(map(int, input().split())))

for i in range(N):
    if(i > 0 and i%C==0) : print()
    print("%d " % std[i], end='')