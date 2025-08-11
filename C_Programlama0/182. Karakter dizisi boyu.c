#include<stdio.h>
/*
kullanicidan bir karakter dizisi girmesini isteyin ve bu girdiginiz karakter dizisinin kac 
karakterden olustugunu ekrana yazdiran bir c programi yaziniz. Bu programi yazarken pointer kullaniniz.
Ornek program
Bir karakter dizisi giriniz:
Can Boz
Girdiginiz karakter dizisi 7 karakterden olusmaktadir. 
*/

int main()
{
	char karakter_dizisi[100];
	char *pointer;
	
	printf("Lutfen bir karakter dizisi giriniz:\n");
	gets(karakter_dizisi);
	
	for(pointer=karakter_dizisi; *pointer; pointer++)
	{
	}
	printf("Girdiginiz karakter dizisi %d karakterden olusmaktadir.", pointer - karakter_dizisi);
	// pointer - karakter_dizisi = 12007 - 12000
	return 0;
}
