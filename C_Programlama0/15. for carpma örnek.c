#include <stdio.h>
//1'den gireceðimiz sayýya kadar olan sayýlarýn çarpýmý
int main(){
	
	int i;
	int carpim=1;
	for(i=1;i<5;i++){
		carpim=carpim*i;
	}
	printf("1'den %d'e kadar olan sayilarin carpimi: %d",i,carpim);
	return 0;
}
