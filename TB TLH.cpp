#include<stdio.h>
int main(){
	float T,L,H ;
	printf("T la diem mong toan\n");
	scanf("%f",&T);
	printf("L la dirm mon ly\n");
	scanf("%f",&L);
	printf("H la diem mon hoa\n");
	scanf("%f",&H);
	float TB;
	TB=(3*T+2*L+H)/6;
	printf("TB la trung binh cong 3 mon %.1f",TB);
	return 0;
}
