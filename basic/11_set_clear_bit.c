/*
 * Name          : Shridhar Pujar
 * Date          : 21/03/2022
 * Description   : check N th bit is set or not, If yes, clear the M th bit
 * Sample input  :  Enter the number: 19
					Enter 'N': 1
					Enter 'M': 4
 * Sample output : Updated value of num is 3 
*/

#include<stdio.h>
int main(){
	int num,m,n;
	printf("Enter the number: ");
	scanf("%d",&num);  //storing input in num
	printf("Enter 'N': ");
	scanf("%d",&n);  //storing n value
	printf("Enter 'M': ");
	scanf("%d",&m); //storing m value

	if( num & (1<<n)){  //checking if nth bit is set
		num= num & ~(1<<m);  //clearing the mth bit
	}
	printf("Updated value of num is %d",num); //printing number
	return 0;
}
