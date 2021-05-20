repList = list(map(int, input().split()))
bonus = repList[6]
repList = repList[0:6]
myList = list(map(int, input().split()))
isSec = False

count = len(list(set(repList).intersection(myList)))

if count == 6:
    print(1)

elif count == 5:
    for i in range(0, 6):
        if bonus==myList[i]:
            isSec = True
            break
    
    print(2 if isSec is True else 3)

elif count == 4:
    print(4)

elif count == 3:
    print(5)

else:
    print(0)