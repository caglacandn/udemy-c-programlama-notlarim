#include<stdio.h>
#include<math.h>
/*
Asagida verilen serinin hesaplanmasini saglayan C programini fonksiyon kullanarak yaziniz
kullanici 4 girdiyse:  1^2+2^2+3^2+4^2
*/


int seritoplami(int n)
{
	int i;
	int toplam=0;
	for(i=1;i<=n;i++)
	{
		toplam += (pow(i,2));
	}
	return toplam;
}
int main(){
	int n;
	printf("n degerini giriniz: ");
	scanf("%d", &n);
	printf("serinin toplami: %d\n",seritoplami(n));
	
	return 0;
}
