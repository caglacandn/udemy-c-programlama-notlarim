// while d�ng�s� kullanarak verilen say�y� bir azaltt�rarak ekrana yazd�r�n
#include<stdio.h>
int main(){
	int a;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &a);
	while(a != 1){
		printf("%2d", a); //%2d 2 bo�luk koyar
		a=a-1;
	}
	
	
	return 0;
}
