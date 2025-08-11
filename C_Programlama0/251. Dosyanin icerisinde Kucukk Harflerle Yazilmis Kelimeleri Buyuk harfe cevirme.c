/*
Bilgiler.txt dosyasinin icerisinde adagidai gibi kuzuk harflerle yazilmis bir takim bilgiler bulunmaktadir.
Bu bilgilerin okunup buyuk harflere donusturdukten sonra buyuk.txt dosyasina yazilmasini saglayan C programini yaziniz.

bilgiler.txt dosyasi
Sifirsan Ileri Seviye Komple C Programlama

buyuk.txt dosyasi
SIFIRDAN ILERI SEVIYE KOMPLE C PROGRAMLAMA
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	FILE *dosya1, *dosya2;
	int karakter;
	dosya1=fopen("bilgiler.txt","r");
	dosya2=fopen("buyuk.txt", "w");
	
	if(dosya1== NULL || dosya2 == NULL)
	{
		printf("Dosya okuma veya yazma hatasi");
	}
	else
	{
		do
		{
			karakter=getc(dosya1);
			if(karakter != EOF)
			{
				if(karakter >='a' && karakter<='z')
				{
					fprintf(dosya2,"%c",karakter-32);
				}
				else
				{
					fprintf(dosya2, "%c",karakter);
				}
			}
		}while(karakter != EOF);
		
		fclose(dosya1);
		fclose(dosya2);
		
		printf("Islem basarili");
		
	}
	
	
	
	return 0;
}
