#include <stdio.h>
void quicksort(int a[],int,int);
int main(void) {
	int a[10000];
	int i,t,j,K,N;
	float p;
	scanf("%d",&t);
	while(t--)
	{
	    float s=0;
	    scanf("%d%d",&N,&K);
	    for(i=0;i<N;i++)
	    {
	       scanf("%d",&a[i]);
	    }
	        
	        quicksort(a,0,N-1);
	        for(i=K;i<N-K;i++)
	        {
	             s=s+a[i];
	        }
	        p=s/(N-(2*K));
	        printf("%f",p);
	        printf("\n");
	    
	}
return 0;
}
	        
	         void quicksort(int arr[],int low,int high)
              {
                     int pivot,j,temp,i;
                     if(low<high)
                     {
                           pivot = low;
                            i = low;
                            j = high;
 
                           while(i<j)
                           {
                                while((arr[i]<=arr[pivot])&&(i<high))
                                   {
                                         i++;
                                    }
 
                                  while(arr[j]>arr[pivot])
                                   {
                                              j--;
                                    }
 
                                if(i<j)
                                { 
                                      temp=arr[i];
                                      arr[i]=arr[j];
                                      arr[j]=temp;
                                  }
                            }
 
                             temp=arr[pivot];
                             arr[pivot]=arr[j];
                               arr[j]=temp;
                            quicksort(arr,low,j-1);
                            quicksort(arr,j+1,high);
                }
}