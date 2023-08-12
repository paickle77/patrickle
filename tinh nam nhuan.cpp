#include<stdio.h>
int main(){
	int a;
	printf("nhap nam:");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0){
		printf("%d la nam nhuan\n",a);
	}else
	printf("%d k phai nam nhuan\n",a);
	return 0;
}
