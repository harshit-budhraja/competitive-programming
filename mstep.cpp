#include <stdio.h>
#define gc getchar_unlocked

int abs(int n)
{
  return (n < 0)?(0-n):n;
}


int main()
{
  int T,N,C,i,j,r;
  scanf("%d",&T);
  while(T--)
  {
    scanf("%d",&N);
    int a[(N*N)+1][2];
    for(i=0;i<N;++i)
    {
      for(j=0;j<N;++j)
      {
        scanf("%d",&C);
        a[C][0]=i;
        a[C][1]=j;
      }
    }
    for(i=1,r=0;i<(N*N);++i)
    {
      r+=abs(a[i][0]-a[i+1][0]);
      r+=abs(a[i][1]-a[i+1][1]);
    }
    printf("%d\n",r);
  }
  return 0;
}  