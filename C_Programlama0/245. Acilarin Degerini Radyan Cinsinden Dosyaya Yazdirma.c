/*
0 ile 360 derece arasinda yer alan acilarin radyan cinsinden sinus ve kosinus degerlerinin acilar.txt dosyasina 
yazilmasini saglayan C programini yaziniz.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

int main()
{
	FILE *dosya;
	int i;
	double sinus,cosinus;
	
	dosya = fopen("acilar.txt", "w");
	if(dosya == NULL)
	{
		printf("Dosya olusturulamadi.");
	}
	else
	{
		fprintf(dosya, "DERECE\t\tSIN\t\t\tCOS\n");
		fprintf(dosya, "======\t\t===\t\t\t===\n");
		
		for(i=0; i<=360; i++)
		{
			sinus=sin(i*PI/180);
			cosinus=cos(i*PI/180);
			fprintf(dosya, "%d\t\t\t%lf\t\t%lf\n",i,sinus, cosinus);
		}
		
	}
	fclose(dosya);
	printf("Bilgiler dosyaya yazildi.");
	return 0;
}
