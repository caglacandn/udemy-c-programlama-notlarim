//klavyeden girilen kelimenin tersten okundu�unda da ayn� olup olmad���n� 
//(pallindrom) kontrol eden C program�n� yaz�n�z. kabak gibi
#include <stdio.h>
int main(){
	
	char cumle[100];
	char *p1;
	char *p2;
	int kontrol =1;
	printf("Lutfen maksimum 100 karakterli bi cumle giriniz: ");
	gets(cumle);
	for(p2=cumle;*p2;p2++); //*p2 \0'i g�rene kadar gider
	
	p2--;
	for(p1=cumle; kontrol && p1<p2; p1++,p2--)
	{
		if (*p1 != *p2)
		{
			kontrol=0;
		}
	}
	if(kontrol)
	{
		printf("Girilen %s bir palendromdur",cumle);
	}
	else
	{
		printf("Girilen %s bir palendrom degildir", cumle);
	}
	return 0;
}
