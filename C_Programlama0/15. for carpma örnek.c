#include <stdio.h>
//1'den girece�imiz say�ya kadar olan say�lar�n �arp�m�
int main(){
	
	int i;
	int carpim=1;
	for(i=1;i<5;i++){
		carpim=carpim*i;
	}
	printf("1'den %d'e kadar olan sayilarin carpimi: %d",i,carpim);
	return 0;
}
