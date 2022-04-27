/*
 * Name          : Shridhar Pujar
 * Date          : 16/04/2022
 * Description   : WAP to check given string is Pangram or not
 * Sample input  : Enter the string: The quick brown fox jumps over the lazy dog
 * Sample output : The Entered String is a Pangram String
*/

#include<stdio.h>
int pangram(char *);
int pangram2(char *);

int main(){
	char str[100];
	int result;

	printf("\nEnter String : ");
	scanf("%[^\n]",str);

	//Calling the pangram function
	result=pangram(str);

	//Printing based on return value of function
	if(result) 
		printf("\nThe Entered String is a Pangram String");
	else
		printf("\nThe Entered String is not a Pangram String");

	return 0;
}

int pangram(char *str){  //function definition
	//Array of size 26 initialized with 0
	int arr[26]={0},i=0;
	//Loop till end of the string
	while(*str != '\0'){
		//if pointer contains Upper case letter 
		//update the array element with 1
		if(*str >= 65 && *str <= 90){
			arr[(*str) - 65] = 1;
		}
		//if pointer contains Lower case letter 
		//update the array element with 1
		else if(*str >= 97 && *str <= 122){
			arr[(*str) - 65 - 32] = 1;
		}
		//increment the pointer
	str++;
	}
	//check if array element has any other value than 1 
	for(i=0;i<26;i++){
		if(arr[i] != 1)
			//if found return 0;
			return 0;
	}
	//if all elements are 1 return 1
	return 1;
}
