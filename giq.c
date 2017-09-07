/*
* To make an algorithm to display the frequency of alphabets
* occuring in the given character string in the format like -
* Input - aabbbccggtttt
* Output - 2a3b2c2g4t
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	int size=0,i=0,j=0,count=0;
	scanf("%d",&size);
	char str[size],temp;
	scanf("%s",&str);
	for(i=0;i<size;i++){
		temp=str[i];
		count=0;
		j=i;
		while(i<=j){
			if(str[j]!=temp){
				printf("%d%c",count,temp);
				break;
			}
			else{
				count++;
			}
			j++;
		}
	}
	return 0;
}
