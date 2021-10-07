n = int(input())
cnt, idx = 0, 0
arr = [0, 0]

for i in range(2, n):
    if n % i == 0:
        cnt += 1

        if i==2 and idx < 2:
            arr[idx] = i
            idx += 1
        elif i%2!=0 and idx < 2:
            arr[idx] = i
            idx += 1

if cnt==2 and idx==2 : print("%d %d" % (arr[0], arr[1]))
else : print("wrong number")