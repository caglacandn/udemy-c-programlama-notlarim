/*
Klavyeden baslangic,bitis ve artim degeri girilen bir serinin elde edilmesini saglayan
C programini recursive fonksiyon kullanarak yaziniz.
Ornegin baslangic 5 bitis 55 ve artim 7 olan bir seri 5,12,19,26,33,40,47,54 seklinde olacaktir.
*/
#include<stdio.h>

void seri_olustur(int bas, int bit, int artis)
{
	if(bas<=bit)
	{
		printf("%d\n", bas);
		seri_olustur(bas+artis, bit, artis);
	}
}



int main()
{
		int bas,bit,artis;
		printf("Lutfen bir baslangic degeri girin: ");
		scanf("%d",&bas);
		printf("Lutfen bir bitis degeri girin: ");
		scanf("%d",&bit);
		printf("Lutfen bir artis degeri girin: ");
		scanf("%d",&artis);
		
		seri_olustur(bas, bit, artis);
		
	return 0;
}
