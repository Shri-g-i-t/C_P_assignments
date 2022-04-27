/*
 * Name          : Shridhar Pujar
 * Date          : 15/04/2022
 * Description   : WAP to implement getword function
 * Sample input  : Enter the string : Welcome to Emertxe
 * Sample output : You entered Welcome and the length is 7
*/

#include<stdio.h>
//function prototye
int getword(char *str);
int main(){
	int len=0;
	char str[100];

	printf("Enter the String : ");
	scanf(" %[^\n]", str);

	len = getword(str); //calling getword function and storing return value in len

	printf("You entered %s and the length is %d\n",str,len);//printing length
	return 0;
}

int getword(char *str){
	int count=0; 
	//loop from start of string to null character
	while((*str != ' ') && (*str != '\t') && (*str != '\0') ){
		//find the space and replace with null character and break loop
		//if(*str == ' ' || *str == '\t'){
		//	*str = '\0';
		//	break;
		//}
		count++; //increment count 
		str++; //increment str
	}
	*str='\0';
	return count; //returning count value
}


