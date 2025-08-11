/*
Bir buz pateni karsilasmasinda, bir yarismacinin performansi 6.00 üzerinde puanlanarak 10 hakem tarafindan
degerlendirilmektedir. Yarismacinin performans puani ise hakemlerin vermis oldugu en dusuk ve en yuksek puan 
atilip, geri kalan puanlarin aritmatik ortalamasi alinarak bulunmaktadir. Yazacaginiz programda yarismacinin adi, soyadi,
performans puanini hesaplayip ekranda goruntuleyiniz. Performans hesaplamasini tek parametreli bir fonksiyonda yapiniz.
Bu fonksiyon yarismaciya ait yapiyi paramtere olarak almali ve performans puanini
hesaplayarak geri dondurmelidir.
*/

#include<stdio.h>

struct yarismaciTip{
	char isim[10],soyad[10];
	float puan[10],performans;	
};

float puanHesap(struct yarismaciTip pat)
{
	int i;
	float sonuc=0;
	float max=0.0;
	float min=6.0;
	for(i=0; i<10; i++)
	{
		if(pat.puan[i]>max)
		{
			max = pat.puan[i];
		}
		if(pat.puan[i]<min)
		{
			min = pat.puan[i]; 
		}
		
		sonuc += pat.puan[i];
	}
	
	sonuc = (sonuc-max-min)/8.0;
}




int main()
{
	int i;
	struct yarismaciTip patenci;
	
	printf("Yarismacinin adi: ");
	scanf(" %s",&patenci.isim);
	
	printf("Yarismacinin soyadi: ");
	scanf(" %s", &patenci.soyad);
	
	printf("Hakem puanlari:\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d. hakem puani: ",i+1);
		scanf("%f", &patenci.puan[i]);
		
		if(patenci.puan[i] > 6 || patenci.puan[i] < 0)
		{
			printf("Lutfen dogru bir puan giriniz!\n");
			i--;
		}
	}
	
	printf("\n\nYarismaci bilgileri:\n%s %s",patenci.isim,patenci.soyad);
	patenci.performans = puanHesap(patenci);
	printf("\nPerformans puani: %f\n\n",patenci.performans);
	return 0;
}
