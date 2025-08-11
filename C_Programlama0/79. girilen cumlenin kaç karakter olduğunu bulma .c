//kýlavyeden girilen bir cumlenin kaç karakterden oluþtuðunu strlen() fonksiyonunu kullanmadan bulan C programýný yazýnýz 
#include<stdio.h>
int main(){
	
	char cumle[100];
	int i=0;
	
	printf("lutfen bir cumle giriniz: ");
	gets(cumle);
	
	while(cumle[i]){
		
		i++;
	}
	printf("cumledeki karakter satiri: %d",i);
	
	return 0;
}
