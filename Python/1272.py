k, h = map(int, input().split())

if(k%2!=0) : kMoney = (k + 1)/2
else : kMoney = 5*k

if(h%2!=0) : hMoney = (h + 1)/2
else : hMoney = 5*h

print(int(kMoney + hMoney))