a, b, c = map(int, input().split())

if a <= 170 : print("CRASH %s" % str(a))
elif b <= 170 : print("CRASH %s" % str(b))
elif c <= 170 : print("CRASH %s" % str(c))
else : print("PASS")

# 다른 풀이(filter-lambda를 이용하여 충돌터널 첫번째를 골라내는 풀이)
try:
    print("CRASH %d" % list(filter(lambda x: x <= 170, list(map(int, input().split()))))[0])
except:
    print("PASS")