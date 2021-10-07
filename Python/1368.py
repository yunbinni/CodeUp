h, k, d = input().split()
h, k = map(int, (h, k))

if d == "L":
    print("\n".join([" "*j+"*"*k for j in range(0, h)]))

else:
    print("\n".join([" "*j+"*"*k for j in range(h - 1, -1, -1)]))