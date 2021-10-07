# filter()를 이용한 다른 풀이
n = int(input())
print(len(list(filter(lambda x: x%2==0, list(map(int, input().split()))))))