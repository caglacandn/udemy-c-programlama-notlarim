//Egzersiz
/* 
int ussunu_al(int x, int y) fonksiyonunu yaz�n�z. Fonksiyon x ve y de�erlerini paremetre
olarak al�yor ve x �zeri y de�erini hesaplay�p sonucu d�nd�r�yor. x=4 ve y=5 oldu�unda
sonu� olarak 1024 d�nd�rmesi gerekiyor ve sonucu 4 �zeri 5 = 1024 �eklinde ekrana yazd�r�n�z. 
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
