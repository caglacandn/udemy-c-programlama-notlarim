/*
Klavyeden girilen iki tamsayinin carpimini bolme sembolu kullanmadan gerceklestiren
C programini recursive fonksiyon yardimiyla yaziniz.
*/
#include<stdio.h>

int bolum(int bolunen, int bolen)
{
	if(bolen==0)
	{
		return 0;
	}
	else if(bolunen-bolen == 0)
	{
		return 1;
	}
	else if(bolunen<bolen)
	{
		return 0;
	}
	else
	{
		return (1+bolum(bolunen-bolen, bolen));
	}
	
}

int main()
{
	int a,b;
	printf("Bolunen sayiyi giriniz: ");
	scanf("%d",&a);
	printf("Lutfen bolen sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("Bolum = %d", bolum(a,b));
	printf("\nKalan = %d", a-(bolum(a,b)*b));
	
	return 0;
}
