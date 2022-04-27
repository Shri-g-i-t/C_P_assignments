/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int z,a=1,b=1,c=1;
	a++ || b++ && c++;
	printf("a=%d,b=%d,c=%d",a,b,c);
	z=1,a=0,b=1,c=1;
	a++ && b++ || c++;
	printf("\na=%d,b=%d,c=%d",a,b,c);
	return 0;
}
