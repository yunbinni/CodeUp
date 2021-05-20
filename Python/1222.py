time, a, b = map(int, input().split())

for i in range(time, 90, 5):
    a += 1

print("win" if a > b else "lose" if a < b else "same")