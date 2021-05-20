n = int(input())

if n%10==1 and n!=11 : print("%dst" % n)
elif n%10==2 and n!=12 : print("%dnd" % n)
elif n%10==3 and n!=13 : print("%drd" % n)
else : print("%dth" % n)