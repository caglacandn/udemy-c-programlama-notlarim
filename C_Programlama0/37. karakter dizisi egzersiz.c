#include <stdio.h>
#include <string.h>
// iki boyutlu bir dizi oluþturun
//dizininn elemanlarý: bir, iki, uc, dort ve bes olsun
//dizinin 4. elemanýnýn 3. karakterini ekrana bastýrýn
int main(){
	
	char dizi[100][100]={{'b','i','r','\0'}, "iki", "uc", "dort", "bes"};
	printf("dizimin 4. elemani: %s\n",dizi[3]);
	printf("dizimin 4. elemaninin 3. karakteri: %c",dizi[3][2]); // %c kullanman gerekiyor!!!
	
	return 0;
}
