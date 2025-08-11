//Egzersiz
/* 
int ussunu_al(int x, int y) fonksiyonunu yazýnýz. Fonksiyon x ve y deðerlerini paremetre
olarak alýyor ve x üzeri y deðerini hesaplayýp sonucu döndürüyor. x=4 ve y=5 olduðunda
sonuç olarak 1024 döndürmesi gerekiyor ve sonucu 4 üzeri 5 = 1024 þeklinde ekrana yazdýrýnýz. 
*/
#include <stdio.h>
int ussunu_al(int a, int b){
	int i,sonuc=1;
	for(i=0; i<b; i++){
		sonuc=sonuc*a;
	}
	return sonuc;
}

int main(){
	int x=4, y=5, cevap;
	cevap=ussunu_al(x,y);
	printf("4 uzeri 5 = %d", cevap);
	
	return 0;
}
