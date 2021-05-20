h, w = map(float, input().split())

if h < 150 : stdw = h - 100
elif 150 <= h < 160 : stdw = (h - 150)/2 + 50
else : stdw = (h - 100)*0.9

bimando = (w - stdw)*100/stdw

if bimando <= 10 : print("정상")
elif 10 < bimando <= 20 : print("과체중")
else : print("비만")