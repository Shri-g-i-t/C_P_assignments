/*
 * Name          : Shridhar Pujar
 * Date          : 31/03/2022
 * Description   : to get 'n' bits of a given number
 * Sample input  : Enter the number: 10
				   Enter number of bits: 3
 * Sample output : Result = 2
*/

#include<stdio.h>

// Function prototype
int get_nbits(int,int);
void get_nbits1(int,int,int*);

int main(){
	int num,n,res=0;
	printf("Enter num and n:");
	scanf("%d%d",&num,&n); //storing input in variables

	res = get_nbits(num,n);   //Calling function
	//get_nbits1(num,n,&res);

	printf("Result = %d\n",res);  //printing output
}

int get_nbits(int num,int n){ //function declaration
	int res,mask;
	mask = (1<<n)-1;  //creating mask to get only n bits
	res = num & mask; //getting value by bitwise AND opeartion
	return res;  //returning the result
}

//function operating on bit by bit
void get_nbits1(int num,int n,int *rptr){  //function declaration
	int i;
	for(i=0;i<n;i++){ //loop to opearate bit by bit
		*rptr = *rptr + (num & (1 << i));  
	}
	return;
}


