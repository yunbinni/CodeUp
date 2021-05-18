y, m, d = map(int, input().split())
concls = y - m + d

if concls%10==0 : print("대박")
else : print("그럭저럭")