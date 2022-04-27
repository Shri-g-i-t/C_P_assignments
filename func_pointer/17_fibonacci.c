/*
 * Name          : Shridhar Pujar
 * Date          : 09/04/2022
 * Description   : WAP to generate fibbonacci numbers using recrsion
 * Sample input  : Enter a number: 8
 * Sample output : 0, 1, 1, 2, 3, 5, 8
*/

#include<stdio.h>
//func prototype
void positive_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    //calling func
    positive_fibonacci(limit, 0, 1, 0);
}
void positive_fibonacci(int limit, int a, int b, int c){
    //check if limit is negative value
    if(limit < 0)
    	printf("Invalid input");
	else if(c <= limit){   //check c is in limit
		printf("%d, ",c);  //printing c
		a=b; //changing values of a and b to next values
		b=c;
		//calling func with parameters updated
		positive_fibonacci(limit,a,b,a+b);
	}
	else{  //to stop recursion 
		return ;
	}

}
