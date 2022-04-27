/*
 * Name          : Shridhar Pujar
 * Date          : 21/04/2022
 * Description   : Squeeze the character in s1 that matches any charact                    er in the string s2
 * Sample input  : Enter s1 : Dennis Ritchie
					Enter s2 : Linux
 * Sample output : After squeeze s1 : Des Rtche
*/

#include <stdio.h>

//function prototype
void squeeze(char*, char*);
void squeeze2(char*, char*);

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    

    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    //calling function
    //squeeze2(str1, str2);
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}

void squeeze2(char *str1,char *str2){
	//declaring pointers to copy original address
	char *ch1,*ch2,*string2=str2;
	while(*string2 != '\0'){
		//copy the original address of str1 in ch1 
		ch1=str1;
		while(*ch1 != '\0'){
			//printf("str2 - %c ch1 = %c\n",*string2,*ch1);
			if(*string2 == *ch1){
				//if found same character then copy the address of that found char of str1 in ch2
			    ch2=ch1;
			    //shifting the characters from that pointer
				while(*ch2 != '\0'){
					*ch2 = *(ch2+1);
					ch2++;
				}
				//bring the pointer back to the present character
				ch1--;
			}
			ch1++;//increment ch1 pointer
		}
		string2++; //increment string2 pointer
	}
}

void squeeze(char* str1,char* str2)
{
	int i,j,k;
	//loop for the string str2
	for(j=0;str2[j] != '\0';j++){
		//loop for the string str1
		for(i=0;str1[i] != '\0';i++){
			//find the same character
			if(str2[j] == str1[i]){
				//loop for shifting characters 
				for(k=i;str1[k] != '\0';k++){
					str1[k] = str1[k+1];
				}
				//bring back the index to present index
				i--;
			}
		}
	}
}

