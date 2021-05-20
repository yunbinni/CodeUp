inStr = input()

for i in inStr:
    if i=="+":
        a, b = map(int, inStr.split("+"))
        print(a + b)
    elif i=="-":
        a, b = map(int, inStr.split("-"))
        print(a - b)
    elif i=="*":
        a, b = map(int, inStr.split("*"))
        print(a * b)
    elif i=="/":
        a, b = map(int, inStr.split("/"))
        if b==0:
            break
        else:
            print("%.2f" % float(a/b))