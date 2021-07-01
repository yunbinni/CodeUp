a, b = map(int, input().split())
sum = 0

for i in range(a, b + 1):
    if i==a and i%2!=0:
        print(str(i), end='')
        sum += i

    elif i==a and i%2==0:
        print("-"+str(i), end='')
        sum -= i

    elif i%2!=0:
        print("+"+str(i), end='')
        sum += i

    elif i%2==0:
        print("-"+str(i), end='')
        sum -= i

print("="+str(sum))