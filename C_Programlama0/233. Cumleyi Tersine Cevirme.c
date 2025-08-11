/*
Klavyeden girilen bir cumlenin tersten okunusunun tersten okunusunun elde edilmesini saglayan C programini
recursive fonksiyonla yap.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void terscumle(char *metin, int boy)
{
	if(boy==0)
	{
		printf("%c",metin[boy]);
	}
	else
	{
		printf("%c",metin[boy]);
		terscumle(metin, boy-1);
	}
}

int main()
{
	char cumle[100];
	printf("Lutfen bir cumle giriniz: \n");
	gets(cumle);	
	//printf("%d",strlen(cumle));
	
	terscumle(cumle, strlen(cumle)-1);
	
	return 0;
}
