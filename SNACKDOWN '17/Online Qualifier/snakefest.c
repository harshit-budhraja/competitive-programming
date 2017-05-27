#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
    // To keep track of non-space character count
    int count = 0;
    int i=0;
 
    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
                                   // incremented
    str[count] = '\0';
}

int main()
{
	int R=0;	//Number of reports to be checked i.e. no of test cases
	int L=0;	//Length of each report
	scanf("%d",&R);
	while(R--)
	{
		int flag=1;	//Denoting the validity of the string i.e. [1 for Valid] and [0 for Invalid] 
		//Accepting the inputs from the judge
		scanf("%d",&L);
		char mystr[L];
		int i=0;
		scanf("%s",mystr);
		removeSpaces(mystr);
		//printf("STRING: %s\n",mystr);

		//Validation of the string according to the given constraints
		// 1. Should contain only 'H','T' or '.'
		for(i=0;i<L;i++)
		{
			//printf("Check[1] for '%c'\n",mystr[i]);
			if(mystr[i]=='H' || mystr[i]=='T' || mystr[i]=='.')
			{	
				flag=1;
			}
			else
			{
				//printf("FAILED: Check [1]\n");
				flag=0;
				break;
			}
		}

		// 2. Every head should be followed by a tail before another head is encountered
		// We check this using a 'tmp' variable whose value should only be {0,1}
		int tmp=0;
		for(i=0;i<L;i++)
		{
			if(tmp==0 || tmp==1)
			{
				flag=1;
			}
			else
			{
				//printf("FAILED: Check [2]\n");
				flag=0;
				break;
			}
			//printf("Check[2] for '%c'\n",mystr[i]);
			if(mystr[i]=='H')
			{
				tmp++;
				//printf("H encountered...tmp=%d\n",tmp);
			}
			if(mystr[i]=='T')
			{
				tmp--;
				//printf("T encountered...tmp=%d\n",tmp);
			}
		}
		if(tmp==0)
		{
			flag=1;
		}
		else
		{
			//printf("FAILED: Check [2]\n");
			flag=0;
		}


		//Giving the output of the algorithm
		if(flag==1)
			printf("Valid\n");
		else
			printf("Invalid\n");
	}
	return 0;
}