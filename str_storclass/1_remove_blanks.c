/*
 * Name          : Shridhar Pujar
 * Date          : 15/04/2022
 * Description   : WAP to replace each string of one or more blanks by a single blank
 * Sample input  : Pointers     are               sharp     knives.
 * Sample output : Pointers are sharp knives.
*/

#include <stdio.h>
//func prototype
void replace_blank(char *);
void replace_blank2(char *);

int main()
{
    char str[50];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    //calling the function
    replace_blank(str);
    //replace_blank2(str);

    //printing the string
    printf("%s\n", str);
}

void replace_blank(char *str){
	//declare 4 pointers
	//copy the string address in 2 pointers
	char *present,*next,*tab=str,*ch=str;

	//converting tabspaces into spaces
	while(*tab != '\0'){
		if(*tab == '\t'){
			*tab = ' ';
		}
		tab++;
	}

	//checking if present character and next character is space 
	//if true then left shift all the characters from the present character to end of string
	//if false then only check next character
	while(*ch != '\0'){
		present=ch; //assigning ch address to present pointer
		next=ch+1; //assigning nect character address to next pointer
		if(*present==' ' && *next==' '){  //checking for 2 continuous spaces
			while(*present != '\0'){  //loop till end of string
				*present=*next;  //assign next character to present
				present++; //increment present address
				next++; //increment next address
			}
		}
		else{
			ch++;//increment the character pointer
		}
	}
	//To remove space at the beginning
	if(*str == ' '){
		present = str;
		next=str+1;
		while(*str++ != '\0'){
			*present=*next;
			*present++;
			*next++;
		}
	}
}

/*
void replace_blank2(char *str){
	int i=0,j,len=0;
	char *ch=str,temp;

	//To find the length and replacing tab spaces with space 
	while(*ch != '\0'){
		if(*ch == '\t'){
			*ch = ' ';
		}
		len++;
		ch++;
	}

	//if two continious spaces are found left shifting all the characters
	//from first space to end of string
	for(i=0;i<len;i++){
		if(str[i] == ' ' && str[i+1] == ' '){
			for(j=i;j<len;j++){
				str[j] = str[j+1];
			}
			i--;
		}
	}
	
	//if starting character in string is space 
	//left shift all the characters from space
	if(str[0] == ' '){
		for(i=0;i<len;i++){
			str[i] = str[i+1];
		}
	}
}
*/

