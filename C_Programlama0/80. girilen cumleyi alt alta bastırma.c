//girilen cumleyi alt alta bastýrma
#include<stdio.h>

int main(){
	
	char cumle[100];
	int i=0;
	
	printf("lutfen bir cumle giriniz: ");
	gets(cumle);
	
	for(i=0; cumle[i];i++ ){ // for da koþul ifadesinde cumle[i] son karaktere kadar git demek
		//  \0 görene kadar giden for döngüsü
		printf("%c\n",cumle[i]);
	}
	return 0;
}
