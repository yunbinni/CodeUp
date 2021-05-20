a, b, c = map(int, input().split())
print("yes" if a + b > c and a + c > b and b + c > a else "no")

# 다른 풀이(정렬된 리스트 이용)
tri = sorted(list(map(int, input().split())))
print("yes" if tri[2] < tri[0] + tri[1] else "no")