#include <stdio.h>
#include <string.h>
// strcpy fonksiyonu: bir dizideki karakteri baþka bir diziye atar
int main(){
	
	char dizi1[]="Benim adim Cagla.";
	char dizi2[100];
	
	strcpy(dizi2,dizi1);//dizi1 i dizi2 ye kopyalar
	
	printf("dizi2'ye atanan: %s",dizi2);
	
	return 0;
}
