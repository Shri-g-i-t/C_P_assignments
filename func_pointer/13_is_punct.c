/*
 * Name          : Shridhar Pujar
 * Date          : 06/04/2022
 * Description   : WAP to implement your own ispunct() function
 * Sample input  : Enter the character:$
 * Sample output : Entered character is punctuation character
*/

#include <stdio.h>

int my_ispunct(int);

int main()
{
    char ch;
    int ret;
    
    printf("Enter the character:");
    scanf("%c", &ch);
    
    ret = my_ispunct(ch);
    /*
        Based on return value, print whether ch is lower case alphabet or not
    */
    if(ret)
    	printf("Entered character is punctuation character");
	else
		printf("Entered character is not punctuation character");

}

int my_ispunct(int ch){
	if((ch >= 33 && ch <= 47) || (ch >= 58 && ch <=64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
		return 1; //if ascii value range is satisfied return 1
	return 0; //else return 0
}
