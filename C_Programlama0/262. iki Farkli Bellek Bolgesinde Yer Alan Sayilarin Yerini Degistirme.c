


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p1, *p2, gecici;
	p1=(int *)malloc(sizeof(int));
	p2=(int *)malloc(sizeof(int));
	
	printf("Birinci sayi: ");
	scanf("%d",&(*p1));
	
	printf("Ikinci sayi: ");
	scanf("%d",&(*p2));
	
	printf("Sayi 1= %d    Sayi 2=%d\n",*p1,*p2);
	
	gecici=*p1;
	*p1 = *p2;
	*p2 = gecici;
	
	printf("Sayi 1= %d    Sayi 2=%d", *p1, *p2);
	
	free(p1);
	free(p2);
	
	return 0;
}
