#include<stdio.h>
int main(){
	float a,b;
	printf("a la chieu dai hcn\n");
	scanf("%f",&a);
	printf("b la chieu rong hcn\n");
	scanf("%f",&b);
	float c,d;
	c=(a+b/2);
	d=a*b;
	printf("c la chu vi hcn: %.1f\n",c);
	printf("d la dien tich hcn: %.1f",d);
	return 0;
}
