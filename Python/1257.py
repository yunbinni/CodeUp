a, b = map(int, input().split())
print(" ".join(list(map(str, [i for i in range(a, b + 1) if i%2!=0]))))