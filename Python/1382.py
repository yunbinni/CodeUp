print("\n".join(["\t".join(["%d x %d = %2d" % (j, i, j*i) for j in range(2, 6)]) for i in range(1, 10)]))