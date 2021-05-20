li = list(map(int, input().split()))

if sum(li) == 1 : print("도")
elif sum(li) == 2 : print("개")
elif sum(li) == 3 : print("걸")
elif sum(li) == 4 : print("윷")
else : print("모")