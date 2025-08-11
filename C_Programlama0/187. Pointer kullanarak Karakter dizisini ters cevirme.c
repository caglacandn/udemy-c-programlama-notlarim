#include<stdio.h>
/*
Iki pointer yardimiyla asagidaki programi yazin

5 kelime giriniz: 
0. kelime: benim
1. kelime: adim
2. kelime: can
3. kelime: boz
4. kelime: dur.

mineb
mida
nac
zob
.rud
*/

int main(){
	
	char dizi[5][50];
	char *ilk;
	char *ikinci;
	int i;
	char gecici;
	
	printf("Lutfen 5 adet kelime giriniz: \n");
	
	for(i=0; i<5;i++)
	{
		printf("%d. kelime: ",i);
		scanf(" %s",dizi[i]);
	}
	for(i=0; i<5; i++)
	{
		ilk = ikinci = dizi+i;
		while(*ikinci)
		{
			ikinci++;
		}
		ikinci--;
		while(ilk<ikinci)
		{
			gecici=*ilk;
			*ilk=*ikinci;
			*ikinci=gecici;
			ilk++;
			ikinci--;
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n%s",*(dizi+i));
		
	}
	
	return 0;
}
