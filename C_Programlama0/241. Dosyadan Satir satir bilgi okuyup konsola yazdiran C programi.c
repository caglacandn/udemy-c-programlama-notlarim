/*
Bilgii.txt dosyasi icerisinde yer alan bilgilerin satir satir okunarak ekrana gosterilmesini saglayan C programini yaziniz.
*/
#include<stdio.h>


int main()
{
	FILE *dosya;
	char satir[100], *karakter;
	dosya = fopen("Bilgii.txt", "r");
	
	if(dosya == NULL)
	{
		printf("Dosya olusturulamadi.");
	}
	else
	{
		do
		{
			karakter = fgets(satir, 100, dosya);
			
			if(karakter != NULL)
			{
				printf("%s",satir);
			}
			
		} while(karakter != NULL);
		
		fclose(dosya);
		printf("\nOkuma islemi tamamlandi");
	}
	return 0;
}
