/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/
#include <stdio.h>

void print_sort(int*, int);

int main()
{
    int size, iter;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }
    
    print_sort(arr, size);
}

void print_sort(int *arr,int size){
	int i,temp_index,index=0,s,smallest;
	s=size;
	while(s){
		smallest=arr[0];
		temp_index=index=0;
		for(i=1;i<size;i++){
			if(index == i)
				continue;
			if(arr[i]<smallest){
				smallest=arr[i];
				temp_index=i;
			}
		}
		index=temp_index;
		printf("\nsmallest = %d",arr[index]);
		s--;
	}
}

