a = int(input())
b = int(input())
res = float(a) ; net = 0

per = list(map(int, input().split()))

for i in range(b):
    res = res + res*(per[i]/100)

net = res - a

print("%.0f" % net)

if -0.5 < net < 0.5 : print("same")
elif net >= 0.5 : print("good")
elif net <= -0.5 : print("bad")