#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Casting
    
    /*int sayi=9/4;
    printf("%d",sayi);    // ekrana 2 yazdirir
	*/

	/* 
	float sayi = 9/4;   // int sayiyiyi int bölersek int cikar
	printf("%f", sayi);  // ekrana 2.0000000 yazdirir 
	*/ 
	
    float sayi=(float)9/4;  //sonucun cikis tipini degistirmis olduk
    printf("%.3f",sayi);		//2.25 yazdirir

    return 0;
}
