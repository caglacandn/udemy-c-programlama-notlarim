

#include<stdio.h>
#include<stdlib.h>


int main()
{
	char *metin;
	metin=(char *)calloc(100, sizeof(metin));
	
	printf("Lutfen bir cumle giriniz: \n");
	gets(metin);
	
	printf("Girdiginiz cumle: %s",metin);
	
	return 0;
}
