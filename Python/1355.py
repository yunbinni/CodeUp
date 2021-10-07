n = int(input())
print("\n".join([" "*(n - j) + "*"*j for j in range(n, 0, -1)]))