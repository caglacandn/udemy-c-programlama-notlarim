/*
KLavyeden girilen bir cumlenin kac karakterden olustugunu bulan c programini recursive fonksiyon yardimiyla bulun.
*/

#include<stdio.h>

int karakter(char *s)
{
	if(*s=='\0')
	{
		return 0;
	}
	else
	{
		return (1+karakter(s+1));
	}
	
}

int main()
{
	char cumle[100];
	printf("Lutfen bir cumle giriniz: \n");
	gets(cumle);
	printf("Karakter sayisi = %d", karakter(cumle));
	
	
	
	return 0;
}
