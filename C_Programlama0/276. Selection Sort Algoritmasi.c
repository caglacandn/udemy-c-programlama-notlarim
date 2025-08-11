
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N;
	int i,j;
	int konum;
	int gecici;
	printf("Kac adet sayi girilecek: ");
	scanf("%d", &N);
	
	int dizi[N];
	srand(time(0));
	printf("Dizi elemanlari: \n");
	
	for(i=0; i<N; i++)
	{
		dizi[i]=rand()%100;
	}
	printf("\n");
	for(i=0; i<N; i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	for(i=0; i<(N-1); i++)
	{
		konum=i;
		for(j=i+1; j<N; j++)
		{
			if(dizi[konum] > dizi[j])
			{
				konum = j;
			}
		}
		if(konum != i)
		{
		gecici=dizi[i];
		dizi[i]=dizi[konum];
		dizi[konum]=gecici;
		}
	}
	
	printf("\nSiralanmis dizi elemanlari:\n");
	for(i=0; i<N; i++)
	{
		printf("%d\t",dizi[i]);
	}
	return 0;
}
