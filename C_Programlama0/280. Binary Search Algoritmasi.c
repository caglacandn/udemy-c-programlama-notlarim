
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int N;
	int i,j;
	int aranan,ilk,orta,son;
	int gecici;
	
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
	
	for(i=0; i<N-1;i++)
	{
		for(j=0; j<N-1-i; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				gecici =dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}
		}
	}
	
	printf("\nSiralanmis hali:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	printf("\nAranan degeri giriniz: ");
	scanf("%d",&aranan);
	
	ilk=0;
	son=N-1;
	orta=(ilk+son)/2;
	
	while(ilk<=son)
	{
		if(dizi[orta]<aranan)
		{
			ilk=orta+1;
		}
		else if(dizi[orta]==aranan)
		{
			printf("\n%d sayisi %d. sirada bulundu.\n",aranan,orta+1);
		}
		else
		{
			son=orta-1;
		}
		orta = (ilk+son)/2;
	}
	if(ilk>son)
	{
		printf("\n%d sayisi bulunamadi.",aranan);
	}
	
	return 0;
}
