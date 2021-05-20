a, b, c, d = map(float, input().split())
print(">" if a/b > c/d else "<" if a/b < c/d else "=")