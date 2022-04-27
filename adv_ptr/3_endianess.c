/*
 * Name          : Shridhar Pujar
 * Date          :
 * Description   :
 * Sample input  :
 * Sample output :
*/

#include<stdio.h>
int convert_les_bes(int ,int* );
int main(){
	int size,num,res;
	printf("Enter the size: ");
	scanf("%d",&size);
	printf("Enter any number in Hexadecimal: ");
	scanf("%x",&num);

	res = convert_les_bes(size,&num);

	printf("\nAfter conversion %X",res);
	return 0;
}

int convert_les_bes(int size,int *iptr){
	int i,j;
	char *cptr = (char *)iptr,temp;
	if(size == 2)
		j=1;
	if(size == 4)
		j=3;
	for(i=0;i<size/2;i++){
		temp = *(cptr+i);
		*(cptr + i) = *(cptr + j);
		*(cptr + j) = temp;
		j--;
	}
	return *iptr;
}

