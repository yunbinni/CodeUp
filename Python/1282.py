n = int(input())
k = 0

for i in range(n, 0, -1):
    t = i**(1/2)

    if t - int(t) == 0:
        print("%d %.0f" % (k, t))
        break
    else:
        k += 1