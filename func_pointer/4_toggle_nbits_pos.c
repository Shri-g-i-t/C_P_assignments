/*
 * Name          : Shridhar Pujar
 * Date          : 04/04/2022
 * Description   : WAP to toggle 'n' bits from given position of a number
 * Sample input  :  Enter the number: 10
					Enter number of bits: 3
					Enter the pos: 5
 * Sample output :  Result = 50
*/

#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);//calling function
    
    printf("Result = %d\n", res);//printing result
}

int toggle_nbits_from_pos(int num,int n,int pos){ //func definition
	/*int mask,res;
	mask = (((1<<n)-1) << (pos-n+1)); //creating mask to generate bit 1 at the required positions
	res = num ^ mask; //bitwise XOR to toggle required position bits
	return res; //returning res*/

	return ((((1<<n)-1) << (pos-n+1)) ^ num ); //returning result
}


