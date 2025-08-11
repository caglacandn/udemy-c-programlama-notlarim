#include <stdio.h>
/*
Kullanici tarafindan girilen bir N pozitif tamsayinin karekokunun bulunmasini saglayan(sqrt() kullanmadan) c 
programini fonksiyon kullanarak yaziniz 
(A: Girilen Sayi)
k=A/2
karekok = toplam 1 den 50 ye kadar k^2+A/2k
*/

double karekok_bul(double n)
{
	int i;
	double karekok;
	if(n>0.0)
	{
		karekok=n/2;
		for(i=0; i<50; i++)
		{
			karekok = ((karekok*karekok)+n)/(2*karekok);
		}
		return karekok;
	}
	else if(n==0)
	{
		return 0;
	}
	else 
	{
		printf("Lutfen gecerli bir deger giriniz\n");
	}
}

int main(){
	
	double sayi;
	printf("Karekoku bulunacak sayi: ");
	scanf("%lf",&sayi);
	
	printf("%.5lf karekoku = %.5lf \n", sayi, karekok_bul(sayi));
	
	return 0;
}
