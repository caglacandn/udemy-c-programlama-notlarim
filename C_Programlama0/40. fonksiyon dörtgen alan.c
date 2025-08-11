#include <stdio.h>
int Alan_dortgen(int kenar_a, int kenar_b);

int main(){
 	int alan;
	int k1,k2,sonuc;
	printf("duzgun dortgenin iki kenarini giriniz: \n");
	scanf("%d %d", &k1, &k2);
	sonuc = Alan_dortgen(k1, k2);
	printf("Alan: %d", sonuc);
	return 0;
}
	int alan;
int Alan_dortgen(int kenar_a, int kenar_b){
	alan=kenar_a*kenar_b;
	return alan;
}
	

