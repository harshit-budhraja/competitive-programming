#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T;
    long long int K;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&K);
        if(K%2==0)
        {
            printf("%lld\n",(K/2)*(K/2));
        }
        else
        {
            printf("%lld\n",(K/2)*(K/2 + 1));
        }
    }
    return 0;
}
