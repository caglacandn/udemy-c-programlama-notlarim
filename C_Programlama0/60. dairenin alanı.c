//Dairenin alan�

#include<stdio.h>
#define pi 3.141 // sabit bir de�er tan�mlama 	pragramda kullan�lan her pi karakterinde 3.141 de�erini tutar
int main(){
	
	float r, alan;
	printf("Dairenin yari capini cm'e cinsinden giriniz: ");
	scanf("%f", &r);
	
	alan = pi*r*r/10000 ;
	printf("Dairenin alani: %.4f metrekare",alan );
	
	return 0; 
}
