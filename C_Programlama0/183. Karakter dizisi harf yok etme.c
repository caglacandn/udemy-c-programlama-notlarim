#include<stdio.h>
/*
Kullanicidan bir karakter dizisi girmesini isteyin.(gets)
Girdiginiz karakter dizisinden istediginiz bir harfin kaldirilmasini isteyin(ornek a)
Istediginiz karakter kaldirildiktan sonra dizinin son halini ekrana bastiran bir C programi yaziniz.
Ornek program
Bir karakter dizisi giriniz: 
Can Boz
Kaldirmak istediginiz karakteri giriniz: c
Karakter dizisinin son hali: "an boz" 
*/
#include <string.h>
int main()
{
	char dizi[100];
	char eleme;
	char *pointer;
	
	printf("Lutfen bir karakter dizisi girin:\n");
	gets(dizi);
	printf("Karakter dizisinden cikarmak istediginiz karakter nedir: ");
	scanf(" %c",&eleme);
	
	for(pointer=dizi; *pointer; pointer++){               

        if(*pointer==eleme){
	        strcpy(pointer,pointer+1);
	
	        pointer--;

        }

   }
	printf("Eleme yapildiktan sonra karakter dizimizin son hali:\n%s",dizi);
	return 0;
}
