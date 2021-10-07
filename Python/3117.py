# K, 입력값 초기화
K, input_ = 0, 0
stack = []

# 입력부
K = int(input())

# 계산부
for i in range(K):
    input_ = int(input())

    if input_ == 0 : stack.pop()

    else : stack.append(input_)

# 출력부
print(sum(stack))