/*
 * Name          : Shridhar Pujar
 * Date          : 09/04/2022
 * Description   : WAP to generate negative fibbonacci numbers using recrsion
 * Sample input  : Enter a number: -8
 * Sample output : 0, 1, -1, 2, -3, 5, -8
*/

#include<stdio.h>
//func prototype
void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    //calling func
    negative_fibonacci(limit, 0, 1, 0);
}
void negative_fibonacci(int limit, int a, int b, int c){

    if(limit > 0)  //validation
    	printf("Invalid input");
	else if(c <= -limit && c >= limit){  //limit << c << -limit
		printf("%d, ",c);  //printing value
		a=b;  //updating a with b and b with c
		b=c;
		//calling func with diff parameters
		negative_fibonacci(limit,a,b,a-b);
	}
	else{
		//to stop recursion
		return ;
	}

}
