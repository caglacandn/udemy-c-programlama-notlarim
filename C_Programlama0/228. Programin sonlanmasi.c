/*
Klavyeden 0 degeri girilinceye kadar kullanicidan surekli olarak sayi girmesini isteyen
C programini recursive fonksiyon yardimiyla yaziniz.
*/
#include<stdio.h>
#include<stdlib.h> //exit(0) icin bu kutuphane gerek
void sayi_iste()
{
	int sayi;
	printf("Lutfen bir sayi giriniz: \n");
	scanf("%d",&sayi);
	if(sayi == 0)
	{
		exit(0);
	}
	else
	{
		sayi_iste();
	}
}

int main()
{
	sayi_iste();
	
	
	return 0;
}
