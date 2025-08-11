/*
union hesapla{
	int cevre;
	int alan;
};

Yukaridaki verilen union i kullanarak bir dairenin alanini ve cevresini hesaplayan C programini yaziniz.
Pi sayisini 3 aliniz.
*/
#include<stdio.h>
#define Pi 3
union hesapla{
	int cevre;
	int alan;
};

int main(){
	int yaricap;
	union hesapla bul;
	
	printf("Lutfen yaricapi giriniz: ");
	scanf("%d",&yaricap);
	
	bul.cevre = 2*Pi*yaricap;
	
	printf("Cevresi = %d\n", bul.cevre);
	
	bul.alan = Pi* yaricap* yaricap;
	
	printf("Alani = %d", bul.alan);
	
	return 0;
}
