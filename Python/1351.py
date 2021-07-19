a, b = map(int, input().split())
print("\n".join(["%d*%d=%d" % (i, j, i*j) for i in range(a, b+1) for j in range(1, 10)]))