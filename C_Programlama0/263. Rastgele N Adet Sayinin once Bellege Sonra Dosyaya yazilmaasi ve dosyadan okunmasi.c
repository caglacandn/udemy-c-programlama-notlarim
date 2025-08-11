/*
Bilgisayar tarafindan rastgele uretilen N adet tamsayinin bellege, ardindan bellekten okunan degerlerin
sayi.txt dosyasina yazilmasini ve dosyadan okunan degerlerin ekrana listelenmesini saglayan C programini 
yaziniz.
*/
#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *dosya;
	int N,*p,i,c;

	printf("Kac adet tamsayi girilecek: ");
	scanf("%d",&N);
	p=(int *)malloc(N* sizeof(int));
	dosya=fopen("sayilar.txt","w");
	
	srand(time(0));
	
	printf("Uretilen sayilar:\n");
	
	for(i=0; i<N; i++)
	{
		*(p+i)=rand()%100;
		fprintf(dosya, "%d ",*(p+i));
		printf("%d   ",*(p+i));
	}
	fclose(dosya);
	
	printf("\nOkunan sayilar: \n");
	dosya = fopen("sayilar.txt", "r");
	
	do
	{
		c=getc(dosya);
		if(c!=EOF)
		{
			putchar(c);
		}
	}while(c!=EOF);
	
	fclose(dosya);
	free(p);
	
	return 0;
}
