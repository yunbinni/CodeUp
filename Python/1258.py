print(sum([i for i in range(1, int(input()) + 1)]))

# reduce()를 이용한 다른 풀이
from functools import reduce

print(reduce(lambda x, y: x+y, [i for i in range(1, int(input()) + 1)]))