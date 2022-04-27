/*
 * Name          : Shridhar Pujar
 * Date          : 03/04/2022
 * Description   : WAP to replace 'n' bits of a given number
 * Sample input  : Enter the number: 10
				   Enter number of bits: 3
				   Enter the value: 12
 * Sample output : Result = 12
*/

#include <stdio.h>

int replace_nbits(int, int, int); //function prototype

int main()
{
    int num, n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val); //storing i/p in variables
    
    res = replace_nbits(num, n, val); //calling function 
    
    printf("Result = %d\n", res); //displaying result
}

int replace_nbits(int num,int n,int val){ //function definition
	/*int res;
	num = num & (~((1<<n)-1)); //clearing n bits of num  
	val = val & ((1<<n)-1); //getting n bits from val
    res = num | val; //bitwise OR to replace bits
    return res; //returning res*/
    return ((num & (~((1<<n)-1))) | (val & ((1<<n)-1)));
}

