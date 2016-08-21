// Author - Harshit Budhraja
#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	int row[r],col[c],i=0,j=0;
	char str[r];
	//Initialising all rows and columns with 1
	for(i=0;i<r;i++)	row[i]=1;
	for(j=0;j<c;j++)	col[j]=1;
	//Now accepting the strings
	for(i=0;i<r;i++)
	{
		scanf("%s",&str);
		for(j=0;j<c;j++)
		{
			if(str[j]=='S')
			{
				row[i]=0;
				col[j]=0;
			}
		}
	}
	//Now finding the free rows and free columns to be eaten
	int freer=0,freec=0;
	for(i=0;i<r;i++)
	{
		if(row[i]!=0)
			freer++;
	}
	for(j=0;j<c;j++)
	{
		if(col[j]!=0)
			freec++;
	}
	//Now displaying the result
	printf("%d",(freer*c)+(freec*r)-(freer*freec));
	return 0;
}
