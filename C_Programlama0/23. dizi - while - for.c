#include <stdio.h>
//klavyeden girilen 4 say�n�n toplam�n� bulan bir C program�n� yaz�n�z (for ve while kullanarak)
int main(){ 
	int dizi[4];
	int toplam=0;
	int i=0;
	
	while(i<4){
		printf("lutfen bir tamsayi giriniz:");
		scanf("%d",&dizi[i]);
		i++;
	}
	for(i=0;i<4;i++){
		toplam = toplam + dizi[i];
	}
	
	printf("toplam degeri= %d", toplam);
	return 0;
}
