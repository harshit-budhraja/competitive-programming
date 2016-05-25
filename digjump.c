#include<stdlib.h>
#include<string.h>
#define INF 10000005

int min(int a, int b)
{
    int min = (a < b)? a : b;
    return min;
}
int main(){
long min_steps[10];
    char str[100005];
	scanf("%s",str);
 
	int n = strlen(str);
 
	if (n == 1)
	{	printf("0\n");	return 0; }
	if (n == 2)
	{	printf("1\n");	return 0; }
 
	long * steps = (long *) calloc(n, sizeof(long));
 
	// Steps is the dp array where we get the ans. We get the ans in steps[n-1]
	steps[0] = 0, steps[1] = 1;
 
	int i;
	for (i = 0; i < 10; i++) min_steps[i] = INF;
 
 
	min_steps[str[0]-'0'] = 0;
	if(str[0] - '0' !=  str[1] - '0')
		min_steps[str[1]-'0'] = 1;
 
	// This is the first pass that goes ahead
	for(i = 2; i < n; i++)
	{
		int num = str[i]-'0';
		// There can be basically 3 things that can happen
		if(steps[i-1] < min_steps[num])
		{
			steps[i]       = steps[i-1]+1;
			min_steps[num] = steps[i];
		}
		else if(steps[i-1]  > min_steps[num])
		{
			steps[i] = min_steps[num] + 1;
		}
		else if(steps[i-1] == min_steps[num])
		{	
			steps[i] = steps[i-1] + 1;
			continue;		
		}
	}
	
 
	// This is the 2nd pass that goes in the reverse direction
	for (i = n-2; i > 1; i--)
	{
		int num = str[i] - '0';
		steps[i] = min(steps[i], steps[i+1] + 1);
		// Now there can be 3 cases
		if(steps[i] == min_steps[num])
		{
			continue;
		}
		else if(steps[i] > min_steps[num])
		{
			steps[i] = min_steps[num] + 1;
		}
		else if(steps[i] < min_steps[num])
		{
			min_steps[num] = steps[i];
		}
	}
 
	
	// This is the final pass that goes in the forward direction and gives us the answer in steps[n-1]
	for(i = 2; i < n; i++)
	{
		int num = str[i] - '0';
		// If jumping from previous digit is not profitable
		if (steps[i] < steps[i-1] + 1)
		{
			// If jumping from earlier min position is not good then take this one as the min position for current digit
			if(steps[i] < min_steps[num])
			{
				min_steps[num] = steps[i];
			}
			// Else make a jump from earlier position 
			else if(steps[i] > min_steps[num])
			{
				steps[i] = min_steps[num] + 1;
			}
			// If it's equal then let it as it is
		}
		else			// Jumping from previous digit is profitable
		{
			steps[i] = steps[i-1] + 1;		// Jump
			if(steps[i] < min_steps[num])   // Check whether jumping from last min for current digit would be better or not
			{
				min_steps[num] = steps[i];  // If not then change min for current digit
			}
			if(steps[i] > min_steps[num])
			{
				steps[i] = min_steps[num] + 1;  // Else jump
			}
		}
	}
	printf("%ld\n",steps[n-1]);
	free(steps);
	
	return 0;
} 
