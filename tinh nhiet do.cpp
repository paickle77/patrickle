#include<stdio.h>
int main(){
	float C;
	printf("C la nhiet do celsius\n");
	scanf("%f",&C);
	float F;
	F=(C*9/5)+32 ;
	printf("F la nhiet do fahrenheit:%.1f",F);
	return 0;
}
