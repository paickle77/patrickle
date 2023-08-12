#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap so a\n");
	scanf("%d",&a);
	printf("nhap so b\n");
	scanf("%d",&b);
	printf("nhap so c\n");
	scanf("%d",&c);
	if (a>b&&a>c){
		printf("a la so lon nhat\n",a);
	}if (b>c&&b>a){
	printf("b la so lon nhat\n",b);
	}else{
		printf("c la so lon nhat\n",c);
	}
	return 0;
}
