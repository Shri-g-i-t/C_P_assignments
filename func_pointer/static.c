/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int main(){
	int a;
	a=fun(5);
}

#if 1
int fun(int a){
	static int i=1;
	if(a)
		fun(a-1);
	i=i*a;

