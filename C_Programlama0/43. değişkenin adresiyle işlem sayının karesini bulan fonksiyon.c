//de�i�kenin adresiyle i�lem say�n�n karesini bulan fonksiyon
#include <stdio.h>
void carre(int n, int* res){
	*res=n*n;		//&r : rnin adresi		*res: r'nin adresinin de�eri
} 	//return kullan�lmas�na gerek  yok o y�zden void tipinde

int main(){
	int x,r;
	printf("karesinin alinmasini istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	
	carre(x, &r);
	printf("girdiginiz sayinin karesi: %d",r);
	
	return 0;
}
