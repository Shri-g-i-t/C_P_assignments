/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to implement Circular right shift
 * Sample input  : Enter num: 12
					Enter n : 3
 * Sample output : Result : 10000000 00000000 00000000 00000001
*/

#include<stdio.h>
//func prototype
int circular_right(unsigned int, int);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_right(num, n) ; //calling function to ryt shift
    
    print_bits(ret);//func call to print bits
}
int circular_right(unsigned int num, int n){
	/*int i,lsb=0;
	for(i=1;i<=n;i++){
		lsb = num & 01;
		num = num >> 1;
		if(lsb){
			num = num | (1<<31);
		}
	}*/

	return ((num >> n) | (num << (32-n))); //bitwise OR with num right shifted by n times and num right shifted by 32-n times
}

int print_bits(int num){ //func to print bits
	printf("Result : ");
	for(int i=31;i>=0;i--){//loop to print bits
		if(num & (1<<i)){
			printf(" 1");
		}
		else{
			printf(" 0");
		}
	}
	return 0;
}
