# 재귀용법을 이용한 다른 풀이
def fac(n):
    if n==1 : return 1
    else : return n*fac(n-1)

n = int(input())
print(fac(n))