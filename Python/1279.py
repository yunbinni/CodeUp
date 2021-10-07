a, b = map(int, input().split())
print(sum([i if i%2!=0 else -i for i in range(a, b + 1)]))