class Machine():
    def __init__(self, id:int, gas:int) -> None:
        self.id = id
        self.gas = gas

# 정렬 함수
def sort(machines: list) -> None:
    n = len(machines)

    for i in range(n - 1):
        for j in range(n - 1 - i):
            if machines[j].id > machines[j + 1].id:
                machines[j], machines[j + 1] = machines[j + 1], machines[j]

if __name__ == "__main__":
    # 입력부
    n = int(input())
    machines = []

    # 계산부
    for i in range(n):
        id, gas = list(map(int, input().split()))
        machines.append(Machine(id, gas))

    sort(machines=machines)
    
    # 출력부
    for i in machines:
        print(i.id, i.gas)