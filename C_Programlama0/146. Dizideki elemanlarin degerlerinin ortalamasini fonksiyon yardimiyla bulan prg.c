#include<stdio.h>
/*
Kullanici tarafindan N elemanli bir diziye alinan tamsayilarin ortalamasinin bulunmasini saglayan fonksiyon prototipi
asagida verilmistir. Buna göre asagidaki prototipi kullanarak C programini yaziniz.
ortalama(int *dizi, int boyut)
*/
//int *dizim=int dizi[];

float ortalama(int *dizim, int boyut)
{
	int i;
	int toplam=0;	
	for(i=0; i<boyut;i++)
	{
		toplam +=dizim[i]; //toplam=toplam+dizim[i];
		
	}
	
	return (float)toplam/boyut;
} 

int main(){
	int n;
	int i;
	float ort;
	printf("Kac adet eleman girilecek: ");
	scanf("%d", &n);
	int dizi[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d", &dizi[i]);
		
	}
	
	ort=ortalama(dizi, n);
	printf("girdiginiz sayilarin ortalamasi: %f",ort);
	return 0;
}
