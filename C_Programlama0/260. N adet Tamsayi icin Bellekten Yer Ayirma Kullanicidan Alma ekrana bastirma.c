/*
Klavyeden girilen N adet tamsayinin bellekten yer ayrilarak bellege yazilmasiini ve bellekten okunarak
ekrana listelenmesini saglayan C programini yaziniz.
*/
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *p;
	printf("N degerini giriniz:\n");
	int N,i;
	scanf("%d", &N);
	
	p = (int *)malloc(N*sizeof(int));
	
	for(i=0; i<N; i++)
	{
		printf("%d. sayi: ",i+1);
		scanf("%d", &(*(p+i))); //scanf("%d", (p+i));
	}
	
	for(i=0; i<N; i++)
	{
		printf("%d\n",(*(p+i)));
	}
	
	return 0;
}
