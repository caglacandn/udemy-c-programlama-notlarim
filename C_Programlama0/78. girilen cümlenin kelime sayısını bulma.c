#include <stdio.h>
//girilen c�mlenin kelime say�s�n� bulma
int main(){
	
	char cumle[100];//max 100 karakter
	int i=0;
	int sayac=0;
	
	printf("lutfen bir cumle giriniz: ");
	gets(cumle);  //scanf bo�lu�a kadar de�er al�r
	
	while(cumle[i]){
		if(cumle[i]==32){ //32 spacein asc�� numaras�
			sayac++;
		}
		i++;
	}
	printf("Girilen cumledeki kelime sayisi: %d",sayac+1);
	return 0;
}

