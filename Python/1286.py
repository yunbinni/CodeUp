import sys

temp, mini, maxi = 0, sys.maxsize, -(sys.maxsize + 1)

for i in range(5):
    temp = int(input())
    if temp > maxi : maxi = temp
    if temp < mini : mini = temp

print(maxi)
print(mini)