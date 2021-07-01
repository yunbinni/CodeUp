a, b = map(int, input().split())
res = sum([i if i%2!=0 else -i for i in range(a, b + 1)])
print("".join(["+%d" % i if i%2!= 0 else "-%d" % i for i in range(a, b + 1)]) + "=" + str(res))