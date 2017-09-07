#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

// Returns minimum sum of product of two arrays
// with permutations allowed
int minValue(int A[], int B[], int n)
{
    // Sort A and B so that minimum and maximum
    // value can easily be fetched.
    qsort(A, n, sizeof(int), cmpfunc);
    qsort(B, n, sizeof(int), cmpfunc);
 
    // Multiplying minimum value of A and maximum
    // value of B
    int result = 0;
    for (int i = 0; i < n; i++)
        result += (A[i] * B[n - i - 1]);
 
    return result;
}

int main() {
    int n=0,i=0,j=0;
    scanf("%d",&n);
    int c1[n],c2[n];
    for(i=0;i<n;i++)
        scanf("%d",&c1[i]);
    for(i=0;i<n;i++)
        scanf("%d",&c2[i]);
    printf("%d",minValue(c1,c2,n));
    return 0;
}