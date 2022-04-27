/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to implement your own isalnum() function
 * Sample input  : Enter the character: a
 * Sample output : The character 'a' is an alnum character.
*/

#include<stdio.h>

int my_isalnum(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isalnum(ch);
    /*
        Based on return value, print whether ch is alphanumeric or not
    */
    if(ret)
    	printf("Entered character is alphanumeric character",ch);
	else
		printf("Entered character is not alphanumeric character",ch);

	return 0;

}

int my_isalnum(int ch){  //func body
	if( (ch >= 48 && ch <=57) || (ch >= 65 && ch <=90) || (ch >= 97 && ch <= 122)){   //compare ch ascii value with alphabets and numbers
		return 1;
	}
	return 0;  //if not return 0
}

