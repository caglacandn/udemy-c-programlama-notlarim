#include <stdio.h>
#include <string.h>
//strlen fonksiyonu:karakter dizisinin boyunu bulmay� sa�lar
int main(){
	char dizi[]="Aral�k";
	printf("karakter dizisinin boyu: %d \n", strlen(dizi)); // \0 � saym�yor ekrana 6 yazd�r�r
	
	printf("karakter dizisinin boyu: %d ", sizeof(dizi));	// \0 � da sayar ekrana 7 yazd�r�r
	
	return 0;
}

