//k�lavyeden girilen bir cumlenin ka� karakterden olu�tu�unu strlen() fonksiyonunu kullanmadan bulan C program�n� yaz�n�z 
#include<stdio.h>
int main(){
	
	char cumle[100];
	int i=0;
	
	printf("lutfen bir cumle giriniz: ");
	gets(cumle);
	
	while(cumle[i]){
		
		i++;
	}
	printf("cumledeki karakter satiri: %d",i);
	
	return 0;
}
