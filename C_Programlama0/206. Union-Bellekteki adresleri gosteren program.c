/*
Klavyeden girilen sayilari tutan iki adet degisken icin ayni bellek bolgesini paylasan paylas adinda bir
union tanimlayiniz ve degiskenlerin kullandiklari bellek bolgesinin adreslerini ekrana gosteriniz.
*/
#include<stdio.h>

union paylasim_kontrol{
	int x;
	int y;
}paylas;


int main (){
	int *X, *Y;
	
	X = &paylas.x; 
	
	paylas.x = 100;
	
	printf("Tamsayi(x) = %d\nBellek adresi %X",paylas.x, X);
	
	paylas.y = 200;
	
	Y =&paylas.y;
	printf("\nTamsayi(y) = %d\nBellek adresi %X",paylas.y, Y);
	
	return 0;
}


//%X kullanimi
/*
#include <stdio.h>
int main() {
    int data = 29;
    printf("%x\n", data);    // just print data
    printf("%0x\n", data);   // just print data ('0' on its own has no effect)
    printf("%8x\n", data);   // print in 8 width and pad with blank spaces
    printf("%08x\n", data);  // print in 8 width and pad with 0's
 
    return 0;
}
*/

