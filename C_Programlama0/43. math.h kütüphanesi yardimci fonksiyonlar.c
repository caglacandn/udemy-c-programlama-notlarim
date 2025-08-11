#include <stdio.h>
#include <stdlib.h>
#include <math.h> // bu k�t�phanede calisan fonksiyonlar

int main()
{
    /*
    ceil: kendinden b�y�k en yakin tam sayiya yuvarlar
	floor: kendinden k���k en yakin tam sayiya yuvarlar
	sqrt: karek�k al�r
	pow:  sayinin �ss�n� alir
	abs: sifira olan uzakligini verir mutlak deger gibi kullanilabilir.
    */
    printf("%f\n",ceil(4.3));	//ekrana 5 yazdirir
    printf("%f\n",floor(4.9));	//ekrana 4 yazdirir
    printf("%.2f\n",sqrt(67));	//8.19 yazdirir
    printf("%f\n",pow(2,4)); 	//�nce taban sonra �s yazilir.  2 �ss� 4 
    printf("%d\n",abs(15));		//abs(15)=abs(-15)

    return 0;
}
