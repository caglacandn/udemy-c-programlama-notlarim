#include <stdio.h>
/*
Pointer kullanarak iki sayinin yerini degistirip sayilari yer degistirmeden once 
ve yer degistirdikten sonra console a bastirilmasi
*/

void yer_degistir(int *sayi1, int *sayi2)
{
	int gecici;
	gecici=*sayi1;
	*sayi1=*sayi2;
	*sayi2=gecici;
	/*
	printf("\n\nSayilarim yer degistirdikten sonra: \n");
	printf("Ilk sayim = %d\n",*sayi1);
	printf("Ikinci sayim = %d",*sayi2);
	*/
}

int main(){
	int sayi1,sayi2;
	
	printf("Lutfen iki adet sayi giriniz: ");
	scanf("%d %d", &sayi1,&sayi2);
	
	printf("\nSayilarim yer degistirmeden once: \n");
	printf("Ilk sayim = %d\n",sayi1);
	printf("Ikinci sayim = %d",sayi2);
	
	yer_degistir(&sayi1,&sayi2);
	
	printf("\n\nSayilarim yer degistirdikten sonra: \n");
	printf("Ilk sayim = %d\n",sayi1);
	printf("Ikinci sayim = %d",sayi2);
	
	return 0;
}
