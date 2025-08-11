//Halýcý Sorusu 2
// Halýcý 3 ayrý tip halý satmaktadýr.
/*
Halý tipi		kodu		metrekare birim fiyatý
Twetty			T			18
Bugs			B			17
Spiderman		S			19			*/

#include <stdio.h>
#define T 18
#define B 17
#define S 19
int main(){
	
	char kod;
	float alan,ucret=0;
	printf("Almak istediginiz hali tipinin kodunu giriniz.\nTanimli kodalar: T, B ve S\n");
	scanf("%c",&kod);
	printf("Lutfen alani giriniz: ");
	scanf("%f",&alan);
	
	if(kod=='T' || 't'){
		ucret = alan*T;
		printf("odenmesi gereken ucret: %.2f",ucret);
	}
	else if(kod=='B'|| 'b'){
		ucret=alan*B;
		printf("odenmesi gereken ucret: %.2f",ucret);
	}
	else if(kod=='S'|| kod=='s'){
		ucret=alan*S;
		printf("odenmesi gereken ucret: %.2f",ucret);
	}
	else {
		printf("girmis oldugunuz kod tanimli degil!");
	}  
	
	return 0;
	
}
