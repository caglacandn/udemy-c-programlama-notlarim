/*
Asagida verilen struct ve union ýn bellekte ne kadar alan kapladigini bulan C programini yaziniz.

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
- Bir struct'ýn hafýzada kapladýðý alan, üyelerinin hafýzada kapladýðý alanlarýnýn toplamýna eþit olmayabilir. Bu durum yapý dolgusu (struct padding) diye adlandýrýlan, derleyici (compiler) tarafýndan yapýlan bir iþlemden kaynaklý.
    -  Veriler her zaman 4 byte'lýk paketler þeklinde hizalanýr. (Ýþlemcinin mimarýsý ile alakalý bir durum). Bu hizalamadan dolayý struct üyelerinin arasýna boþ adresler girebilir.
    - Bu boþ adreslerden dolayý da struct'ýn üyelerinin hafýzada kapladýðý alanlarýn toplamý, struct'ýn hafýzada kapladýðý alana eþit olmayabilir.
   

Örneði incelersek:

    - Öncelikle main'de struct kontrol1 semih adlý bir deðiþken oluþturalým:

struct kontrol1 semih;
	
    printf("semih =%d byte ",sizeof(semih));
    printf ( "x'in adresi     = %u ", &semih.x );
    printf ( "y'in adresi       = %u ", &semih.y );
    printf ( "z'in adresi      = %u ", &semih.z );
   - Burada üyelerin adreslerine bakarsak aþaðýdaki bir sonuç görürüz:
             x'in adresi:   6487568
             y'nin adresi: 6487572  Char 1 byte yer kaplamasýna karþýn z ile arasýnda 4 byte var.
             z'nin adresi: 6487576

Çünkü;
   
   - Kendisinden önce gelen x 4 byte, yani 1 paket
   - Y'yi bu pakete ekleyemez çünkü 1.paket dolu (x 4 byte)
   - Kendisinden sonra gelen z 4 byte. Bunu da y'nin olduðu pakete ekleyemez çünkü toplamlarý 5 byte eder.
   - Bu yüzden y'nin olduðu pakete 3 byte'lýk boþ adres koyuyor. Ve bunu da 2.paket olarak yolluyor.
   - Eðer y'den sonra t adýnda baþka bir char tipinde deðiþken olsaydý; y (1 byte) t (1 byte) ve 2 byte boþ adres ile 2.paketi gönderecekti.
   - Daha sonra z'yi de 4 byte'lýk 3.paket olarak yolluyor.

Dikkat;

    - C burada strcut içindeki üyelerin sýralamasýna önem veriyor. Yani ayný deðiþkenleri farklý þekilde sýralayarak hafýzada farklý alan kaplamak mümkün.
   - Bu yüzden dolgu miktarýný en aza indirmek için, yapý üyeleri azalan bir sýrada sýralanýrsa, minunum alaný kaplar.

Not: Ben de sizler gibi bu kursu alan birisiyim. Bu bilgilere internette araþtýrma yaparak ulaþtým. Bu yüzden yanlýþ anlamýþ ya da aktarmýþ olabilirim. Bu yüzden bunlarýn doðruluðunu kabul etmeden baþka yerlere de bakýn derim :)
- Bir de galiba burada yaþanan durumlar compiler'a ve 32-bit 64-bit olup olmamasýna göre çeþitlilik gösterebilirmiþ. (Bundan emin deðilim)
*/
