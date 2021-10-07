n = int(input())
print("\n".join([" "*(i - 1)+"*"*n for i in range(n, 0, -1)]))