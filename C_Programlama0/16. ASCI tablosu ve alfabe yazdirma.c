#include <stdio.h>

int main(){
	
	printf("%d\t %d\t %d\t\n\n",'a','b','c'); // 97 98 99 yazdirir
	
	//ASCI tablosu ile alfabe yazdirma *********************************************
	int i;
	for(i='a';i<='z';i++){
		printf("%c",i);
	}
	
	printf("\n");
	return 0;
}
