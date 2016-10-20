//C++14

#include <iostream>
using namespace std;

void quickSort( int array[], int firstIndex, int lastIndex){
    int pivotIndex, temp, index1, index2;

    if(firstIndex < lastIndex)
    {
        pivotIndex = firstIndex;
        index1 = firstIndex;
        index2 = lastIndex;
        while(index1 < index2)
        {
            while(array[index1] <= array[pivotIndex] && index1 < lastIndex)
            {
                index1++;
            }
            while(array[index2]>array[pivotIndex])
            {
                index2--;
            }

            if(index1<index2)
            {
                temp = array[index1];
                array[index1] = array[index2];
                array[index2] = temp;
            }
        }

        temp = array[pivotIndex];
        array[pivotIndex] = array[index2];
        array[index2] = temp;
        quickSort(array, firstIndex, index2-1);
        quickSort(array, index2+1, lastIndex);
    }
}
void printArray(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int m=300;
		int n,i,j,sum=0,penalty=0;
		cin>>n;
		int task[n];
		for(i=0;i<n;i++){
			cin>>task[i];
		}
		quickSort(task,0,n-1);
		//printArray(task,n);
		i=0;
		while((sum+task[i])<=m && i<n){
			sum+=task[i++];
		}
		cout<<i;
		for(j=0;j<i;j++){
			penalty += (task[j]*(i-j));
		}
		cout<<" "<<penalty<<endl;
	}
	return 0;
}
