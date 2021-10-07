n = int(input())
num = list(map(int, input().split()))

for i in range(n):
    print(str(i+1) + ": ", end='')
    for j in range(n):
        if i!=j:
            print("> " if num[i] > num[j] else "= " if num[i]==num[j] else "< ", end='')
    print()