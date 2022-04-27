/*
	printf("\n%c",str[12]);
 * Name          : Shridhar Pujar
 * Date          : 04/04/2022
 * Description   : WAP to get 'n' bits from given position of a number
 * Sample input  :  Enter the number: 12
					Enter number of bits: 3
					Enter the pos: 4
 * Sample output : Result = 3
*/


#include <stdio.h>

int get_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos); //Calling function
     
    printf("Result = %d\n", res); //printing result
}

int get_nbits_from_pos(int num,int n,int pos){ //function definition
	/*int mask,res=0;
	mask = (((1<<n)-1) << ((pos-n)+1)); //creating mask to generate bit 1 at required position bits
	res = num & mask; //bitwise AND to get n bits
	res = res >> (pos-n+1); //right shifting res to get bits value
	return res; //returning res*/

	return (((((1<<n)-1) << (pos-n+1)) & num) >> (pos-n+1)); //returning result
}


