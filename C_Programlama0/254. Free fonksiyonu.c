/*
Free fonksiyonu malloc ve calloca fonksiyonlariyla hafizadan ayrilan yeri serbest 
birakmamiza yarar.
Gereksiz bllek kullaniminin onune geceer.
free(ptr);
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	int *ptr;
	int n;
	n=5;
	int i;
	printf("Girdigimiz sayi degeri %d\n",n);
	
	ptr = (int *)calloc(n,sizeof(int));
	if(ptr == NULL)
	{
		printf("Hafiza bolunmedi");
	}
	else
	{
		for(i=0; i<n; i++)
		{
			ptr[i]=i+1;
		}
		printf("Elemanlarim:\n");
		for(i=0; i<n; i++)
		{
			printf("%d\n",ptr[i]);
		}
		free(ptr);//****************
	}
	return 0;
	*/
	
	int *ptr, *ptr1;
	int n;
	n=5;
	int i;
	printf("Girdigimiz sayi degeri %d\n",n);
	
	ptr=(int *)malloc(n*sizeof(int));
	ptr1=(int*)calloc(n,sizeof(int));
	
	if(ptr==NULL || ptr1 == NULL)
	{
		printf("Bellekten ayirma islemi basarisiz.\n");
	}
	else
	{
		printf("Malloc kullaranak basarili bir sekilde ayirma islemini yaptim\n");
		free(ptr);
		printf("Malloc icin ayrilan yer serbest birakildi.\n");
		
		printf("Calloc kullaranak basarili bir sekilde ayirma islemini yaptim\n");
		free(ptr1);
		printf("Calloc icin ayrilan yer serbest birakildi.\n");
		
	}
	return 0;
}
