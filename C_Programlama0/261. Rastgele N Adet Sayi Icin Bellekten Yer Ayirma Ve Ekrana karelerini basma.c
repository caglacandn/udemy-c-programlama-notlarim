/*
Bilgisayar tarafindan rastgele uretilen N adet tamsayiyi bellege yazan ve bellekten okuyarak 
karelerini ekrana listeleyen C programini yaziniz.
*/
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *p, i, N;
	printf("Kac adet sayi uretilecek: ");
	scanf("%d", &N);
	p=(int *)malloc(N*sizeof(int));
	
	srand(time(0));
	printf("Uretilen sayilar:\n");
	for(i=0; i<N; i++)
	{
		*(p+i)=rand()%100;
		printf("%d\t\t", *(p+i));
			
	}
	printf("\nKareleri:\n");
	for(i=0; i<N; i++)
	{
		printf("%d\t\t", (*(p+i))*(*(p+i)) );
	}
	
	return 0;
}
