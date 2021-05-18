ymd, _ = map(int, input().split())

if _==1 or _==2:
    print(2012 - 1900 - ymd//10000 + 1)
else:
    print(2012 - 2000 - ymd//10000 + 1)