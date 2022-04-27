/*
 * Name          : Shridhar Pujar
 * Date          : 04/04/2022
 * Description   : WAP to print 'n' bits from LSB of a number
 * Sample input  : Enter the number: 10
					Enter number of bits: 12
 * Sample output : Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
*/

#include <stdio.h>

int print_bits(int, int);

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d:", num);
    print_bits(num, n); //calling function
 }
int print_bits(int num,int n){
	int i;
	for(i=n-1;i>=0;i--){ //loop to access each bit and print
		if(num & (1<<i)){ //if bit is set print 1
			printf(" 1");
		}
		else{  //if not print 0
			printf(" 0");
		}
	}
	return 0;
}


