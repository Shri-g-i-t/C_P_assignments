/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>

int main(){
	int n,first_day,var;
	printf("Enter the value of 'n' : ");
	scanf("%d",&n);
	if(n>=1 && n<=365){  //checking range of n

		printf("Choose First Day :\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day :");

		scanf("%d",&first_day);
		if(first_day > 0 && first_day <=7){   //checking range of first_day

			var=(n+first_day-1); //calculating var
			switch(var%7){  //switching wrt var value
				case 0:
					printf("The day is Saturday");
					break;
				case 1:
					printf("The day is Sunday");
					break;
				case 2:
					printf("The day is Monday");
					break;
				case 3:
					printf("The day is Tuesday");
					break;
				case 4:
					printf("The day is Wednesday");
					break;
				case 5:
					printf("The day is Thursday");
					break;
				case 6:
					printf("The day is Friday");
					break;
				default:
					printf("Invalid");
			}
		}
		else{
			printf("Error: Invalid input, first day should be > 0 and <= 7");//printing error message
		}
	}
	else{
		printf("Error: Invalid Input, n value should be > 0 and <= 365");//printing error message
	}
	return 0;
}



