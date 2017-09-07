#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int maxSubArraySum(int a[],int size)
{
    int max_so_far = 0, max_ending_here = 0;
    int i; 
    for (i=0;i<size;i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int max(int a[],int size)
{
    int largest=a[0],i;
    for(i=1;i<size;i++)
        if(a[i]>largest)    largest=a[i];
    return largest;
}

int main() 
{
    int T,N,i,allpositive=1,psum=0,msum=0,allnegative=1;
    scanf("%d",&T);
    while(T--)
    {
        psum=msum=0;
        allpositive=allnegative=1;
        scanf("%d",&N);
        int A[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            psum+=A[i];
            if(A[i]>0)
            {
                allnegative=0;
                msum+=A[i];
            }
            if(A[i]<0)
                allpositive=0;
        }
        
        if(allpositive)
        {
            printf("%d %d\n",psum,psum);
        }
        
        else if(allnegative)
        {
            printf("%d %d\n",max(A,N),max(A,N));
        }
        
        else
        {
            printf("%d %d\n",maxSubArraySum(A,N),msum);
        }
    }  
    return 0;
}
