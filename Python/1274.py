n = int(input())
print("prime" if len([i for i in range(1, n + 1) if n%i==0])==2 else "not prime")