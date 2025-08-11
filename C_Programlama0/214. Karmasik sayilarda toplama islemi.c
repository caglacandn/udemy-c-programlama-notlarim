/*
Karmasik sayilarda toplama islemi yapilirken reel ve sanal kisimlar ayri ayri toplnmaktadir.
Buna gore kullanici tarafindan girilen a+bi seklindeki iki karmasik sayiyin toplamini asagida 
verilen fonksiyon prototipi ve yapiyi kullanarak gerceklestiren C programini yaziniz.

typedef struct karmasik_sayi{
	float reel;
	float sanal;
}karmasik;

void topla (karmasik n1, n2);
*/
#include<stdio.h>

typedef struct karmasik_sayi{
	float reel;
	float sanal;
}karmasik;

void topla(karmasik n1, karmasik n2)
{
	karmasik temp;
	temp.reel=n1.reel+n2.reel;
	temp.sanal=n1.sanal+n2.sanal;
	printf("         %.3f + %.3fi\n",n1.reel,n1.sanal);
	printf("         %.3f + %.3fi\n",n2.reel,n2.sanal);
	printf("Toplam = %.3f + %.3fi", temp.reel,temp.sanal);
}


int main(){
	
	karmasik k1, k2;
	printf("Birinci sayinin reel ve sanal kismini giriniz:\n");
	scanf("%f %f",&k1.reel, &k1.sanal);
	
	printf("Ikinci sayinin reel ve sanal kismini giriniz:\n");
	scanf("%f %f",&k2.reel, &k2.sanal);
	
	topla(k1, k2);
	
	return 0;
}
