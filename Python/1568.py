n, a, b, d = 0, 0, 0, []

def maxi(a:int, b:int) -> int:
    rIdx = a-1

    for i in range(a-1, b):
        global d
        rIdx = i if d[i] > d[rIdx] else rIdx

    return rIdx+1

if __name__ == "__main__":
    n = int(input())
    d = list(map(int, input().split()))
    a, b = map(int, input().split())

    print(maxi(a, b))