/*
Gostericinin Dizi Olarak Kullanimi
Dizilerde aslinda bir gostericidirç Bu diziye gosterici gibi erismek
veya bir gostericiye bir dizi gibi erismek mumkunudr. Diziler, ozel 
bir soz dizimi ve erisimi yontemleri bulunan birer gostericidir.

int a[10];
int *p=(int*)calloc(10, sizeof[int]);

a[3]=5;
p[3]=5;

burada a ile p esdegerdir.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10];
	int *p=(int*)calloc(10, sizeof[int]);
	
	a[3]=5;
	p[3]=5;
	
	return 0;
	
}

