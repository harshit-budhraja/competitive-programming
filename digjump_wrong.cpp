//C++ 14

#include <iostream>
#include <cstring>
using namespace std;
long int findJumpIndex(char num[],unsigned long int endIndex)
{
	for(unsigned long int index = 0; endIndex > 0 && index <= endIndex - 1; ++index)
	{
		if((num[index] - '0') == (num[endIndex] - '0'))
		{
			return index;
		}
	}
	return -1;
}
int main()
{
	char num[100000];
	long int index, size;
	long int jumpIndex = 0;
	int count = 0;
	cin >> num;
	size = index = strlen(num);
	index = index - 1;
	while(index >= 0 && index < size)
	{ 
		jumpIndex = findJumpIndex(num, index);
		if(jumpIndex == -1)
			index -= 1;
		else
			index = jumpIndex;
		if(index >= 0)
			++count;
	}
	cout<<count<<endl;
	return 0;
}
