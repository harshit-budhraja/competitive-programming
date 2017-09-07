#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

//cd- current_difference
//md- minimum difference
int main() 
{
    int i,cd,md=INT_MAX,count=0,min_index[1024];
    long int N;
    scanf("%ld",&N);
    long long int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%lld",&A[i]);    
    }
    qsort(A,N,sizeof(long long int),cmpfunc);
    for(i=0;i<N;i++)
    {
        cd=abs(A[i+1]-A[i]);
        if(cd<md)
        {
            md=cd;
            count=0;
            min_index[count++]=i;
        }
        else if(cd==md)
        {
            min_index[count++]=i;
        }
    }
            
    for(i=0;i<count;i++)
    {
        printf("%d %d",A[min_index[i]],A[min_index[i]+1]);
    }
    return 0;
}
