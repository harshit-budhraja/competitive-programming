/* Replace To Make Regular Bracket Sequence
*/
#include<stdio.h>
#include<string.h>
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[1000010],b[1000010];	
		scanf("%s",a);
		int i=0,k=0;
		char c; 
		int count=0,p=0,j=0,length=strlen(a);
		if((length&1))
			{
				printf("Impossible\n");
				continue;
			}
		for(i=0;i<length;i++){
			if(j<0){
				printf("Impossible\n");
				p++;
				break;
			}
				
			c=a[i];
			if(a[0]==']' ||a[0]=='}' ||a[0]==')' ||a[0]=='>' ){
				printf("Impossible\n");
				p++;
				break;
			}
				
			else if(c=='['||c=='{'||c=='('||c=='<'){
			
				b[j]=c;
				j++;
				}
			else{
				if(c==']'){
					if(b[j-1]=='['){
						j--;
					}
					else{
						j--;
						count++;
					}
				}
				if(c=='}'){
					if(b[j-1]=='{'){
						j--;
					}
					else{
						j--;
						count++;
					}
				}
				if(c=='>'){
					if(b[j-1]=='<'){
						j--;
					}
					else {
						j--;
						count++;
					}
				}
				if(c==')'){
					if(b[j-1]=='('){
						j--;
					}
					else{
						j--;
						count++;
					}
				}
			}
		}
		
		if(p==0 && j==0)
			printf("%d\n",count);
		else if(j!=0 && p==0)
			printf("Impossible\n");
	}
}
