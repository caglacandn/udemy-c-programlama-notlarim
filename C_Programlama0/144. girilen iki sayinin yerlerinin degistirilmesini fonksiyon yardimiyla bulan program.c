#include<stdio.h>
/*
Kullanici tarafindan girilen tamsayilar x ve y degiskenlerinde tutulmaktadir. x ve y degiskenlerinde 
yer alan degerlerin yerlerinin degistirilmesini saglayan fonksiyon prototipini asagida verilmistir.
void yerddegistir(int x, int y)
*/
void yerdegistir(int x, int y)
{
	int gecici;
	gecici=x;
	x=y;
	y=gecici;
	printf("x: %d\ty: %d",x,y);
	
}

int main(){
	
	int x,y;
	printf("Lutfen iki adet sayi giriniz: ");
	scanf("%d %d",&x,&y);
	printf("x: %d\ty: %d\n",x,y);
	yerdegistir(x,y);
	
	return 0;
}
