y = int(input())
print("yes" if y%4==0 and y%100!=0 or y%400==0 else "no")