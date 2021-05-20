a, b = map(float, input().split())
std = (a - 100) * 0.9
bimando = (b - std) * 100 / std

print("정상" if bimando <= 10 else "과체중" if bimando <= 20 else "비만")