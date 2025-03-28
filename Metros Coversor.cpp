#include<stdio.h>
main(){
	float metro, dec, mili, cent;
	printf("Metros:");
	scanf("%f",&metro);
	dec = metro * 10;
	cent = metro * 100;
	mili = metro * 1000;
	printf("\nDecimetros: %f",dec);
	printf("\nCentimetros: %f",cent);
	printf("\nMilimetros: %f",mili);
}
