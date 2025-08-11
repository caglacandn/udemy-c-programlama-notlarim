#include<stdio.h>
/*
Integer tipinde A ve B dizisinin eleman sayisini kullanicidan isteyen daha sonra 
kullanicidan kullanicidan elemanlari girmesini isteyen bir program yaziniz.
A dizisini ekrana bastirin
B dizisini ekrana bastirin
B dizisini A dizisinin sonuna ekleyin

Ornek program ciktisi asagidaki gibidir.

Birinci dizinin eleman sayisi: 3
Eleman 0: 2
Eleman 1: 5
Eleman 2: 3
Ikinci dizinin eleman sayisi: 6
Eleman 0: 1
Eleman 1: 5
Eleman 2: 2
Eleman 3: 4
Eleman 4: 9
Eleman 5: 5

Dizi A: 2 5 3
Dizi B: 1 5 2 4 9 5
B'nin A'nin sonuna eklenmis hali:
2 5 3 1 5 2 4 9 5
*/
int main()
{
	int can[50],canan[50];
	int *sayi1,*sayi2;
	int n1,n2;
	int i;
	
	printf("Birinci dizinin eleman sayisi(max50):");
	scanf("%d", &n1 );
	
	for(sayi1=can;sayi1<can+n1;sayi1++)
	{
		printf("Eleman %d: ",sayi1-can);
		scanf("%d",sayi1);
	}
	printf("Ikinci dizinin eleman sayisi(max50):");
	scanf("%d", &n2 );
	
	for(sayi2=canan; sayi2<canan+n2;sayi2++)
	{
		printf("Eleman %d: ",sayi2-canan);
		scanf("%d",sayi2);
	}
	printf("\nDizi A:");
	for(i=0;i<n1;i++)
	{
		printf("%4d",*(can+i));
	}
	printf("\nDizi B:");
	for(i=0;i<n2;i++)
	{
		printf("%4d",*(canan+i));
	}
	
	
	for(sayi1=can+n1, sayi2=canan; sayi2<canan+n2; sayi1++,sayi2++)
	{
		*sayi1=*sayi2;
	}
	
	printf("\n\nB'nin A'nin sonuna eklenmis hali:\n");
	
	for(i=0; i<n1+n2; i++)
	{
		printf("%4d",*(can+i));
	}
	return 0;
}
