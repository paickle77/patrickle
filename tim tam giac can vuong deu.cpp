#include<stdio.h>
int main (){
	int a,b,c;
	printf("nhap do dai canh a: ");
	scanf("%d",&a);
	printf("nhap gia tri canh b: ");
	scanf("%d",&b);
	printf("nhap gia tri canh c: ");
	scanf("%d",&c);
	if(a==c&&a==b){
		printf("tam giac nay la tam giac deu");
	} else if (a==b&&a!=c||a==c&&a!=b){
		printf("tam giac nay la tam giac can");
	}if (a!=c&&a!=b){
		printf("tam giac nay tam giac thuong");
	}  return 0;
	}
