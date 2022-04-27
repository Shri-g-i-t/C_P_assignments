/*
 * Name          : Shridhar Pujar
 * Date          : 15/03/2022
 * Description   : print triangle pattern as shown 
 * Sample input  : Enter the number: 4
 * Sample output : 1 2 3 4
				   5    6
				   7 8
				   9
*/

#include<stdio.h>
int main(){
	int i,a=1,b=1,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);   //storing input in n
	for(int i=n;i>=1;i--){   //loop for rows
		for(int j=1;j<=i;j++){ //loop for columns
			if(i==n || j==1 || j==i){  //if i==n or j==1 or j==i enter if
				printf("%d ",a); //printf a value
				a++; //incrementing a
			}
			else{
				printf("  "); //printing space
			}
		}
			printf("\n");//printing new line
	}

/*
	for (int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			if(i==1 || j==i || j==n){
				printf("%d ",b);
				b++;
			}
			else{
				printf("  ");
			}
		}
			printf("\n");
	}
*/
	return 0;
}



