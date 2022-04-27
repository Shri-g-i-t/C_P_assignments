/*
 * Name          : Shridhar Pujar
 * Date          : 23/04/2022
 * Description   : WAP to implement strtok function
 * Sample input  : Enter string1 : Bangalore;;::---Chennai:;Kolkata:;De                    lhi:-:Mumbai
					Enter string2 : ;./-:
 * Sample output : Bangalore
					Chennai
					Kolkata
					Delhi
					Mumbai
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

//func prototype
char *my_strtok(char * str,const char *delim);

int main()
{
    char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%[^\n]", str);
    
    //clear the input buffer
    __fpurge(stdin);
 
    printf("Enter the delimeter : ");
    scanf("%[^\n]", delim);

    //clear the input buffer
    __fpurge(stdin);

	//checking the working of lib func strtok
   /*char str2[50],delim2[50];
   strcpy(str2,str);
   strcpy(delim2,delim);

   printf("Library function strtok :\n");
    
    char *token = strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    printf("str : %s\n",str);
    printf("delim : %s\n",delim);
    */

   //printf("\n\nMy function strtok :\n");
   
   //declaring a char pointer
    char *token;
    //Call function by passing string and delimiter, and store the return address in token pointer
    token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    //To print the remaining string tokens 
    while (token)
    {
        printf("%s\n", token);
        //Call function by passing NULL and delim as parameters
        token = my_strtok(NULL, delim);
    }
    
    //printf("str : %s\n",str);
    //printf("delim : %s\n",delim);
}
char *my_strtok(char *str,const char *delim){

	char *ch;
	 char *delim2;
	//Declare static pointer stptr to store the next token address
	static char* stptr;
	//check if str is NULL
	if(str != NULL){
		//Copy address of str in stptr and ch
		stptr = str;
		ch = str;
		delim2 = delim;
	}
	else if(str == NULL){  
		if(stptr != NULL){ //Check static ptr is null
		//copy address of stptr in str and stptr
		str = stptr;
		ch = stptr;
		delim2 = delim;
		}
		//else   //if stptr is null return null
			//return NULL;
	}

	//printf("stptr = %s\n",stptr);
	//printf("delim = %s\n",delim);
	
	//Tracing through each char of input string
	while(*ch != '\0'){
		//assigning delim2 with delim address for each loop
		delim2=delim;
		//Tracing through each char of delim2 string
		while(*delim2 != '\0'){
			//printf("%c == %c\n",*ch,*delim2);
			
			//Compare each char of string with delim2 string
			if(*ch == *delim2){
				//If found 
				//1.make that char of string '\0'
				//2.update stptr with next char
				//return the str address
				*ch = '\0';
				if(*stptr != '\0'){
				return stptr;
				}
				else{
				stptr = ch + 1;
				ch--;
				break;
				}
			}
			delim2++;  //increment delim2 ptr
		}
		ch++;//increment ch ptr
	}
	//For last token make stptr null and return str
	if(*stptr == NULL){
		return NULL;
	}
	else{
		return stptr;
	}
	
}


