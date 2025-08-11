#include <stdio.h>
/*
Kullanicidan integer tipindeki bir dizinin degerlerini girmesini isteyin.
2 pointer kullanarak girdiginiz dizi elemanlarinin bastan sona yerini degistiren bir C programi yaziniz.
Program isleyisi asagidaki gibidir.
Dizinin eleman sayisini giriniz: 6
Eleman 0: 5
Eleman 1: 6
Eleman 2: 1
Eleman 3: 9
Eleman 4: 7
Eleman 5: 11
Dizimin normal hali: 5 6 1 9 7 11
Dizimin yerleri degismis hali: 11 7 9 1 6 5
*/

int main()
{
	int dizi[100];
	int *ptr1,*ptr2;
	int n;
	int i=0;
	int gecici;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	for(ptr1=dizi; ptr1<dizi+n; ptr1++)
	{
		printf("Eleman %d: ",i); 
		scanf("%d", ptr1);
		i++;
	}
	printf("Dizimin normal hali:");
	for(ptr1=dizi; ptr1<dizi+n; ptr1++)
	{
		printf("%4d",*ptr1);	
	}
	
	for(ptr1=dizi, ptr2=dizi+n-1; ptr1<ptr2; ptr1++, ptr2--)
	{
		gecici=*ptr1;
		*ptr1=*ptr2;
		*ptr2=gecici;
	}
	printf("\nDizimin yerleri degismis hali:");
	
	for(ptr1=dizi; ptr1<dizi+n; ptr1++)
	{
		printf("%4d",*ptr1);
	}
	return 0;
}
