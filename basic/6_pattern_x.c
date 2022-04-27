/*
 * Name          : Shridhar Pujar
 * Date          : 15/03/2022
 * Description   : print the numbers in X format as shown below
 * Sample input  : Enter the number: 5
 * Sample output : 1   5
 					2 4
  					 3
 					2 4
				   1   5
*/

#include<stdio.h>
int main(){
	int i,j,n,a;   
	printf("Enter the number: ");
	scanf("%d",&n); //storing input in n
	a=n; //assigning n to a
	for (i=1;i<=n;i++){   //loop for row
		for(j=1;j<=n;j++){  //loop for column
			if(i==j || j==a){  //check when i==j or j==a
				printf("%d",j);   //print j value
			}
			else{    
				printf(" ");  //printing space
			}
		}
		--a;  //decrementing a by 1
		printf("\n");//printing new line
	}
	return 0;
}
