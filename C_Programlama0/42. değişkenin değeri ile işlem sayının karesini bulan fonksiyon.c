// de�i�kenin de�eri ile i�lem say�n�n karesini bulan fonksiyon 
#include<stdio.h>

int carre(int n){
	int sonuc;
	sonuc=n*n;
	return sonuc;	//return kullan�lmas� gerek
}
int main(){
	int x,karesi;
	printf("karesinin alinmasini istediginiz sayiyi giriniz: ");
	scanf("%d",&x);
	karesi=carre(x);
	printf("girdiginiz sayinin karesi: %d",karesi);

	return 0;
}

