#include <stdio.h>

/*
satirsayisi=4

*******
 *****		+      +
  ***		++	  ++
   *		+++  +++
   *		++++++++
  ***		+++  +++
 *****		++    ++
*******		+      +

*/

void kelebek(int satir, char karakter)
{	
	//ust ucgen
	int i,j;
	int bosluk_sayisi=0;
	for(i=1; i<=satir; i++)
	{
		for(j=1; j<=bosluk_sayisi; j++)
		{
			printf(" ");
		}
		bosluk_sayisi++;
		
		for(j=0; j<2*(satir-i)+1; j++)
		{
			printf("%c",karakter);
		}
		printf("\n");
	}
	bosluk_sayisi-=1;
	
	//alt ucgen
	for(i=1; i<=satir; i++)
	{
		for(j=1; j<=bosluk_sayisi; j++)
		{
			printf(" ");
		}
		bosluk_sayisi--;
		
		for(j=0; j<2*i-1; j++)
		{
			printf("%c",karakter);
		}		
		printf("\n");
	}	
	
}

int main(){
	
	int satir;
	char karakter;
	
	printf("Kenar sayisini giriniz: ");
	scanf("%d", &satir);
	
	printf("Lutfen basilacak karakteri giriniz: ");
	scanf(" %c",&karakter);
	
	printf("\n");
	
	kelebek(satir,karakter);
	
	return 0;
}
