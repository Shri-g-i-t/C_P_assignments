/*
 * Name          : Shridhar Pujar
 * Date          : 27/04/2022
 * Description   : Generate consecutive NRPS of length n using k distinct character
 * Sample input  : Enter the number characters C : 3
					Enter the Length of the string N : 6
					Enter 3 distinct characters : a b c
 * Sample output : Possible NRPS is abcbca
*/

#include<stdio.h>
void print_nrps(char *,int n,int len);
int main(){
	int n,len;
	printf("Enter the number of characters C : ");
	scanf("%d",&n);
	printf("\nEnter the Lenth of the string N : ");
	scanf("%d",&len);
	char arr[len];
	printf("\nEnter %d distinct characters : ",n);
	for(int i=0;i<n;i++){
		scanf(" %c",&arr[i]);
	} 

	//func call
	print_nrps(arr,n,len);

	return 0;
}

void print_nrps(char *arr,int n,int len){
	int i=0,j=0,temp;
	char str[len];

	//Checking for distinct characters
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			//printf("%c - %c\n",arr[i],arr[j]);
			if(arr[i] == arr[j]){
				printf("Enter distinct characters\n");
				return ;
			}
		}
	}

	//assign the given characters to string
	for(i=0;i<n;i++){
		str[i] = arr[i];
	}
	
    j=0;
	//assign the next characters in string by circular left shifting the array 
	for(i=n;i<len;i++){
		if(i % n == 0){  //left sift array when i reaches n
			//Circular Left shifting array
			for(int k=0;k<n-1;k++){
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
		//assigning the shifted array to string char by char
		str[i] = arr[j++];
		if(j == n){
			j=0;
		}
	}
	//assign null charater to terminate string
	str[i]='\0';
	//To print string
	printf("\n%s",str);

}

	
