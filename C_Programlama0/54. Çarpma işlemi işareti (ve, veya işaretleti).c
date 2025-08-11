// kullanýcý tarafýndan girilen iki tam sayýnýn çarpýmýnýn iþaretini, sayýlarý çarpmadan bulan bir program yazýnýz.
// && ve || iþaretleini kullann
#include <stdio.h>
int main(){
	int a, b;
	printf("Lutfen iki tam sayi giriniz: ");
	scanf("%d%d",&a,&b);
	
	if(((a<0) && (b>0) ) || ((a>0) && (b<0)) ){
		printf("sign(%d * %d) = -1 ", a, b);
	}
	else if (((a<0) && (b<0) ) || ((a>0) && (b>0)) ){
		printf("sign(%d * %d) = +1 ", a, b);
	}
	else printf("sign(%d * %d) = 0 ", a, b);
	return 0;
}
