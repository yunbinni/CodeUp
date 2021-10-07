# reduce()를 이용한 다른 풀이
from functools import reduce

n = int(input())
print(reduce(lambda x, y: x*y, range(n, 0, -1)))