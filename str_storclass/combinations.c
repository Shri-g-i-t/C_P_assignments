/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
#include<stdio.h> 

void combination(char *,int ,int );
void swap(char *,int,int);
int fact(int);
int my_strlen(char*);

int main()

{
        char str[100];
        int n;
        int res;
        printf("Enter a string: ");
        scanf("%100[^\n]",str);    
        n = my_strlen(str);
        combination(str,0,n-1);
        //printf("\nm : len : %d",n);
        //printf("\n%d",fact(5));
        //printf("\n%s",str);
        //swap(str,0,2);
        //printf("\n%s",str);
        return 0;
}
void combination(char *str,int start,int len){
	int i,j,index=len-2;
	char temp;
	for(i=1;i<=len+1;i++){
		for(j=0;j<fact(len);j++){
			if(i % 2 != 0){
				swap(str,len,len-1);
			}
			else{
				swap(str,len,len-2);
			}
			printf("\n%s",str);
		}
		for(int k=0;k<len-1;k++){
			temp = str[k];
			str[k] = str[k+1];
			str[k+1] = temp;
		}
		//swap(str,len,len-3);
		printf("\n");
		
	}
}

int fact(int num){
	int i=num,fact=1;
	while(num){
		fact = fact * num;
		num--;
	}
	//printf("\nnum= %d fact = %d",num,fact);
	return fact;
}

void swap(char *str,int a,int b){
	char temp;
	temp = str[a];
	str[a] = str[b];
	str[b] = temp;
}



int my_strlen(char *str){
	int len=0;
	while(*str++){
		len++;
	}
	//printf("\nlength : %d",len);
	return len;
}


