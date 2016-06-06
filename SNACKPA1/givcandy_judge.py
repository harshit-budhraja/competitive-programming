import random
import sys

limit = 5
t = random.randint(1,limit)
sys.stdout.write("%s\n" % t)
for i in range(0,t):
	for j in range(4):
		n = random.randint(1,9)
		sys.stdout.write("%s " % n)
	sys.stdout.write('\n')
print '\n'
