def ABS(num):
    if num >= 0:
        return num
    else:
        return -num

if __name__ == "__main__":
    print(f'{ABS( float(input())):.10g}')