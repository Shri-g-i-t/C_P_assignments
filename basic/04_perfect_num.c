/*
 * Name          : Shridhar Pujar
 * Date          : 14/03/2022
 * Description   : Program to check if number is perfect 
 * Sample input  : Enter a number: 6
 * Sample output : Yes, entered number is perfect number
*/

#include<stdio.h>
int main(){
	int num,sum=0,i;   //declaring and initializing variables
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num>0){
		for (i=1;i<num;i++){   //loop i from 1 to num
			if(num%i == 0){   //if divisor found
				sum=sum+i;    //add it to sum
			}
		}
		//printf("sum=%d\n",sum);
		if(num == sum){   //check if sum and num are equal
			printf("Yes, entered number is perfect number");
		}
		else{
			printf("No, entered number is not a perfect number");
		}
	}
	else{    //error printing
		printf("Error : Invalid Input, Enter only positive number");
	}
	return 0;
}

