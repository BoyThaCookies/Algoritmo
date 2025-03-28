#include<stdio.h>
main(){
	float cel, farn;
	printf("Digite a temperatura em celsius");
	scanf("%f",&cel);
	farn = cel * 1.8 + 32;
	printf("A temperatura em Farenheint: %f",farn);
}
