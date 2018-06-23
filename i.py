n = int(input()) 
string = []
for i in range(n):
    string.append([j for j in input().split()])
key,rev,ctype = input().split()
sorted_string = []
if ctype=='numeric':
	key = int(key)-1
	l = []
	for i in range(n):
		l.append(int(string[i][key]))
	l2 = list(l)
	if rev=='false':
		# Ascending order sorting
		while l:
			s = min(l)
			index = l.index(s)
			index2 = l2.index(s)
			sorted_string.append(string[index2])
			l.pop(index)
	elif rev=='true':
		# Descending order sorting
		while l:
			s = max(l)
			index = l.index(s)
			index2 = l2.index(s)
			sorted_string.append(string[index2])
			l.pop(index)
	# Display the output
	for i in range(len(sorted_string)):
		for j in range(len(sorted_string[i])):
			print(sorted_string[i][j], end=" ")
		print()
elif ctype=='lexicographic':
	l = list(string)
	if rev=='false':
		l.sort()
	elif rev=='true':
		l.sort(reverse=True)
	for i in range(len(l)):
		print(l[i][0])