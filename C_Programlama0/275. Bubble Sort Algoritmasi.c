
//siralanip ekrana bastirmasini sagliyor
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N,i,j,gecici;
	printf("Kac adet sayi uretilecek: ");
	scanf("%d",&N);
	int dizi[N];
	
	srand(time(0));
	for(i=0; i<N; i++)
	{
		dizi[i]=rand()%100;
	}
	printf("\nDizi elemanlari: \n");
	for(i=0; i<N; i++)
	{
		printf("%d\n",dizi[i]);
	}
	for(i=0; i<(N-1); i++)
	{
		for(j=0; j<N-1-i;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				gecici = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = gecici; 
			}
		}
	}
	
	printf("\nSiralanmis dizi elemanlari: \n");
	for(i=0; i<N; i++)
	{
		printf("%d\t", dizi[i]);
	}
	
	return 0;
}
