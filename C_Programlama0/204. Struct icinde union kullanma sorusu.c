/*
Birinci elemani tamsayi ve ikinci elemani bir birlesim olan yapi dizisini (en fazla 20 elemanli)
tanimlayiniz. Birlesim tipindeki eleman, karakter ve reel sayi olan 2 elemandan olussun. Programinizda
bir tamsayi degerine gore bir karakter veya bir reel sayiyi girdi olarak aliniz. Bu tamsayi degeri
1 ise bir karakter 0 ise bir reel sayi girilmelidir. Bu tamsayilari ve bu tamsayilara bagli olarak
karakter veya reel sayilari bu yapi dizisinde saylayiniz. Veri girme islemi ise tamsayi 
degerinin 0 ve 1 den farkli bir sayi girilmesiyle sonlanmalidir. Ayrica yapi dizisi tarayarak 
reel sayilarin ortalamasini bulunuz.
*/
#include<stdio.h>

struct degerTip{
	int tip;
	
	union{
		char kar;
		float sayi;
	}bir;
	
};


int main(){
	
	struct degerTip degerler[20];
	int i=-1;
	int j;
	char satir;
	float ortalama = 0.0;
	int n=0;
	do
	{
		i++;
		printf("Lutfen bir tamsayi giriniz:\n");
		scanf("%d",&degerler[i].tip);
		scanf("%c",&satir);	
		if(degerler[i].tip == 1)
		{
			printf("Karakter giriniz:\n");
			scanf(" %c",&degerler[i].bir.kar);
			scanf("%c",&satir);
		}
		else if(degerler[i].tip == 0 )
		{
			printf("Reel sayi giriniz:\n");
			scanf("%f", &degerler[i].bir.sayi);
		}
	
	}
	while(degerler[i].tip == 0 || degerler[i].tip == 1);
	
	for(j=0; j<=i; j++)
	{
		if(degerler[j].tip == 0 )
		{
			ortalama += degerler[j].bir.sayi;
			n++;
		}
	}
	
	ortalama = ortalama/n;
	printf("\nReel sayilarin ortalamasi: %.3f", ortalama);
	
	return 0;
}
