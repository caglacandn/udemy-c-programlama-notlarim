/*
Asagida verilen struct ve union �n bellekte ne kadar alan kapladigini bulan C programini yaziniz.

struct kontrol{
	int x;
	char y;
	long z;
};

union kontrol2{
	int a;
	char b;
	long c;
};

*/

#include<stdio.h>

struct kontrol{
	int x;
	char y;
	long z;
};

union kontrol2{
	int a;
	char b;
	long c;
};

int main()
{
	
  	printf("struct = %d byte\n",sizeof(struct kontrol));
  	printf("union = %d byte\n",sizeof(union kontrol2));
	
	
	return 0;
}
/*
- Bir struct'�n haf�zada kaplad��� alan, �yelerinin haf�zada kaplad��� alanlar�n�n toplam�na e�it olmayabilir. Bu durum yap� dolgusu (struct padding) diye adland�r�lan, derleyici (compiler) taraf�ndan yap�lan bir i�lemden kaynakl�.
    -  Veriler her zaman 4 byte'l�k paketler �eklinde hizalan�r. (��lemcinin mimar�s� ile alakal� bir durum). Bu hizalamadan dolay� struct �yelerinin aras�na bo� adresler girebilir.
    - Bu bo� adreslerden dolay� da struct'�n �yelerinin haf�zada kaplad��� alanlar�n toplam�, struct'�n haf�zada kaplad��� alana e�it olmayabilir.
   

�rne�i incelersek:

    - �ncelikle main'de struct kontrol1 semih adl� bir de�i�ken olu�tural�m:

struct kontrol1 semih;
	
    printf("semih =%d byte ",sizeof(semih));
    printf ( "x'in adresi     = %u ", &semih.x );
    printf ( "y'in adresi       = %u ", &semih.y );
    printf ( "z'in adresi      = %u ", &semih.z );
   - Burada �yelerin adreslerine bakarsak a�a��daki bir sonu� g�r�r�z:
             x'in adresi:   6487568
             y'nin adresi: 6487572  Char 1 byte yer kaplamas�na kar��n z ile aras�nda 4 byte var.
             z'nin adresi: 6487576

��nk�;
   
   - Kendisinden �nce gelen x 4 byte, yani 1 paket
   - Y'yi bu pakete ekleyemez ��nk� 1.paket dolu (x 4 byte)
   - Kendisinden sonra gelen z 4 byte. Bunu da y'nin oldu�u pakete ekleyemez ��nk� toplamlar� 5 byte eder.
   - Bu y�zden y'nin oldu�u pakete 3 byte'l�k bo� adres koyuyor. Ve bunu da 2.paket olarak yolluyor.
   - E�er y'den sonra t ad�nda ba�ka bir char tipinde de�i�ken olsayd�; y (1 byte) t (1 byte) ve 2 byte bo� adres ile 2.paketi g�nderecekti.
   - Daha sonra z'yi de 4 byte'l�k 3.paket olarak yolluyor.

Dikkat;

    - C burada strcut i�indeki �yelerin s�ralamas�na �nem veriyor. Yani ayn� de�i�kenleri farkl� �ekilde s�ralayarak haf�zada farkl� alan kaplamak m�mk�n.
   - Bu y�zden dolgu miktar�n� en aza indirmek i�in, yap� �yeleri azalan bir s�rada s�ralan�rsa, minunum alan� kaplar.

Not: Ben de sizler gibi bu kursu alan birisiyim. Bu bilgilere internette ara�t�rma yaparak ula�t�m. Bu y�zden yanl�� anlam�� ya da aktarm�� olabilirim. Bu y�zden bunlar�n do�rulu�unu kabul etmeden ba�ka yerlere de bak�n derim :)
- Bir de galiba burada ya�anan durumlar compiler'a ve 32-bit 64-bit olup olmamas�na g�re �e�itlilik g�sterebilirmi�. (Bundan emin de�ilim)
*/
