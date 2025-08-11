#include <stdio.h>
//NxN eleman içeren bir program yazýn
int main(){
	int matris[10][10]; //diyagonel matris 
	int i,j;
	for(i=0;i<10;i++){
		for(j=0; j<10;j++){
			
			if(i==j){
				matris[i][j]=1;
			}
			else {
				matris[i][j]=0;
			}
		}
	}
	
	for(i=0;i<10;i++){
		for(j=0; j<10;j++){
		printf("%4d",matris[i][j]);  // %4d 4 boþluk býraktýrýr
		}
		printf("\n");
	}	
	return 0;
}
