//Üçgen çeþidini bulma
//açýlarý girdi olarak alýp üçgen çeþidini buluyor
#include<stdio.h>

int main(){
	
	float a,b,c;
	printf("Ucgenin acilarini giriniz: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if((a+b+c)==180){
		
		if((a==60)&&(b==60)&&(c==60)){
			printf("Ucgen eskenar ucgendir.");
		}
		else if((a==b)||(b==c)||(a==c)){
			printf("Ucgen ikizkenar ucgendir.");
		}
		else if((a!=b)&&(b!=c)&&(a!=c)){
			printf("Ucgen cesitkenar ucgendir.");
		}	
	}
	else{
		printf("girdiginiz acilar ucgen olusturmaz.");
	}
	
	return 0;
}
