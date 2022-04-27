/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to implement your own islower() function
 * Sample input  : Enter the character: a
 * Sample output : Entered character is lower case alphabet
*/
#include <stdio.h>
//function definition
int my_islower(int);

int main()
{
	char ch;
	int ret;

	printf("Enter the character:");
	scanf("%c", &ch);

	ret = my_islower(ch); //func call
	/*
	 *         Based on return value, print whether ch is lower case alphabet or not
	 *             */
	if(ret) //check if ret is 1
		printf("Entered character is lower case alphabet");
	else
		printf("Entered character is not lower case alphabet");
}

int my_islower(int ch){ //func body
	if(ch >='a' && ch <='z') //check ch with ascii value range of lower case letters 
		return 1; //if true return 1
	return 0; //else retun 0
}

