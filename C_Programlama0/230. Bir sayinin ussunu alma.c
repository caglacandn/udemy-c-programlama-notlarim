/*
Taban ve us degerleri klavyeden girilmek uzere a^b ifadesinin hesaplatilmasini saglayan
C programini recursive fonksiyon yardimiyla yaziniz.
*/
#include<stdio.h>
int ussu_hesapla(int us, int taban)
{
	int sonuc;
	if(us == 0)
	{
		sonuc=1;
	}
	else
	{
		sonuc = taban*ussu_hesapla(us-1,taban);
	}
	return sonuc;
}

int main(){
	int us,taban;
	printf("Lutfen taban degerini giriniz: ");
	scanf(" %d", &taban);
	printf("Lutfen us degerini giriniz: ");
	scanf(" %d", &us);
	printf("%d ussu %d = %d", taban, us, ussu_hesapla(us,taban));	
	return 0;
}
