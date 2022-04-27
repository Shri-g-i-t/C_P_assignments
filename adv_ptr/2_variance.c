/*
 * Name          : Shridhar Pujar
 * Date          : 26/04/2022
 * Description   : Variance calculation with dynamic arrays
 * Sample input  : Enter the no.of elements : 5
 *                 1 2 3 4 5
 * Sample output : Variance is 2.000000
*/


#include<stdio.h>
#include<stdlib.h>
//func declaration
float variance(int *,int );
int  main(){
	int n,i;
	float vari;
	printf("Enter the no. of elements : ");
	scanf("%d",&n);

	//Dynamic memory allocation for array elements
	int *arr=malloc(n * sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	//Func call
	vari = variance(arr,n);
	printf("Variance is %f",vari);

	return 0;
}

float variance(int *arr,int size){
	int sum=0,mean;
	float sigma;
	/*printf("\narr : ");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	*/

	//Calculate sum
	for(int i=0;i<size;i++)
		sum = sum + arr[i];
	//printf("\nSum : %d",sum);
   
   	//calculate mean
	mean = sum / size;
	//printf("\nmean : %d",mean);

	//Calculating D (arr[i] - mean)
	for(int i=0;i<size;i++)
		arr[i] = arr[i] - mean;


	/*printf("\narr : ");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	*/

	//Calculating D square
	for(int i=0;i<size;i++)
		arr[i] = arr[i] * arr[i];

	/*printf("\narr : ");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	*/
	
	//Calculating sum of D square 
	sum=0;
	for(int i=0;i<size;i++)
		sum = sum + arr[i];
	//printf("\nSum : %d",sum);
 
	//Calculating sigma	
	sigma = (float)sum/size;
	//printf("\nsigma : %f",sigma);
	return sigma;
}


