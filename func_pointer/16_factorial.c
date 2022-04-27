/*
 * Name          : Shridhar Pujar
 * Date          : 08/04/2022
 * Description   : WAP to find factorial of given number using recursion
 * Sample input  : Enter the value of N : 5
 * Sample output : Factorial of the given number is 120
*/

#include<stdio.h>



int main(){
	//declaring static variables
	static int num;  //default value is 0
	static unsigned long long int fact = 1;

	//Condition block to execute only once
	if(fact == 1){  
		printf("Enter the value of N : ");
		scanf("%d",&num);  //storing input in num
		if(num < 0){  //checking if num < 0
			printf("\nInvalid Input"); //Error message
			return 0; 
		}
	}
	if(num > 1){   //block to execute if num > 1
		fact = fact * num;  //multiplying fact by num
		num--; //decrementing num
		main();  //calling main function
	}
	else{  //block to execute at last
		printf("\nFactorial of the given number is %llu",fact);//printing the required output
		return 0;
	}
}

/*
int main(){
	static int num;
	static unsigned long long int fact = 1;

	if(num==0){
		printf("Enter the value of N : ");
		scanf("%d",&num);
		if(num == 0){
			printf("fact=%d",1);
			return 0;
		}
		if(num < 0){
			printf("Invalid Input");
			return 0;
		}

		fact=main();
		printf("fact=%llu",fact);
	}
	else{

		//printf("\n%d\n",num);
		if(num == 1)
			return 1;
		else{
			return ((num--) * main());
		}
	}
	return 0;
}
*/
