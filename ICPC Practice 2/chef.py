import random
from itertools import combinations_with_replacement

def get_random(list):
    return random.choice(list)


Tlist=['1','2','3','4','5','6','7','8','9','10']
T=int(get_random(Tlist))
print T
Alist="abc"
for i in range(T):
	for i in combinations_with_replacement(sorted(Alist),int(get_random(Tlist))):
		continue;
	print ("".join(i))
	print get_random(Tlist)
	



