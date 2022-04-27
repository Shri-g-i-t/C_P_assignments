/*
 * Name          : Shridhar Pujar
 * Date          : 16/03/2022
 * Description   : print pyramid pattern as shown below
 * Sample input  : Enter the number: 4
 * Sample output :  4
					3 4
					2 3 4
					1 2 3 4
					2 3 4
					3 4
					4
*/

#include<stdio.h>

int main(){
	int i,k,a,n,j;  //declaring variables
	printf("Enter the number: ");
	scanf("%d",&n);  //storing input in n
	a=n; //assigning a with n
	for(i=1;i<=n*2-1;i++){  //loop for row
		if(i<=n){   //condition to print upper half pyramid
			for(j=a;j<=n;j++){   
				printf("%d ",j);//printing j value
			}
			a--;  //decrementing a for each row
		}
		else{
			a++;  //a is 0 so increment to 1
			for(k=a+1;k<=n;k++){   //take loop from k=a+1 to start with 2
				printf("%d ",k);  //print k value
			}

		}
		printf("\n");  //printing new line
	}
	return 0;
}
