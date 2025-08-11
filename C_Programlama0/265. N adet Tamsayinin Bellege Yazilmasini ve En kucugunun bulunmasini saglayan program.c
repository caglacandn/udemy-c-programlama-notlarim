

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int N;
	int enk;
	printf("Kac adet sayi uretilecek: ");
	scanf("%d", &N);
	int i;
	
	int *p=(int *)malloc(N*sizeof(int));
	
	srand(time(0));
	
	for(i=0; i<N; i++)
	{
		*(p+i) = rand()%50;
		printf("%d   ", *(p+i));
	}
	printf("\n");
	enk = *p;
	for(i=1; i<N; i++)
	{
		if(*(p+i)<enk)
		{
			enk=*(p+i);
		}
	}
	printf("En kucuk tamsayi = %d\n", enk);
	free(p);
	return 0;
}
