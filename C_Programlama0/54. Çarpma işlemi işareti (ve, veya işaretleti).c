// kullan�c� taraf�ndan girilen iki tam say�n�n �arp�m�n�n i�aretini, say�lar� �arpmadan bulan bir program yaz�n�z.
// && ve || i�aretleini kullann
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
