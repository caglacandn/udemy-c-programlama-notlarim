//girilen cumleyi alt alta bast�rma
#include<stdio.h>

int main(){
	
	char cumle[100];
	int i=0;
	
	printf("lutfen bir cumle giriniz: ");
	gets(cumle);
	
	for(i=0; cumle[i];i++ ){ // for da ko�ul ifadesinde cumle[i] son karaktere kadar git demek
		//  \0 g�rene kadar giden for d�ng�s�
		printf("%c\n",cumle[i]);
	}
	return 0;
}
