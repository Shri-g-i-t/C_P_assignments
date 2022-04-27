/*
 * Name          : Shridhar Pujar
 * Date          : 04/04/2022
 * Description   : WAP to implement Circular left shift
 * Sample input  : Enter num: 12
				   Enter n : 3
 * Sample output : Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0                    0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include<stdio.h>
//function prototype
int circular_left(unsigned int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_left(num, n); //func call
    
    print_bits(ret); //func call to print bits
}

int circular_left(unsigned int num,int n){ //function definition
	/*int i,res,msb=0;
	for(i=1;i<=n;i++){
		msb = num & (1<<31);
		num = num << 1;
		if(msb){
			num = num | 01;
		}
	}
	return num;*/
	return ((num << n) | (num >> (32-n))); //circular left shifting and returning shifted value
}

int print_bits(int num){  //func definition
        printf("Result in Binary:");
	for(int i=31;i>=0;i--){ //loop to print
		if(num & (1<<i)){  //check if bit is set or not
			printf(" 1"); //if set print 1
		}
		else{
			printf(" 0"); //if clear print 0
		}
	}
	return 0;
}
