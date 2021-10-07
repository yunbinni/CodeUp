num = list(map(int, input().split()))

s = 0

for i in num:
    if i%5==0:
        print(i)
        s = 1
        break

if s==0:
    print(0)