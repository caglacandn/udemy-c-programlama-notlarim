#include <stdio.h>
#include <string.h>

//struct icindeki verilere erismek ve degistirmek


struct ogrenci{
	char ad[10];
	char soyad[10];
	int yas;
};

int main(){
	
	struct ogrenci can;
	strcpy(can.ad,"Can");
	strcpy(can.soyad,"Boz");
	can.yas=27;
	// struct ogrenci can={"can","boz",27};
	
	printf("%s\t%s\t%d",can.ad,can.soyad,can.yas);
	return 0;
}
