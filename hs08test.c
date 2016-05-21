#include<stdio.h>
 
int main(void)
{
	float i_balance;
	int withdrawal=0;
	scanf("%d %f",&withdrawal,&i_balance);
	if(withdrawal%5==0 && withdrawal<(i_balance-0.5))
	{
		printf("%0.2f",(i_balance-0.5-withdrawal));
	}
	else
		printf("%0.2f",i_balance);
	return 0;
} 