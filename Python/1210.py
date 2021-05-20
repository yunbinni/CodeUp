menu = [400, 340, 170, 100, 70]
i, j = map(int, input().split())

if menu[i - 1] + menu[j - 1] > 500 : print("angry")
else : print("no angry")