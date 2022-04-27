/*
 * Name          : Shridhar Pujar
 * Date          : 17/04/2022
 * Description   : WAP to count no. of characters, words and lines, entered through stdin
 * Sample input  :  Hello world
					Dennis Ritchie
					Linux
 * Sample output :  Character count : 33
					Line count : 3
					Word count : 5
*/

#include<stdio.h>
int main(){
	char ch,temp;
	int char_count=0,line_count=1,word_count=0;
	//getting input grom stdin and storing in ch 
	while((ch=getchar()) != EOF){
		//increment the char count for each character entered
		char_count++;
		//increment the line count for each new line character
		if(ch == '\n'){
			line_count++;
		}
		//increment the word count if space,tab or newline char found
		//if previous and present char are same then decrement
		if(ch == '\t')
			ch = ' ';
		if(ch == '\n')
			ch = ' ';
		if(ch == ' '){
			if(ch != temp)
				word_count++;
			else
				continue;
		}
				//word_count--;
		//	if(temp=='\t' || temp==' ' || temp=='\n')
		//		word_count--;
		//storing the previous character in temp
		temp=ch;
	}
	//print result
	printf("\nCharacter count : %d",char_count);
	printf("\nLine count : %d",line_count);
	printf("\nWord count : %d",word_count);
	return 0;
}
