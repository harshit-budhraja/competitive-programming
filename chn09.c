#include<stdio.h>
int main()
{
   int ca,cb ,b;
   scanf("%d",&b);
   int i,j ;
   for( i=0;i<b;i++)
 
 {
   char arr[100];
   scanf("%s",arr);
   ca=0 ; cb=0 ;
   for(j=0 ; arr[j]!='\0' ; j++)
   {
     if(arr[j]=='a')
     ca++;
     else
     cb++;
    }
   if(ca>cb)
   printf("%d\n",cb);
   else
   printf("%d\n",ca);
 }
 return 0;
}  