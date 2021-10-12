def mymin(a:int, b:int) -> int:
    return a if a <= b else b

if __name__ == "__main__":
    a, b = map(int, input().split())
    print( mymin(a, b) )