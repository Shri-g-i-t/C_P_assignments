/*
 * Name          : Shridhar Pujar
 * Date          : 04/04/2022
 * Description   : WAP to put the (b-a+1) lsb’s of num into val[b:a]
 * Sample input  : Enter the value of 'num' : 11
					Enter the value of 'a' : 3
  					Enter the value of 'b' : 5
					Enter the value of 'val': 174
 * Sample output : Result : 158
*/

#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val); //calling function
    
    printf("Result = %d\n", res); //printing result
}

int replace_nbits_from_pos(int num,int n,int pos,int val){ //func definition
	int mask_num,mask_val,res;
	mask_num = ((1<<n)-1);  //creating mask to get n bits from num
	mask_val = ~((((1<<n)-1) << (pos-n+1)));  //creating mask to clear the required position bits
	num = num & mask_num; //to get n bits
	num = num << (pos-n+1); //shifting left to the required position
	val = val & mask_val; //to clear required position bits in val
	res = num | val; //bitwise OR to replace bits 
	return res; //returning result
}
