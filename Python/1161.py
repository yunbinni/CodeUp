a, b = map(int, input().split())
s1, s2, s3 = '','',''

if a%2==0 : s1 = '礎熱'
else : s1 = '?汝?'

if b%2==0 : s2 = '礎熱'
else : s2 = '?汝?'

if s1 == s2 : s3 = '礎熱'
else : s3 = '?汝?' # XOR

print("{}+{}={}".format(s1, s2, s3))