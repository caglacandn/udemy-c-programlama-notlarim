#include<stdio.h>
/*
Kullanicidan 1 ile 7 arasinda bir deger girmesini isteyin
Bu degerler haftanin gunlerini belirtiyor
7 adet karakter dizisi yani haftaninin gunlerini tutan bir pointer yaziniz
Kullanici 1 ile 7 arasinda bir deger girmez ise tekrar deger girmesinş isteyin

Lutfen 1 ve 7 arasinda bir deger girerek haftanin gunlerini bastirin: 5
5 numarali haftaninn gunu: cuma
*/

int main()
{
	//char gun[7][50] == char *gun[7]  * oldugundan [50]yi kullanmiyoruz!!!
	char *gun[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	int i;
	do
	{
		printf("Lutfen 1 ve 7 arasinda bir deger giriniz:");
		scanf("%d",&i);	
	} while(i<=0 || i>7); //whiledaki kondisyonu sagliyorsa do ya girer.
	
	printf("%d numarali haftanin gunu %s", i, gun[i-1]);
	
	return 0;
}
