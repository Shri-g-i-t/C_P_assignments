/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to find 2nd largest element in an array
 * Sample input  : Enter the size of the Array : 5
		    Enter the elements into the array: 5 1 4 2 8
 * Sample output : Second largest element of the array is 5
*/

#include<stdio.h>

int sec_largest(int *, int);

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
    ret = sec_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}

//function body
int sec_largest(int *arr,int size){  //storing base address of array in integer pointer arr
	
/*	int fst_larg,sec_larg;
	if(arr[0] > arr[1]){   //compare & assigning fst_larg and sec_larg
		fst_larg = arr[0];
		sec_larg = arr[1];
	}

	for(int i=2;i<size;i++){
		if(arr[i] > fst_larg){  //checking if arr element is greater than largest element
			sec_larg = fst_larg;  //storing frst_largest in second largest
			fst_larg = arr[i];  //assigning arr element as first largest
		}
		else if(arr[i] > sec_larg){ //if not check if array element is greater than sec largest
			sec_larg = arr[i]; //if yes assign array element as second largest
		}
	}
	return sec_larg; //return second largest value
*/
	int fl,sl; 
	fl=sl=-12345678; //assigning fl and sl large negative value
	//to find largest element 
	for(int i=0;i<size;i++){
		if(arr[i] > fl) //to update first largest
			fl=arr[i];
	}

	//to find seconfd largest element 
	for(int i=0;i<size;i++){
		if(arr[i] == fl) //skip iteration if first largest elemnt is found
			continue;
		if(arr[i] > sl) //to update second largest
			sl=arr[i];
	}
	return sl;

} 


