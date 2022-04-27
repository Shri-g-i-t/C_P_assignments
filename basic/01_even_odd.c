/*
 * Name          : Shridhar Pujar
 * Date          : 11/03/2022
 * Description   : Program to check if number is odd or even
 * Sample input  : Enter the value of 'n' : -2
 * Sample output : -2 is negative even number
*/

#include<stdio.h>

int main(){
	int n;    //declaring variable
	printf("Enter the value of 'n' : ");
	scanf("%d",&n);  //storing the input in variable n
	if (n > 0){    //checking if n is positive number
		if ((n%2)==0){  //checking if positive number is even
			printf("%d is positive even number",n);
		}
		else{      
			printf("%d is positive odd number",n);
		}
	}
	else if( n < 0){   //checking if number is negative
		if((n%2)==0){   //checking if negative number is even
			printf("%d is negative even number",n);
		}
		else{
			printf("%d is negative odd number",n);
		}
	}
	else{    //default block if n is zero
		printf("%d is neither odd nor even",n);
	}
	return 0;
}

