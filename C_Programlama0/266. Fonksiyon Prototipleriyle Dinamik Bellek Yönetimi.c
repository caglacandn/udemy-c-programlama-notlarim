/*
Bilgisayar tarafindan N adet rastgele sayi uretilemsi, uretilen tamsayilarin kucukten buyuge dogru siralanmasi
icin asagida verilen fonksiyonn prototipleri kullanilmaktadir. Buna gore verilen fonksiyon prototipleirnden yararlanarak
ve dinamik bellek kullanarak uygun C programini yaaziniz.

void dizi_olustur(int *, int);
void dizi_sirala(int *, int);
void dizi_buyuk(int *, int);
*/

#include<stdio.h>
#include<stdlib.h>

void dizi_olustur(int *e, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		e[i] = rand()%50;
		printf("%d  ", e[i]);
	}
	
}

void dizi_sirala(int *e, int n)
{
	int i,j;
    int gecici;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {

            if(e[j]>e[j+1])
            {
                gecici=e[j];
                e[j]=e[j+1];
                e[j+1]=gecici;
            }
        }
    }
    printf("\nDizinin siralanmis hali:\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",e[i]);
    }
}

void dizi_buyuk (int *e, int n)
{
	
	int enb;
	enb=e[0];
	int i;
	for(i=1; i<n; i++)
	{
		if(enb < e[i])
		{
			enb = e[i];
		}
	}
	printf("\nEn buyuk : %d", enb);
}


int main()
{
	int N;
	int *p;
	printf("Kac adet sayi uretilecek: ");
	scanf("%d", &N);
	
	srand(time(0));
	
	p=(int *)malloc(N*sizeof(int));
	
	dizi_olustur(p, N);
	dizi_sirala(p, N);
	dizi_buyuk(p,N);
	free(p);
	
	
	
	return 0;
}
