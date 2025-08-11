#include <stdio.h>
//NxP eleman içeren 2 matrisin elemanlarýný toplayan bir c programý yazýn. sonucu 3. bir matrise yazdýrýn
int main(){
	int dizi1[3][4]={ {1, 2, 5, 6}, {1, 1, 1, 1}, {5, 3, 9, 0} };
	int dizi2[3][4]={ {3, 3, 3, 3}, {1, 5, 9, 0}, {5, 7, 9, 1} };
	int diziT[3][4];
	int i,j;
	for(i=0; i<3; i++){
		for(j=0;j<4;j++){
			diziT[i][j]=dizi1[i][j]+dizi2[i][j];
		}
	}
	
	for(i=0; i<3; i++){
		for(j=0;j<4;j++){
			printf("%3d",diziT[i][j]);
			
		}
			printf("\n");
	} 
	
	/*  // ekrana nasýl yazdýrdýðýný görmek için deneme
	for(i=0; i<3; i++){
		for(j=0;j<4;j++){
			printf("%3d",dizi1[i][j]);
			
		}
			printf("\n");
	}
		
	*/
	
	
	return 0;
}
