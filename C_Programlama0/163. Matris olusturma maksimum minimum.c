#include<stdio.h>
/*
3 adet fonksiyon yazin

1. kullaniciya bir matrisin elemanlarini girdiren bir fonksiyon yazin.

3. Girdiginiz matris degerlerinin en buyuk, en kucuk elemanini ve 
girilen elemanlarin toplamini bulan bir fonksiyon yazin. Bu fonksiyonu
main fonksiyonundan degiskenin adresini cagirma yontemiyle cagirin.

2. Elemanlari girilen matrisi ekrana yazdirmaya yarayan bir fonskiyon yazin.

Yukaridaki fonksiyonlari cagiran ve asagidaki gibi bir yapiya sahip 
C programini yazin.

3*2 tipinde bir matris girin
5
6
4
3
2
8
Matrisimiz: 
5 6
4 3
2 8
En buyuk deger: 8
En kucuk deger: 2
Matrisim tum elemanlari toplami: 28
*/
#define m 3
#define n 2

void matris_kullanicidan_al(int matris[m][n])
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("matris[%d][%d]: ",i+1,j+1);
			scanf("%d", &matris[i][j]);
		}
	}
}

void matris_ekrana_yazdir(int matris[m][n])
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%4d", matris[i][j]);
		}
		printf("\n");
	}
}

void matris_bilgileri(int matris[m][n], int *max_deger, int *min_deger, int *eleman_toplami)
{
	int i,j;
	*eleman_toplami=0;
	*max_deger=*min_deger=matris[0][0];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*max_deger<matris[i][j])
				*max_deger=matris[i][j];
				
			if(*min_deger>matris[i][j])
				*min_deger=matris[i][j];
				
			*eleman_toplami += matris[i][j];
		}
	}
}


int main()
{
	int matrisin_en_buyuk_degeri;
	int matrisin_en_kucuk_degeri;
	int matrisin_elemanlari_toplami;
	
	printf("Lutfen %d*%d tipinde bir matris girin\n",m,n);
	int matris[m][n];
//1. kullaniciya bir matrisin elemanlarini girdiren bir fonksiyon yazin.	
	matris_kullanicidan_al(matris);
//2. Elemanlari girilen matrisi ekrana yazdirmaya yarayan bir fonskiyon yazin.
	printf("\nMatrisimiz:\n");
	matris_ekrana_yazdir(matris);
/*
3. Girdiginiz matris degerlerinin en buyuk, en kucuk elemanini ve 
girilen elemanlarin toplamini bulan bir fonksiyon yazin. Bu fonksiyonu
main fonksiyonundan degiskenin adresini cagirma yontemiyle cagirin.
*/
	matris_bilgileri(matris, &matrisin_en_buyuk_degeri, &matrisin_en_kucuk_degeri, &matrisin_elemanlari_toplami);
	printf("\nEn buyuk deger: %d", matrisin_en_buyuk_degeri);
	printf("\nEn kucuk deger: %d", matrisin_en_kucuk_degeri);	
	printf("\nMatrisin tum elemanlari toplami: %d", matrisin_elemanlari_toplami);	
	return 0;
}
