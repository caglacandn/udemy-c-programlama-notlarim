
//264. Tek Ve cift Sayilari Farkli Bellek Bolgelerinde Tutma ve ekrana basma


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p1, *p2;
	int N,i;
	int cift=0, tek=0;
	printf("Bir tamsayi giriniz: ");
	scanf("%d",&N);
	
	p1=(int *)malloc(N*sizeof(int));
	p2=(int *)malloc(N*sizeof(int));
	
	for(i=0;i<N; i++ )
	{
		if(i%2 == 0)
		{
			*(p1+cift)=i;
			cift++;
		}
		else
		{
			*(p2+tek)=i;
			tek++;
		}
		
	}	
	
	printf("Cift sayilar:\n");
	for(i=0; i<cift; i++)
	{
		printf("%d  ", *(p1+i));
	}
	printf("\nTek sayilar:\n");
	for(i=0; i<tek; i++)
	{
		printf("%d  ", *(p2+i));
	}
			
	
	
	free(p1);
	free(p2);
	return 0;
}
