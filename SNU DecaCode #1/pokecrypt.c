#include<stdio.h>
#include<math.h>

checkSumProd(long n){
	int prodF = 0, oddCount = 0, rem;
	while (n > 0){
		rem = n % 10;
		if (rem%2){
			oddCount += 1;
		}
		else{
			prodF = 1;
		}
		n = n/10;
	}
	
	if (prodF && (oddCount % 2 == 0)){
		return 1;
	}
	else return 0;
}

int main()
{
int prime[40000],i,j,k,p,t,cap,np=1,start,f;
int m,n,q;
prime[0]=2;
for(i=3;i<32000;i+=2){
    cap=sqrt(i)+1;
    f=0;
    for(j=0;j<np;j++){
        p=prime[j];
        if(p>=cap) break;
        if(i%p==0){
        f=1;
        break;
        }
    }
    if(f==0){
    prime[np]=i;
    np++;
    }
}
np--;


scanf("%d",&t);
for(i=0;i<t;i++){
    int count = 0;
    
    scanf("%d%d",&m,&n);
    if(m<2)m=2;
    cap=sqrt(n)+1;
    int flag[100001];
    for(j=0;j<=100000;j++) flag[j]=1;
    for(j=0;j<np;j++){
        p=prime[j];
        if(p>=cap)break;
        if(m<=p)start=p*2;
        else start=m+((p-m%p)%p);
        for(k=start;k<=n;k+=p){
            flag[k-m]=0;

        }
    }
    start=(m%2)?m:m+1;
    if(m==2)count += 1;
    for(q=start;q<=n;q+=2){
        if(flag[q-m]==1){
            if (checkSumProd(q)){
                count += 1;
            }
        }
    }
    
    printf("%d\n", count);
}
return 0;
}
