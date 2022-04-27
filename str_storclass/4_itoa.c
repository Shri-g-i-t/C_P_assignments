/*
 * Name          : Shridhar Pujar
 * Date          : 18/04/2022
 * Description   : WAP to implement itoa function
 * Sample input  : Enter the number : -1234
 * Sample output : Integer to string is -1234
*/

#include<stdio.h>
//function prototype
int my_itoa(int ,char *);

int main(){
	int num=0,size;
	char str[20];
	printf("Enter the number : ");
	scanf("%d",&num);
  
  	//calling the function and storing the return value in size 
  	size=my_itoa(num,str);
	
	printf("Integer to string is :");
	//printing the string character by character till the index size
  	for(int i=0;i<=size;i++)
  		printf("%c",str[i]);

  	return 0;
}

//function definition
int my_itoa(int num,char *str){
	int rem,len=0,start=0,end;
	char *ch=str,temp;//copying the base address of string in ch pointer
	//if num is 0 then make string character 0 and return 1 
	if(num == 0 ){
		*str = '0';
		return 1;
	}

	//if number is negative make the first character of string '-' 
	if(num < 0){
		*ch = '-';
		ch++;           //increment the ch pointer 
		start=1;        //assign start index is 1 
		num = num * -1; //make num positive
		len++;          //increment the length so that '-' is also addes to length.
		                //while assigning each character the '-' is not considered
		                //and length is not incremented, so increment length here.
	}
	
	//Take one by one number from units place of number and add to string by adding 
	//48 to each number
	while(num != 0){
		rem = (num % 10);
		*ch = rem + 48;
		num = num / 10;  
		ch++;
		len++;           //for calculating length of string
	}
	
	//assigning the last index of string as length - 1
    end=len-1;
    //To Reverse the string
	while(start < end){
		temp = str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	//return the length of string to main function
	return len;
}




