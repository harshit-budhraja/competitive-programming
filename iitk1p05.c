#include <stdio.h>
int main(){
	int T, N, x, max;
	scanf("%d", &T);
	while(T != 0){
		T--;
		scanf("%d", &N);
		max = 0;
		while(N != 0){
			N--;
			scanf("%d", &x);
			if(max < x)	max = x;
		}
		printf("%d\n", max);
	}
	return 0;	
} 