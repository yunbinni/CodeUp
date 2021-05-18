h, m = map(int, input().split())

if m < 30:
    if h == 0:
        print("%d %d" % (23, m - 30 + 60))
    else:
        print("%d %d" % (h - 1, m - 30 + 60))
else:
    print("%d %d" % (h, m - 30))