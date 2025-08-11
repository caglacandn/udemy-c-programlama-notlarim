#include <stdio.h>
#include <stdlib.h>
#include <math.h> // bu kütüphanede calisan fonksiyonlar

int main()
{
    /*
    ceil: kendinden büyük en yakin tam sayiya yuvarlar
	floor: kendinden küçük en yakin tam sayiya yuvarlar
	sqrt: karekök alýr
	pow:  sayinin üssünü alir
	abs: sifira olan uzakligini verir mutlak deger gibi kullanilabilir.
    */
    printf("%f\n",ceil(4.3));	//ekrana 5 yazdirir
    printf("%f\n",floor(4.9));	//ekrana 4 yazdirir
    printf("%.2f\n",sqrt(67));	//8.19 yazdirir
    printf("%f\n",pow(2,4)); 	//önce taban sonra üs yazilir.  2 üssü 4 
    printf("%d\n",abs(15));		//abs(15)=abs(-15)

    return 0;
}
