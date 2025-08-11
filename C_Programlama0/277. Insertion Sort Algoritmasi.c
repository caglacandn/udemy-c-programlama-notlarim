#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;
	int i,j;
	int gecici;
	printf("Kac adet sayi uretilecek: ");
	scanf("%d", &N);
	
	int dizi[N];
	srand(time(0));
	
	for(i=0; i<N; i++)
	{
		dizi[i]=rand()%100;
	}
	printf("\nDizi elemanlari:\n");
	for(i=0; i<N; i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	for(i=1; i<N; i++)
	{
		j=i;
		while(j>0 && dizi[j]<dizi[j-1])
		{
			gecici=dizi[j];
			dizi[j]=dizi[j-1];
			dizi[j-1]=gecici;
			
			j--;
		}
	}
	printf("\n");
	for(i=0; i<N; i++)
	{
		printf("%d\t",dizi[i]);
	}
	return 0;	
}
