/*
Kullanici tarafindan girilen pozitif N tamsayisina kadar olan tek ve cift sayilari tekcift.txt dosyasina yazilmasini
ve dosyadan okunarak ekrana gosterilmesini saglayan C programini yaziniz.
*/
#include<stdio.h>


int main()
{
	FILE *dosya;
	int N,i,karakter;
	dosya = fopen("tekcift.txt", "w");
	
	if(dosya == NULL)
	{
		printf("Dosya olusturulamadi.");
	}
	else
	{
		printf("Lutfen bir sayi giiriniz: \n");
		scanf("%d", &N);
		for(i=1; i<=N; i++)
		{
			if(i%2 == 0)
			{
				fprintf(dosya, "%d = cift\n", i);
			}
			else
			{
				fprintf(dosya, "%d = tek\n",i);
			}
		}
		fclose(dosya);
	}
	
	printf("\nBilgiler dosyaya yazildi.");
	
	printf("\nDosyalar okunuyor\n");
	
	dosya = fopen("tekcift.txt", "r");
	
	do
	{
		karakter = getc(dosya);
		if(karakter != EOF) //EOF: END OF FILE
		{
			putchar(karakter);
		}
	} while(karakter != EOF);
	
	fclose(dosya);
		
	return 0;
}
