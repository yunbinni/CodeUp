n = int(input())
end = int((n + 1)/2)

for i in range(0, end):
    for j in range(end - 1 - i, 0, -1):
        print(" ", end='')
    for k in range(0, 2*i + 1):
        print("*", end='')
    print()

# 다른 풀이
n = int(input())
print("\n".join([" "*(int((n-1)/2)-i)+"*"*(2*i+1) for i in range(0, int((n-1)/2) + 1)]))