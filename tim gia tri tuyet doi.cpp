#include<stdio.h>
int main(){
	int a;
	printf("nhap mot so :");
	scanf("%d",&a);
	if (a<0){
		printf("gia tri tuyet doi cua so do :-%d",a);
	}else if(a>0){
		printf("gia tri tuyet doi cua so do:%d",a);
	}if(a==0){
		printf("gia tri tuyet doi cua so do:0");
	}return 0;
}
