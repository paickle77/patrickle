#include<stdio.h>
int main(){
	int a ;
	printf("nhap nam: ");
	scanf("%d",&a);
	if (a%400==0){
		printf("nam nay la nam nhuan\n",a);
	}else 
	printf("nam nay k phai la nam nhuan\n",a);
	return 0;
}
