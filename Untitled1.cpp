#include<stdio.h>
int main(){
	int number;
	printf("dien 1 so bat ki:");
	scanf("%d",&number);
	if (number > 0 ){
		printf("%d la so duong\n",number);
	}if (number < 0){
		printf("%d la so am\n",number);
	} if(number == 0){
		printf("%d la so khong am khong duong",number);		
	}
	return 0;
}
