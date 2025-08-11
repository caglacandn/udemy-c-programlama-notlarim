#include<stdio.h>
#include<stdlib.h>


int main()
{
	int N;
	int i;
	int aranan;
	
	printf("Kac adet sayi uretilecek: ");
	scanf("%d", &N);
	
	int dizi[N];
	srand(time(0));
	
	for(i=0; i<N; i++)
	{
		dizi[i]=rand()%10;
	}
	printf("Dizi elemanlari:\n");
	for(i=0; i<N; i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	printf("\nLutfen aranan sayiyi giriniz: ");
	scanf("%d",&aranan);
	
	for(i=0;i<N; i++)
	{
		if(dizi[i]==aranan)
		{
			printf("%d sayisi %d. sirada bulundu.\n",aranan,i+1);
			break; //bulunan sayinin ilk sirasini bulduktan sonra cikmak icin
		}
		
	}
	
	if(i==N)
	{
		printf("%d bulunamadi.",aranan);
	}
	
	
	return 0;	
}
