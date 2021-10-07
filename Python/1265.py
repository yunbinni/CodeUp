n = int(input())
for i in range(1, 10) : print("%d*%d=%d" % (n, i, n*i))

# 다른 풀이
n = int(input())
print("\n".join(["%d*%d=%d" % (n, i, n*i) for i in range(1, 10)]))