#include<stdio.h>
#include<string.h>

int main()
{
	int T,activities=0,bug_sev=0,rank=0,totalladdu=0,months=0,i;
	char *origin;
	scanf("%d",&T);
	for(;T>0;T--)
	{
		bug_sev=rank=totalladdu=months=0;
		scanf("%d %s",&activities,&origin);
		char *ach[activities];
		for(;activities>0;activities--)
		{
			scanf("%s",&ach[activities]);
			if(strcmp(ach[activities],"BUG_FOUND")==0)
				scanf("%d",&bug_sev);
			else if(strcmp(ach[activities],"CONTEST_WON")==0)
				scanf("%d",&rank);
		}
		for(i=0;i<activities;i++)
		{
			if(strcmp(ach[i],"TOP_CONTRIBUTOR")==0)
				totalladdu+=300;
			if(strcmp(ach[i],"CONTEST_HOSTED")==0)
				totalladdu+=50;
			totalladdu+=bug_sev;
			if(rank<20)
				totalladdu+=300+(20-rank);
			else
				totalladdu+=300;
		}
		if(strcmp(origin,"INDIAN")==0)
			months=totalladdu/200;
		else
			months=totalladdu/400;
		printf("%d\n",months);
	}
	return 0;
}
