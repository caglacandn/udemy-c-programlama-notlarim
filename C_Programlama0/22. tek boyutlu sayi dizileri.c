#include <stdio.h>
//tek boyutlu dizisi
int main(){
	
	/*
	int can[5]={ 1, 3, 5, 7, 9 };
	printf("dizinin ilk elemani: %d\n", can[0]);
	printf("dizinin son elemani: %d", can[4]);	
	*/
	
	int i;
	int dizi[10];
	
	for(i=0;i<10;i++){
		dizi[i]=2*i;
	}
	for(i=0;i<10;i++){
		printf("%d\n", dizi[i]);
	}
	
	return 0;
}
