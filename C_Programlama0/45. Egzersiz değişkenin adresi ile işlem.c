// Egzersiz
/*
Ayn� soruyu bir de de�i�kenin adresiyle i�lem yaparak ��z�n�z. 
Bu durumda fonksiyonun ba�l��� void ustunu_al(int x, int y, int *r) �eklinde olmal�d�r.
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
