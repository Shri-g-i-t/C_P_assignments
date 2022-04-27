/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to find 3rd largest element in an array
 * Sample input  : Enter the size of the Array : 5
		    Enter the elements into the array: 5 1 4 2 8
 * Sample output : Second largest element of the array is 4
*/

#include<stdio.h>

int third_largest(int *, int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i=0;i<size;i++){
    	scanf("%d",&arr[i]);
	}
    
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}

//function body
int third_largest(int *arr,int size){  //storing base address of array in integer pointer arr
	
	int fl,sl,tl;
	fl=sl=tl=-123456789;

	//to get largest element
	for(int i=0;i<size;i++){
		if(arr[i] > fl){  //checking if arr element is greater than largest element
			fl = arr[i];  //assigning arr element as first largest
		}
	}

	//to get second largest element
	for(int i=0;i<size;i++){
		if(arr[i] == fl) //skip iteration if largest element is found
			continue;
		if(arr[i] > sl){ //to update second largest 
			sl = arr[i];
		}
	}

	//to get third largest element
	for(int i=0;i<size;i++){
		if(arr[i] == fl || arr[i] == sl) //skip iteration if largest and second largest element is found
			continue;
		if(arr[i] > tl) //to update third largest
			tl = arr[i];
	}

	return tl;
} 


