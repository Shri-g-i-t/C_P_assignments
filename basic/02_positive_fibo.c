/*
 * Name          : Shridhar Pujar
 * Date          : 14/03/2022
 * Description   : Program to generate positive Fibonacci numbers
 * Sample input  : Enter a number: 8
 * Sample output : 0, 1, 1, 2, 3, 5, 8
*/

#include<stdio.h>
int main(){
	int fibo=0,a=0,b=1,n;  //declaring and initializing variables
	printf("Enter number : ");
	scanf("%d",&n);   //storing input in variable
	if(n>=0){      //checking if n is positive
		while(fibo <= n){   
			printf("%d, ",fibo); //printing fibo
			a=b;  //assigning value b to a
			b=fibo; //assigning value fibo to b
			fibo=a+b;  //assigning fibo the addition of a and b
		}
	}
	else{
		printf("Invalid input");
	}
	return 0;
}
