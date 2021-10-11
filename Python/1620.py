from functools import reduce

""" 각 자리를 더하는 함수 """
def f(num: str) -> str:
    return str(reduce(lambda x, y : int(x) + int(y), num, 0))

""" 메인 함수 """
if __name__ == "__main__":
    # 입력부
    num = input()

    # 계산부
    while len(num) != 1:
        num = f(num)

    # 출력부
    print(num)