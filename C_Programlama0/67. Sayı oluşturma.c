//Say� olu�turma
//Tek haneli �� say�y� al�p �� basamakl� say� olu�tur
#include<stdio.h>
int main(){
	int x,y,z;
	printf("Yuzler basamagi: ");
	scanf("%d",&x);
	printf("Onlar basamagi: ");
	scanf("%d",&y);
	printf("Birler basamagi: ");
	scanf("%d",&z);
	int sayi_total=100*x+10*y+z;
	printf("sayi: %d",sayi_total);
	return 0;
}
