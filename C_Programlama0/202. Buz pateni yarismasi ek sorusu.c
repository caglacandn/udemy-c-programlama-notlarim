/*
Onceki ornekte yarismaya katilan yarismaci sayisini n, yarismacilarin adi, soyadi ve hakemlerin degerlendirme puanlarini
tanimlayacaginiz bir yapi dizisine giriiniz. Daha sonra her yarismacinin performans puanini yukarida yazilmis fonksiyonu kullanarak 
hesaplayiniz. Son olarak yapi dizisini taratarak birinci gelen yarismaciyi bulunuz.
*/

#include<stdio.h>

struct yarismaciTip{
	char isim[20],soyad[20];
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
	struct yarismaciTip patenci[100];
	int n;
	int i,j;
	float max=0.0;
	int birinci_yarismaci;
	printf("Lutfen yarismci sayisini giriniz: "),
	scanf("%d",&n);
	
	for(j=0; j<n; j++)
	{
		printf("\n%d. yarismacinin adini giriniz: ",j+1);
		scanf(" %s",&patenci[j].isim);
		
		printf("%d. yarismacinin soyadini giriniz: ",j+1);
		scanf(" %s",&patenci[j].soyad);
	
		printf("\n%d. yarismacinin aldigi puanlar:\n",j+1);
		
		for(i=0; i<10; i++)
		{
			printf("\t%d. hakem puani: ",i+1);
			scanf("%f", &patenci[j].puan[i]);
			
			if(patenci[j].puan[i] > 6 || patenci[j].puan[i] < 0)
			{
				printf("Lutfen dogru bir puan giriniz!\n");
				i--;
			}
		}
		patenci[j].performans = puanHesap(patenci[j]);
		
		printf("\t%d. Yarismacinin Performans Puani = %f\n",j+1, patenci[j].performans);


		if(patenci[j].performans>max)
		{
			max=patenci[j].performans;
			birinci_yarismaci = j;
		}

	}
	
	printf("\nYarismanin performans birincisi yarismacisi:\n");
	printf("%f puan ile %s %s", patenci[birinci_yarismaci].performans,patenci[birinci_yarismaci].isim,patenci[birinci_yarismaci].soyad);
	return 0;
}
