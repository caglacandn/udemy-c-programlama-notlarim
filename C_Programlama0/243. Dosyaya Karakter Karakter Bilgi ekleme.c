/*
Bilgi3.txt dosyasi icerisinde birtakim bilgilerin oldugu varsayilmaktadir. Buna gore Kullanici tarafindan
girilen bir cumleniin karakter karakter Bilgi3.txt dosyasina eklenmesini saglayan C programini yaziniz.
*/
#include<stdio.h>


int main()
{
	FILE *dosya;
	char cumle[10];
	int i;
	
	dosya = fopen("Bilgi3.txt", "a");
	
	if(dosya == NULL)
	{
		printf("Dosya bulunamadi.");
	}
	else
	{
		printf("Lutfen bir cumle giriniz: \n");
		gets(cumle);
		
		for(i=0; cumle[i]; i++)
		{
			putc(cumle[i], dosya);
			
		}
		putc('\n',dosya);
	
	}
	printf("\nBilgiler eklendi.");	
	return 0;
}
