/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to implement your own isblank() function
 * Sample input  : Enter the character: a
 * Sample output : The character 'a' is not a blank character.
*/

#include <stdio.h>
//func prototype
int my_isblank(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_isblank(ch); //calling func and storing return value in ret
    /*
        Based on return value, print whether ch is blank character or not
    */
    if(ret)  //check if ret is 1
    	printf(" Entered character is a blank character",ch);
	else
		printf("Entered character is not blank character",ch);
}

int my_isblank(int ch){ //func body
	if(ch == 9 || ch == 32) //check if ascii char of ch is 9(horizontal tab) or 32(space)
		return 1; //if true return 1
	else
		return 0; //if false return 0
}
