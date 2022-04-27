/*
 * Name          : Shridhar Pujar
 * Date          : 17/04/2022
 * Description   : WAP to implement atoi function
 * Sample input  : Enter a numeric string: -12345
 * Sample output : String to integer is -12345
*/


#include <stdio.h>
//func prototype
int my_atoi(const char *);

int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);   //storing the input as string str
    
    //calling the function and printing the return value of function as integer
    printf("String to integer is %d\n", my_atoi(str));
}

//function definition
int my_atoi(const char *str){
	int num=0,rem,sign=1;
	//if the first character is - or + or ascii 48 to 57 
	if(*str == '-'|| *str == '+' || (*str >= 48 && *str <= 57)){
	    //check for first character '-'
		if(*str == '-'){
			sign=-1; //assign sign bit -1
			str++; //increment str pointer
			//if next character is not number then return 0 
			if(!(*str >= 48 && *str <= 57)) 
				return 0;
		}
		//check for first character '+'
		if(*str == '+'){
			sign=1; //assign sign bit 1
			str++; //increment str pointer
			//if next character is not number then return 0
			if(!(*str >= 48 && *str <= 57))
				return 0;
		}
		//convert the each character into number by subtracting 48 from it
		while(*str != '\0'){
			//check character is integer 
			if(*str >= 48 && *str <= 57){ 
				rem = *str - 48; 
				num = num * 10 + rem;
				str++; //incrementing the pointer
			}
			else
				//if character is not integer then break loop
				break;
		}
	}
	else
		return 0;
	//returning the num by multiplying with sign 
	return (num*sign);

}
