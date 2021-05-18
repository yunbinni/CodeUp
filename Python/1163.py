y, m, d = map(int, input().split())
concls = y + m + d

print("대박" if int(str(concls)[-3])%2==0 else "그럭저럭")