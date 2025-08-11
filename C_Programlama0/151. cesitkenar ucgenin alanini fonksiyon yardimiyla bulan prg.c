/*
Kenar uzunluklari birbirinden farkli cesitkenar bir ucgenin alaninin bulunmasini saglayan C programini
fonksiyon kullanarak yaziniz.

u=(a+b+c)/2;
Alan^2= u*(u-a)*(u-b)*(u-c);

girilen kenarlar ucgen olusturur mu kontrol et !!!
*/

#include<stdio.h>
#include<math.h> //abs() ve sqrt() kullanildigi icin math.h kutuphanesi eklenmistir.

int ucgen_denetleme(float a, float b, float c) //girilen degerlerin ucgen olusturup olusturmadigini kontrol eden fonksiyon
{
	int kosul_1, kosul_2, kosul_3;
	
	kosul_1 = (abs(b-c) < a) && (a < (b+c));
	kosul_2 = (abs(a-c) < b) && (b < (a+c));
	kosul_3 = (abs(a-b) < c) && (c < (a+b));
	
	if((kosul_1==1) && (kosul_2==1) && (kosul_3==1))
	{
		return 1;
	}
	if((kosul_1!=1) || (kosul_2!=1) || (kosul_3!=1))
	{
		return 0; 
	}
}

void ucgen_alan_hesaplama(float a, float b, float c) //girilen kenar uzunluklarindan ucgenin alanini hesaplayan fonksiyon
{
	float u = (a+b+c)/2.0;
	float Alan = sqrt(u*(u-a)*(u-b)*(u-c));
	printf("Girmis oldugunuz ucgenin alani: %.4f", Alan);
}

int main()
{
	float a,b,c; 
	int ucgen_olusturur_mu;
	
	printf("Lutfen alani hesaplanacak ucgenin kenaralarini giriniz.\n\n1. Kenar: ");
	scanf("%f",&a);
	printf("2. kenar: ");
	scanf("%f",&b);
	printf("3. kenar: ");
	scanf("%f",&c);
	
	if((a>0.0) && (b>0.0) && (c>0.0))
	{
		ucgen_olusturur_mu = ucgen_denetleme(a,b,c);
		
		if(ucgen_olusturur_mu == 1)
		{
			printf("Girdiginiz kenarlar ucgen olusturmaktadir.");
			
			ucgen_alan_hesaplama(a,b,c);	
		}
		else 
		{
			printf("\nGirdiginiz kenar uzunluklari ucgen olusturmamaktadir.\nLutfen yeni degerler giriniz.");
			return 0;
		}
	}
	
	if((a<=0.0) || (b<=0.0) || (c<=0.0))
	{
		printf("\nGirdiginiz buyuklukler 0'dan buyuk olmalidir.\nLutfen yeni kenar uzunluklari girerek tekrar deneyiniz.");
	}
	
	return 0;
	
}
