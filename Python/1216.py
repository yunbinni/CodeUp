a, b, c = map(int, input().split())
print("advertise" if a < b - c else "do not advertise" if a > b - c else "does not matter")