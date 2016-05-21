#include <stdio.h>
#include <string.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k,m,i,word_count,j,ph_len[2501],flag;
	    char phrase[2501][6];
	    word_count=0,j=0;
	    scanf("%d %d",&n,&k);
	    char forg[n][10];
	    for(i=0;i<n;i++)
	    scanf(" %s",forg[i]);
	    for(i=0;i<k;i++){
	        scanf("%d",&m);
	        word_count+=m;
	        for(;j<word_count;j++){
	            scanf(" %s",phrase[j]);
	            ph_len[j]=strlen(phrase[j]);
	        }
	    }
	    for(i=0;i<n;i++){
	        flag=0;
	        for(j=0;j<word_count;j++){
	            for(k=0;phrase[j][k]!='\0';k++){
	                if(forg[i][k]==phrase[j][k])
	                continue;
	                else
	                break;
	            
	            }
	            if(k==ph_len[j]){
	            flag=1;
	            break;
	            }
	            
	        }
	        if(flag==1)
	        printf("YES ");
	        else
	        printf("NO ");
	    }
	    printf("\n");
	}
	return 0;
} 