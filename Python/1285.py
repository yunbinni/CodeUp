inStr = input()
num = ''
tmpList = []

for i in inStr:
    if i not in ['+', '-', '*', '/', '=']:
        num += i
    else:
        tmpList.append(int(num))
        tmpList.append(i)
        num = ''

sum = tmpList[0]

for j in range(len(tmpList)):
    if tmpList[j] == "+":
        sum += tmpList[j + 1]
    elif tmpList[j] == "-":
        sum -= tmpList[j + 1]
    elif tmpList[j] == "*":
        sum *= tmpList[j + 1]
    elif tmpList[j] == "/":
        sum = int(sum / tmpList[j + 1])

print(int(sum))