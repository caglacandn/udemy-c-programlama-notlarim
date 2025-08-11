#include<stdio.h>
#define N 2
struct oyuncu{
	
	char isim[10];
	char soyisim[10];
	int yas;
	int seviye;
};

struct ekip{
	char isim[10];
	struct oyuncu oyuncu1;
	struct oyuncu oyuncu2;
};

void oyuncuyu_olustur(struct oyuncu *j)
{
	printf("Ismi giriniz: ");
	scanf("%s",j->isim); //karakter dizisinin adi adres belirttiginden & koymadik
	printf("Soyismi giriniz: ");
	scanf("%s",j->soyisim);
	printf("Yasi giriniz: ");
	scanf("%d",&j->yas);
	printf("Seviyeyi giriniz: ");
	scanf("%d",&j->seviye);
}
void ekibi_olustur(struct ekip *e)
{
	printf("Ekibin adini giriniz: ");
	scanf("%s",e->isim);
	printf("Oyuncu 1: \n");
	oyuncuyu_olustur(&e->oyuncu1);
	printf("Oyuncu 2:\n");
	oyuncuyu_olustur(&e->oyuncu2);
}

void oyuncuyu_bas(struct oyuncu j)
{
	printf("Isim: %s\n",j.isim);
	printf("Soyisim: %s\n",j.soyisim);
	printf("Yas: %d\n",j.yas);
	printf("Seviye: %d\n",j.seviye);
}

void ekibi_bas(struct ekip e)
{
	printf("Isim: %s\n",e.isim);
	printf("Oyuncu 1: \n");
	oyuncuyu_bas(e.oyuncu1);
	printf("Oyuncu 2:\n");
	oyuncuyu_bas(e.oyuncu2);
}
int main(){
	
	struct ekip tab[N];
	int i;
	for(i=0; i<N; i++)
	{
		printf("Ekip %d: \n",i+1);
		ekibi_olustur(tab[i]);
	}
	
	for(i=0; i<N; i++)
	{
		printf("Ekip %d: \n",i+1);
		ekibi_bas(tab[i]);
	}
	
	
	return 0;
}
