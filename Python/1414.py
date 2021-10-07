s = input()
cnt1, cnt2 = 0, 0

for i in range(len(s)):
    if s[i]=='c' or s[i]=='C':
        cnt1 += 1
        if i < len(s) - 1 and (s[i+1]=='c' or s[i+1]=='C'):
            cnt2 += 1

print(cnt1)
print(cnt2)