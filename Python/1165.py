min, score = map(int, input().split())
while(min < 90):
    min += 5
    score += 1
print(score)