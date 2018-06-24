#include <stdio.h>

struct co
{
    int x;
    int y;
};

int main()
{
    int t,i,j;
    scanf("%d",&t);
    struct co my[t][t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&my[i]->x,&my[i]->y);
    }
    int tmpx,tmpy;
    for(i=0;i<t;i++)
    {
    	for(j=i+1;j<t;j++)
    	{
    		if(my[i]->x==my[j]->x)
    		{
    			if(my[i]->y>my[j]->y)
    			{
    			tmpx=my[i]->x;
    			my[i]->x=my[j]->x;
    			my[j]->x=tmpx;
    			tmpy=my[i]->y;
    			my[i]->y=my[j]->y;
    			my[j]->y=tmpy;
    			}
    			
    		}
    		
    		if(my[i]->x>my[j]->x)
    		{
    			tmpx=my[i]->x;
    			my[i]->x=my[j]->x;
    			my[j]->x=tmpx;
    			tmpy=my[i]->y;
    			my[i]->y=my[j]->y;
    			my[j]->y=tmpy;
    		}
    	}
    }
    
    
    for(i=0;i<t;i++)
    {
        printf("%d %d\n",my[i]->x,my[i]->y);
    }
    return 0;
}

