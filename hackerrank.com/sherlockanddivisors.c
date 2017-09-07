#include <stdio.h>
#include <stdlib.h>

int main() {
    int T,count=0,i;
    long long int N;
    scanf("%d",&T);
    while(T--)
    {
            count=0;
            scanf("%lld",&N);
            i=1;
            while(i*i<N)
            {
                if(N%i==0)
                {
                    if(i%2==0)  count++;
                    if((N/i)%2==0)  count++;
                }
                i++;
            }
            if(i*i==N && i%2==0)    count++;
            printf("%d\n",count);
    }
    return 0;
}