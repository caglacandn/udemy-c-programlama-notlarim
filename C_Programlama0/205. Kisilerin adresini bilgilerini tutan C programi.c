//Adres Defteri
/*
Adres defteri adinda bir yapi tanimlayiniz. Tutulacak bilgiler ad, soyad, tel, adres, posta kodu seklindedir.
Buna göre n adet kisinin bilgisini bir yapida tutan C programini yaziniz.
*/
#include<stdio.h>

typedef struct adres_defteri{
	char Ad[100];
	char Soyad[100];
	char TelNo[20];
	char Adres[200];
	char PostaKodu[6];
}AdresDefteri;

int main(){
	
	int N;
	int i;
	char satir;
	printf("Kac adet kayit tutulacak: ");
	scanf("%d",&N);
	scanf("%c",&satir);
	
	AdresDefteri iletisim[N];
	
	for(i=0; i<N; i++)
	{
		printf("Adi giriniz: \n");
		gets(iletisim[i].Ad);
		
		printf("Soyadi giriniz: \n");
		gets(iletisim[i].Soyad);
		
		printf("Tel no giriniz: \n");
		gets(iletisim[i].TelNo);
		
		printf("Adresi giriniz: \n");
		gets(iletisim[i].Adres);
		
		printf("Posta kodu giriniz: \n");
		gets(iletisim[i].PostaKodu);
	}
	
	printf("\nADI\tSOYADI\tTELEFON\t\t\tADRES\t\tPOSTA KODU\n");
	printf("-------------------------------------------------------------\n");
	
	for(i=0; i<N; i++)
	{
		printf("%s\t%s\t%s\t\t%s\t%s\n",iletisim[i].Ad,iletisim[i].Soyad,iletisim[i].TelNo,iletisim[i].Adres,iletisim[i].PostaKodu);
	}
	
	return 0;
}
