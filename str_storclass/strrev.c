/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<string.h>
int main(){
	char temp,str[20]="Emertxe";
	int n,i;
	n = strlen(str);

	for(i = n - 1; i >= 0;i--)
	{
		printf("%c",str[i]);
	}
/*	for(int i=0,j=(strlen(str)-1);i<j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);*/

}
