def mysubstr(str:str, start:int, count:int) -> str:
    return str[start:start+count]

if __name__ == "__main__":
    string = input()
    start, count = map(int, input().split())
    print( mysubstr(string, start, count) )