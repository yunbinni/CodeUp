data = int(input())
for i in range(1, data + 1):
    print("{}".format(i if i%3!=0 else 'X'), end=' ')