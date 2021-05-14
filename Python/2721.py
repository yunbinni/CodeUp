S1 = input()
S2 = input()
S3 = input()

print("good" if S1[-1]==S2[0] and S2[-1]==S3[0] and S3[-1]==S1[0] else "bad")