/*
Kullanici tarafindan girilen bir cumlenin bilgi.txt dosyasina N defa alt alta yazilmasini saglayan
C programini yaziniz.
*/
#include<stdio.h>

int main()
{
	
	FILE *dosya;
	char cumle[30];
	int N,i;
	dosya=fopen("bilgi.txt","w");
	
	if(dosya == NULL)
	{
		printf("Dosya olusturulamadi.");
	}
	else
	{
		printf("Lutfen bir cumle giriniz:\n");
		gets(cumle);
		printf("Kac satir yazilacak: ");
		scanf("%d", &N);
		
		for(i=1; i<=N; i++)
		{
			fprintf(dosya, "%d. satir -- %s\n",i,cumle);
		}
		
	fclose(dosya);	
	printf("Bilgiler dosyaya yazildi.");
	}
	
	return 0;
}
