y, m, d = map(int, input().split())
concls = y + m + d

print("���" if int(str(concls)[-3])%2==0 else "�׷�����")