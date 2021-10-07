s = input()
print(*[i+1 for i in range(len(s)) if s[i]=='t'])