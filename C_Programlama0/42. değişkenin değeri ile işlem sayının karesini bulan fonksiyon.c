// deðiþkenin deðeri ile iþlem sayýnýn karesini bulan fonksiyon 
#include<stdio.h>

int carre(int n){
	int sonuc;
	sonuc=n*n;
	return sonuc;	//return kullanýlmasý gerek
}
int main(){
	int x,karesi;
	printf("karesinin alinmasini istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	karesi=carre(x);
	printf("girdiginiz sayinin karesi: %d",karesi);

	return 0;
}

