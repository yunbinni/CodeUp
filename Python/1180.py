rcb = input()
res = int(rcb[-1] + rcb[-2])*2
msg = res if res < 100 else res - 100

print(msg)
print("GOOD" if msg <= 50 else "OH MY GOD")