# 입력 및 초기화
n = int(input())
number = input()
stack = []

# 계산부
number = number[::-1]

for i in range(len(number)):
    if i != 0 and i % 3 ==0:
        stack.append(',')
    stack.append(number[i])

# 출력부
while stack:
    print(stack.pop(), end='')