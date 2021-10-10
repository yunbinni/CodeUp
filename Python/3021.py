"""입력 및 초기화"""
a = '0'+input()
b = '0'+input()
stack = []
oneNum, tenNum, sum = 0, 0, 0
res = ''

"""계산부"""
if len(a) >= len(b):
    b = '0'*(len(a) - len(b)) + b
else:
    a = '0'*(len(b) - len(a)) + a

# 숫자 뒤집기
a = a[::-1]
b = b[::-1]

loopNum = len(a) if len(a) > len(b) else len(b)

for i in range(loopNum):
    sum = int(a[i]) + int(b[i]) + tenNum
    oneNum = sum % 10
    tenNum = sum // 10

    stack.append(oneNum)

"""출력부"""
while(stack):
    res += str(stack.pop())
res = int(res)
print(res)