/*
 * Name          : Shridhar Pujar
 * Date          : 15/03/2022
 * Description   : o generate AP, GP, HP series
 * Sample input  : Enter the First Number 'A': 2
				   Enter the Common Difference / Ratio 'R': 3
				   Enter the number of terms 'N': 5
 * Sample output : AP = 2, 5, 8, 11, 14
				   GP = 2, 6, 18, 54, 162
				   HP = 0.5, 0.2, 0.125, 0.0909091, 0.0714285
*/

#include<stdio.h>

int main(){
	int a,d,n,ap,gp,hp,i;
	printf("Enter the First Number 'A':");
	scanf("%d",&a);   //storing input in a
	printf("Enter the Common Difference / Ratio 'R':");
	scanf("%d",&d);   //storing input in d
	printf("Enter the number of terms 'N':");
	scanf("%d",&n);  //storing input in n
	if(a<0 || d<0 || n<0){  //check if any input is negative
		printf("Invalid input");  //printing invalid
	}
	else{
		printf("AP = ");    
		ap=a;   //assigning ap with a 
		for(i=1;i<=n;i++){  //loop for ap
			printf("%d, ",ap);   //printing ap
			ap=ap+d;  //adding ap with d 
		}

		printf("\nGP = ");
		gp=a;   //assigning gp with a
		for(i=1;i<=n;i++){  //loop for gp
			printf("%d, ",gp); //printing gp
			gp=gp*d;  //multiplying gp with d
		}

		printf("\nHP = ");
		hp=a;  //assigning hp with a
		for(i=1;i<=n;i++){  //loop for hp
			printf("%f, ",1/(float)(hp)); //printing hp ,explicitly converting hp to float to get decimal values
			hp=hp+d;
		}
	}
	return 0;
}



