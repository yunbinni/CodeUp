a, b = map(float, input().split())
li = [a+b, a-b, b-a, a*b, a/b, b/a, a**b, b**a]
print("%.6f" % max(li))