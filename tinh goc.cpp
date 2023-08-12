#include<stdio.h>
int main(){
	int a;
	printf("nhap so do goc");
	scanf("%d",&a);
	if (a>0&&a<90){
		printf("a la goc nhon ");
	}else if (a>90&&a<180){
		printf("a la goc tu");
	} if (a<0||a>180){
		printf("nhap sai gia tri,so do goc lon hon 0 va nho hon 180");
	} return 0;
	
}

