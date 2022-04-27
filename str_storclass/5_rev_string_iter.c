/*
 * Name          : Shridhar Pujar
 * Date          : 15/04/2022
 * Description   : WAP to reverse the given string using iterative method
 * Sample input  : Enter a string : EMERTXE
 * Sample output : Reverse string is : EXTREME
*/

#include<stdio.h>
//function prototype
void reverse_iterative(char *str);
int main(){
	char str[30];
	
	printf("Enter any String : ");
	scanf("%[^\n]",str);

	//calling function and passing array address
	reverse_iterative(str);

	printf("Reversed string is %s\n",str);
	return 0;
}
//function definition
void reverse_iterative(char *str){
	int i,j,len=0;
	char *ch=str,temp; //declaring pointer and storing address of str
	//calculating length of string
	while(*ch){ 
		len++;
		ch++;
	}
   
   	//taking indexes one starting from first char of string and other starting from last char of string and swaping both
	i=0;
	j=len-1;
	while(i<j){  
		//Swaping
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;

		i++; //incrementing starting index
		j--; //decrementing the last index
	}
}
