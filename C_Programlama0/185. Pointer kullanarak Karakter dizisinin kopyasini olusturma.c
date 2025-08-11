#include<stdio.h>
/*
k,l,b,d,q,i,s,t,e,f,o,r,c,h,x  elemanlarini icerern bir karakter dizisi tanimlayin
2 pointer ve bir for dongusu kullanarak bu dizinin aynisini kopyalayin ve ekrana bastirin
*/
int main()
{
	char dizi[15]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
	char *sayi1;
	char *sayi2;
	char dizi_kopya[15];
	int i;
	sayi2=dizi_kopya;
	
	for(sayi1=dizi; sayi1<dizi+15; sayi1++)
	{
		*sayi2=*sayi1;
		sayi2++;
	}
	printf("\nOrijinal tablo: ");
	for(i=0; i<15; i++)
	{
		printf("%4c",*(dizi+i));
	}
	printf("\nKopya tablo: ");
	for(i=0; i<15; i++)
	{
		printf("%4c",*(dizi_kopya+i));
	}

	
	
	return 0;
}
