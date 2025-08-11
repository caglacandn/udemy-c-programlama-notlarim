#include <stdio.h>
/*
10 tane integer tipinde deger tutan dizi tanimlayiniz
Dizinin tüm elemanlarini kullanicinin girmesini isteyiniz.
Dizinin en buyuk ve en kucuk elemanlarini bulup ekrana bastiriniz
for yapisini kullaniniz.
*/

int main(){
	int i;
	int max,min;
	int dizi[10];
	printf("Lutfen 10 tane deger giriniz: \n");
	
	for (i=0; i<10; i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	printf("\nGirdiginiz dizi: ");
	for (i=0; i<10; i++)
	{
		printf("%5d",dizi[i]);
	}
	 
	max=min=dizi[0];
	
	for(i=1; i<10; i++)
	{
		if(dizi[i]>max)
		{
			max=dizi[i];
		}
		if(dizi[i]<min)
		{
			min=dizi[i];
		}
	}
	
	printf("\nDizinin maximum degeri: %d\n",max);
	printf("Dizinin miniimum degeri: %d\n",min);
	return 0;
}
