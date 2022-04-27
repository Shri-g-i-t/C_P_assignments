/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to remove duplicate elements in a given array
 * Sample input  : Enter the size: 5
Enter elements into the array: 5 1 3 1 5
 * Sample output : After removing duplicates: 5 1 3
*/

#include<stdio.h>
#include <stdio.h>

void fun(int *arr1, int size, int *arr2, int *new_size);

int main()
{
	int size,i,new_size=0;
	printf("Enter the size: ");
	scanf("%d",&size);
	int arr[size],arr2[size];
	printf("Enter elements into the array: ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	//func call 
	fun(arr,size,arr2,&new_size);

	//printing arr2 till index of new_size
	printf("After removing duplicates: ");
	for(i=0;i<new_size;i++){
		printf("%d ",arr2[i]);
	}
}

void fun(int *arr,int size,int *arr2,int *new_size){
	//find the duplicate element and if found make it 0
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i] == 0 )
				continue;
			if(arr[i] == arr[j]){
				arr[j] = 0; 
				*new_size = *new_size + 1; //increment new_size
			}
		}
	}
    
    //copying non duplicate elements into arr2
	for(int i=0,j=0;i<size;i++){
		if(arr[i] != 0)
			arr2[j++]=arr[i];
	}

	*new_size = size - *new_size; //subtracting the 0 elements
}
