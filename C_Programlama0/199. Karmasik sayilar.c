/*
Karmasik bir sayi a+ib seklinde olup a degeri sayinin gercel kismini; b degeri ise sanal 
kismini olusturur. Bir karmasik sayiyi gercel ve sanal kisimdan olusan bir yapi 
olarak tanimlayiniz. Daha sonra iki karmasik sayiyi ve toplama cikartma operatorunu
girdi olarak aliniz. Toplama ya da cikarma islemini yaparak sonucu bu yapida tanimlanmis bir baska
degiskende saklayiniz ve ekrana goruntuleyiniz. 

ornek cikti

Birinci karmasik sayi: 2.0 3.0
Ikinci karmasik sayi: 5.0 -4.5
Operator(+,-): +
Sonuc: 7.00 - 1.50i
*/

#include <stdio.h>

struct karmasik_sayi{
	
	float a,b;
	
};


int main()
{
	struct karmasik_sayi sayi1, sayi2, sonuc;
	
	char op;
	
	printf("Lutfen yapmak istediginiz islemi giriniz: ");
	scanf(" %c",&op);
	
	printf("Birinci karmasik sayi: ");
	scanf("%f %f",&sayi1.a,&sayi1.b);
	
	printf("Ikinci karmasik sayi: ");
	scanf("%f %f",&sayi2.a,&sayi2.b);
	
	if(op == '+')
	{
		sonuc.a = sayi1.a + sayi2.a;
		sonuc.b = sayi1.b + sayi2.b;
	}
	else if(op == '-')
	{
		sonuc.a = sayi1.a - sayi2.a;
		sonuc.b = sayi1.b - sayi2.b;
	}
	else
	{
		printf("Girdiginiz islem tanimli degildir.");
	}
	
	printf("Sonuc: %.3f %c %.3fi",sonuc.a, op, sonuc.b);
	return 0;
}
