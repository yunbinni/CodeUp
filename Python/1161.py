a, b = map(int, input().split())
s1, s2, s3 = '','',''

if a%2==0 : s1 = 'Â¦¼ö'
else : s1 = 'È¦¼ö'

if b%2==0 : s2 = 'Â¦¼ö'
else : s2 = 'È¦¼ö'

if s1 == s2 : s3 = 'Â¦¼ö'
else : s3 = 'È¦¼ö' # XOR

print("{}+{}={}".format(s1, s2, s3))