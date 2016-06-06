import random
import sys

limit = 50000
t = random.randint(1,limit)
sys.stdout.write("%s\n" % t)
for i in range(0,t):
	n = random.randint(3,limit)
	sys.stdout.write("%s\n" % (2*n))
	for j in range(0,n):
		num = random.randint(0,limit)
		sys.stdout.write(str(num) + " " + str(num) + " ")
	sys.stdout.write('\n')
print '\n\n\n'
