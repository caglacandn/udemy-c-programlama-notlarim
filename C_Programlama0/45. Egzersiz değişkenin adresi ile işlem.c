// Egzersiz
/*
Ayný soruyu bir de deðiþkenin adresiyle iþlem yaparak çözünüz. 
Bu durumda fonksiyonun baþlýðý void ustunu_al(int x, int y, int *r) þeklinde olmalýdýr.
*/
#include <stdio.h>
void ustunu_al(int a, int b, int *c ){
	int i;
	*c = 1;
	for(i=0;i<b;i++){
		*c=*c*a;
	}
}
int main(){
	int x=4, y=5, sonuc;
	ustunu_al(x,y,&sonuc);
	printf("4 uzeri 5 = %d", sonuc);
	return 0;
} 
