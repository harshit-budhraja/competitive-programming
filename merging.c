#include <stdio.h>

int main(void) {
	int a,b,c,i,j,k;
	scanf("%d",&a);
	int A[a];
	for(i=0;i<a;i++)
		scanf("%d",&A[i]);
	scanf("%d",&b);
	int B[b];
	for(i=0;i<b;i++)
		scanf("%d",&B[i]);
	int C[a+b];
	for(i=0;i<a+b;i++)
		C[i]=0;
	
	// Now the merge logic in O(n)
	i=j=k=0;
	while(i<a && j<b)
	{
		if(A[i]<B[j])
			C[k++]=A[i++];
		else
			C[k++]=B[j++];
	}
	if(i>=a)
	{
		while(j<b)
			C[k++]=B[j++];
	}
	else if(j>=b)
	{
		while(i<a)
			C[k++]=A[i++];
	}
	
	// Printing the output
	printf("Size of the new array = %d + %d = %d\n",a,b,k);
	for(i=0;i<k;i++)
		printf("%d ",C[i]);
	return 0;
}


/*
* Input

8
1 3 5 7 9 10 12 13
7
2 4 6 8 10 11 12

* Output
Size of the new array = 8 + 7 = 15
1 2 3 4 5 6 7 8 9 10 10 11 12 12 13 

*/