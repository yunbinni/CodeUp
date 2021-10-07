n = int(input())
print("\n".join(["*"*i if i < n else "*"*(2*n - i) for i in range(1, 2*n)]))