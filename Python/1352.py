n = int(input()) 

for i in range(n):
    for j in range(n):
        print("*", end='')
    print()

# *를 이용한 다른 풀이
n = int(input()) 
for i in range(n) : print("*"*n)

# join()을 이용한 다른 풀이
n = int(input())
print("\n".join(["*"*n for i in range(n)]))

# unpacking()을 이용한 다른 풀이
n = int(input()) 
print(*["*"*n for i in range(n)], sep='\n')