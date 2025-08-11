#include<stdio.h>
/*
Bir fonksiyon yazin
Bu fonksiyon; toplama,cikarma, carpma, bolme temel dort islemleri yapsin. 
(+ - * /) islemleri icin switch case yapisini kullanin 
yukaridaki fonksiyonu degiskenin degeriyle cagiran bir c programi yazin
Ayni C programini degiskenin adresiyle cagirma yontemini kullanaral degistirin
*/
float dort_islem(float a, float b, char op)
{
	float islem_sonucu;
	switch(op)
	{
		case '+':
		{
			islem_sonucu=a+b;
			break;
		}
		case '-':
		{
			islem_sonucu=a-b;
			break;
		}
		case '*':
		{
			islem_sonucu=a*b;
			break;
		}
		case '/':
		{
			islem_sonucu=a/b;
			break;
		}
	}
	return islem_sonucu;
}

int main(){
	float birinci_sayi,ikinci_sayi;
	char islem;
	printf("Yapmak istediginiz islemi seciniz(+ - * /): ");
	scanf(" %c",&islem);
	
	printf("Lutfen iki adet saiyi giriniz: ");
	scanf("%f %f",&birinci_sayi,&ikinci_sayi);
	
	float sonuc=dort_islem(birinci_sayi,ikinci_sayi, islem);
	
	printf("\n%.3f %c %.3f = %.3f", birinci_sayi,islem,ikinci_sayi,sonuc);
	
	return 0;
}
