#include <stdio.h>
#include <string.h>
//strlen fonksiyonu:karakter dizisinin boyunu bulmayý saðlar
int main(){
	char dizi[]="Aralýk";
	printf("karakter dizisinin boyu: %d \n", strlen(dizi)); // \0 ý saymýyor ekrana 6 yazdýrýr
	
	printf("karakter dizisinin boyu: %d ", sizeof(dizi));	// \0 ý da sayar ekrana 7 yazdýrýr
	
	return 0;
}

