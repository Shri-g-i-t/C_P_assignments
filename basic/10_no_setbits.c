/*
 * Name          : Shridhar Pujar
 * Date          : 21/03/2022
 * Description   : to count number of set bits in a given number and print parity
 * Sample input  : Enter the number : 7
 * Sample output : Number of set bits = 3
				   Bit parity is Odd
*/

#include<stdio.h>
int main(){
	int num,i,count=0;
	printf("Enter the number : ");
	scanf("%d",&num);  //storing input in num
	for(i=0;i<32;i++){   //as num is int datatype..loop runs from 0 to 31 i.e 32bits
		if( num & (1<<i)){  //check if bit is set 
			count++;  //incrementing count
		}
	}
	printf("\nNumber of set bits = %d",count);
	if(count & 01){  //checking if count is odd
	printf("\nBit parity is Odd");
	}
	else{
		printf("\nBit parity is Even");
	}
	return 0;
}
