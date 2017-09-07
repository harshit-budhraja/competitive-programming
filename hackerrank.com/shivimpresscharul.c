#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int fn(long long int i, long long int j){
    return (i&j)*(i|j);
}

int main() {
    long int n=0,i=0,j=0;
    scanf("%ld",&n);
    long long int a[n],maxans=0,tmp=0;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    maxans=fn(a[0],a[1]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)    continue;
            tmp=fn(a[i],a[j]);
            if(tmp>maxans)  maxans=tmp;
        }
    }
    printf("%lld",maxans);
    return 0;
}