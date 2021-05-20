y, m = map(int, input().split())
mList = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

if m==2:
    if y%400==0 or y%4==0 and y%100!=0:
        print(29)
    else:
        print(28)
else:
    print(mList[m - 1])