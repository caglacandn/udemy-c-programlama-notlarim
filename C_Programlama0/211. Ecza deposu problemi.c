/*
Bir eczane stoklarinda bulunan 100 farkli ilaca ait bilgileri saklamak istemektedir.
Bunun icin asagidaki yapi kullanilmaktadir. Buna gore verilen yapiyi kullanarak 
100 adet ilac bilgisini tutan ve ilac adedi 20 ve altinda olan ilacalrin adlarini bulmaya
yarayan c Programini yaziniz.

typedef struct{
	char ilac_adi[50];
	int adet;
	int fiyat;
}data;
*/
#include <stdio.h>
#define N 5
typedef struct{
	char ilac_adi[50];
	int adet;
	int fiyat;
}data;

int main(){
	
	data veriler[N];
	int i;
	
	for(i=0; i<N; i++)
	{
		printf("%d. ilac icin:\n",i+1);
		printf("Lutfen ilac adini giriniz:\n");
		scanf("%s", veriler[i].ilac_adi);
		/*
		fflush(stdin);  // ONEMLII SCANF ILE ILGILI HATA ICIN BELLEK TEMIZLER
		printf("Lutfen ilac adini giriniz:\n");
		gets(veriler[i].ilac_adi);
		*/
		printf("Lutfen ilac adedini giriniz:\n");
		scanf("%d",&veriler[i].adet);
		
		printf("Lutfen ilac fiyatini giriniz:\n");
		scanf("%d",&veriler[i].fiyat);
	}
	
	printf("ILAC ADI:\n");
	printf("----------\n");
	
	for(i=0; i<N; i++)
	{
		if(veriler[i].adet<=20)
		{
			printf("%s\n",veriler[i].ilac_adi);
		}
	}
	
	return 0;
}
