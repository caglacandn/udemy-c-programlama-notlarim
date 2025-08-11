#include<stdio.h>
/*
Kullanici tarafindan bolunun ve bolen degerleri girilere bolum islemi yapilmak istenmektedir.
Buna göre asagida verilen prototipi kullanarak bolum ve kalanin elde edilmesini saglayan c programini 
yaziniz.
*/

void bolme_islemi(int bolunen, int bolen)
{
	int kalan,bolum;
	kalan=bolunen%bolen;
	bolum=bolunen/bolen;
	printf("kalan: %d\nbolum: %d",kalan,bolum);
}


int main(){
	int bolunen, bolen;
	printf("Lutfen bolunen sayiyi giriniz: ");
	scanf("%d", &bolunen);
	
	printf("Lutfen bolen sayiyi giriniz: ");
	scanf("%d", &bolen);
	
	bolme_islemi(bolunen, bolen);
	
	return 0;
}
