# Author:- Harshit Budhraja
def palindrome(input):
    return input == input[::-1]
    
def get_all_substrings(string):
   length = len(string)+1
   hah = [string[x:y] for x in range(length) for y in range(length) if string[x:y]]
   return (hah)
    

T = int(input())
while T:
	str1 = input()
	str2 = input()
	str3 = input()
	count = 0
	for sub1 in get_all_substrings(str1):
		for sub2 in get_all_substrings(str2):
			for sub3 in get_all_substrings(str3):
				if(palindrome(sub1+sub2+sub3)):
					count += 1
	print (count)
	T-=1