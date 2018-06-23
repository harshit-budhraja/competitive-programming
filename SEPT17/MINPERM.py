# Author:- arachnis
import copy
 
def isgood(a):
	for i in range(0,len(a)):
		if((i+1)==int(a[i])):
			return 0
	return 1
 
def print_list(list):
	for element in list:
		print(str(element), end=' ')
	print('')
 
def lexsmall(a,b):
	for i in range(0,len(a)):
		if(a[i] < b[i]):
			return a
		elif(b[i] < a[i]):
			return b
	return a
 
def perm(a,k=0):
	if(k==len(a)):
		if(isgood(a)==1):
			#print(a)
			listoflist.append(copy.copy(a))
	else:
		for i in range(k,len(a)):
			a[k],a[i] = a[i],a[k]
			perm(a, k+1)
			a[k],a[i] = a[i],a[k]
 
T = int(input())
while(T > 0):
	mylist = []
	listoflist = []
	n = int(input())
	for i in range(1,n+1):
		mylist.extend(str(i))
	perm(mylist)
	print_list(listoflist[0])
	T=T-1
