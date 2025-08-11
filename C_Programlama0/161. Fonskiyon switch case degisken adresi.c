#include<stdio.h>
//onceki ornegi (160.) degiskenin adresiyle cagirma yontemini kullanaral degistirin
//guzel ornek
void dort_islem(float a, float b, char op, float *islem_sonucu )
{
	switch(op)
	{
		case '+':
		{
			*islem_sonucu=a+b;
			break;
		}
		case '-':
		{
			*islem_sonucu=a-b;
			break;
		}
		case '*':
		{
			*islem_sonucu=a*b;
			break;
		}
		case '/':
		{
			*islem_sonucu=a/b;
			break;
		}
	}
	
}

int main(){
	float birinci_sayi,ikinci_sayi;
	char islem;
	float sonuc;
	printf("Yapmak istediginiz islemi seciniz(+ - * /): ");
	scanf(" %c",&islem);
	
	printf("Lutfen iki adet saiyi giriniz: ");
	scanf("%f %f",&birinci_sayi,&ikinci_sayi);
	
	dort_islem(birinci_sayi,ikinci_sayi, islem, &sonuc);
	
	printf("\n%.3f %c %.3f = %.3f", birinci_sayi,islem,ikinci_sayi,sonuc);
	
	return 0;
}
