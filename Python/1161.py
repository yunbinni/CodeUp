a, b = map(int, input().split())
s1, s2, s3 = '','',''

if a%2==0 : s1 = '¦��'
else : s1 = 'Ȧ��'

if b%2==0 : s2 = '¦��'
else : s2 = 'Ȧ��'

if s1 == s2 : s3 = '¦��'
else : s3 = 'Ȧ��' # XOR

print("{}+{}={}".format(s1, s2, s3))