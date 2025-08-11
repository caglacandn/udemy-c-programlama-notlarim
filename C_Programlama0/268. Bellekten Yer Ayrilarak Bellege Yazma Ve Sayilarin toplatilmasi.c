

#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *bellek;
	int N,i;
	int toplam=0;
	float ortalama;
	printf("Lutfen eleman sayisini giriniz: ");
	scanf("%d", &N);
	
	bellek = (int *)calloc(N, sizeof(int));
	
	for (i=0; i<N; i++)
	{
		printf("%d. sayi: ");
		scanf("%d",bellek+i);
		toplam += *(bellek+i); 
	}
	
	printf("Toplam = %d", toplam);
	ortalama = (float)toplam/N;
	printf("\nOrtalama = %.3f", ortalama);
	return 0;
}
