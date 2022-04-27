/*
 * Name          : Shridhar Pujar
 * Date          : 31/03/2022
 * Description   : print all primes using Sieve of Eratosthenes method
 * Sample input  : Enter the value of 'n' : 20 
 * Sample output : The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

#include<stdio.h>

int main(){
	int n;
	printf("Enter the value of 'n' : ");
	scanf("%d",&n); //storing i/p in variable
	if(n<=1){  //checking if n is negative or 1
		printf("Please enter a positive number which is > 1"); //printing invalid i/p
	}
	else{     
		int arr[n-1],prime=2,i,j;//declaring and initializing variables and array
		for(i=0;i<n-1;i++){ //loop to assign numbers from 2 to n to array
			arr[i]=prime++; //assigning and incrementing prime variable
		}
	    /*printf("\n");   //printing array elements
		for(i=0;i<n-1;i++){
			printf("%d  ",arr[i]);
		}*/
		
		for(i=2;i*i<=n;i++){   //loop for i values from 2
			for(j=2;i*j<=n;j++){ //loop for j values from 2
				arr[i*j-2]=0;  //assign 0 to multiples of i and j
			}
		}
	   printf("\nThe primes less than or equal to %d are :",n);
		for(i=0;i<n-1;i++){  //printing non zero array elements
			if(arr[i] != 0)
				printf("%d, ",arr[i]);
		}
	}
	return 0;
}



