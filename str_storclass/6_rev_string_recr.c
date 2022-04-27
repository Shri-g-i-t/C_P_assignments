/*
 * Name          : Shridhar Pujar
 * Date          : 15/04/2022
 * Description   : WAP to reverse the given string using recursive method
 * Sample input  : Enter a string : EMERTXE
 * Sample output : Reverse string is : EXTREME
*/

#include<stdio.h>

//func prototype
void reverse_recursive(char *str,int ,int);
int main(){
	char str[30],*ch;
	int len=0,ind;
	
	printf("Enter any String : ");
	scanf("%[^\n]",str);

	//To calculate length of string
	ch=str;
	ind=0;
	while(*ch){
		len++;
		ch++;
	}
	
	//Function call
	reverse_recursive(str,ind,len-1);

	//printing the reversed string
	printf("Reversed string is %s\n",str);
	return 0;
}

//function definition
void reverse_recursive(char *str,int ind,int len){
	char temp;
	//condition to enter recursion
	if(ind<len){
		//Swapping the first and last character
		temp=str[ind];
		str[ind]=str[len];
		str[len]=temp;
		
		//Calling the recursive function by passing ind+1 and len-1
		reverse_recursive(str,ind+1,len-1);
	}
	else
		//ending the recursion
		return;

}
