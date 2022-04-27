/*
 * Name          : Shridhar Pujar
 * Date          : 08/04/2022
 * Description   : WAP to find the median of two unsorted arrays
 * Sample input  : Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5
	Enter the elements one by one for Array A: 3 2 8 5 4
	Enter the elements one by one for Array B: 12 3 7 8 5
 * Sample output : Median of array1 : 4
	Median of array2 : 7
	Median of both arrays : 5.5  
*/

#include<stdio.h>
int main(){
	int size1,size2,i,j;
	float median1,median2;
	//taking array inputs
	printf("Enter the 'n' value for Array A: ");
	scanf("%d",&size1);
	printf("\nEnter the 'n' value for Array B: ");
	scanf("%d",&size2);
	int arr1[size1],arr2[size2];
	printf("\nEnter the elements one by one for Array A: ");
	for(i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter the elements one by one for Array B: ");
	for(i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
  
  	//sorting array1
	for(i=0;i<size1-1;i++){
		for(j=0;j<size1-1-i;j++){
			if(arr1[j] > arr1[j+1]){
				arr1[j]=arr1[j] ^ arr1[j+1];
				arr1[j+1]=arr1[j] ^ arr1[j+1];
				arr1[j]=arr1[j] ^ arr1[j+1];
			}
		}
	}
	/*//printing array1
	putchar('\n');
	printf("Sorted Array A elements : ");
	for(i=0;i<size1;i++){
		printf("%d ",arr1[i]);
	}
    */
    //sorting array2
	for(i=0;i<size2-1;i++){
		for(j=0;j<size2-1-i;j++){
			if(arr2[j] > arr2[j+1]){
				arr2[j]=arr2[j] ^ arr2[j+1];
				arr2[j+1]=arr2[j] ^ arr2[j+1];
				arr2[j]=arr2[j] ^ arr2[j+1];
			}
		}
	}
	/*//printing array2
	putchar('\n');
	printf("Sorted Array B elements : ");
	for(i=0;i<size2;i++){
		printf("%d ",arr2[i]);
	}
   */

   	//finding median of array1
   if(size1 & 01){
   	   median1=arr1[(size1/2)];
   }
   else{
   	   median1=(arr1[size1/2] + arr1[(size1/2)-1])/(float)2;
   }
   //finding median of array2
   if(size2 & 01){
   	   median2=arr2[(size2/2)];
   }
   else{
   	   median2=(arr2[size2/2] + arr2[(size2/2)-1])/(float)2;
   }
   printf("\nMedian of array1 : %g",median1);
   printf("\nMedian of array2 : %g",median2);
   printf("\nMedian of both arrays : %g",(median1+median2)/2);

   return 0;

}
