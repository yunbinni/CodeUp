a, b = map(int, input().split())

if(b%a==0) : print("%d*%d=%d" % (a, (b/a), b))
elif(a%b==0) : print("%d*%d=%d" % (b, (a/b), a))
else : print("none")