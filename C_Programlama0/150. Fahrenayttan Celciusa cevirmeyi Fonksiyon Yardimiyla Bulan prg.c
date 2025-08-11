#include<stdio.h>
/*
Kullanici tarafindan derece olarak girilen bir egerin Fahrenayta , Fahrenayt olarak 
girilen bir degerin dereceye donusturulmesini saglayan C programini fonskiyon kullanarak 
yaziniz. 

f=(1.8*c)+32;	c=(5/9)*(F-32);
*/

void sicaklik_donustur(int islem, float deger)
{
	float f,c;
	
	if (islem==1) //1. Celcius'tan Fahrenayt'a donusum
	{
		f=(1.8*deger)+32;
		printf("%.4f celcius = %.4f Fahrenayt", deger, f);
	}
	else if(islem==2) //2. Fahrenayt'tan Celcius'a donusum
	{
		c=(5.0/9.0)*(deger-32); //!!!!!! 5.0/9.0 demezsek int geliyor dikkat
		printf("%.4f Fahrenayt = %.4f celcius",deger, c);
	}
}


int main(){
	
	int islem_no;
	float deger;
	int i;
		
	printf("1. Celcius'tan Fahrenayt'a donusum.\n2. Fahrenayt'tan Celcius'a donusum.");
	printf("\nLutfen yapmak istediginiz islem numarasini seciniz: ");
	scanf("%d", &islem_no);
	
	printf("Lutfen donusturmek istediginiz sicakligin degerini giriniz: ");
	scanf("%f", &deger);
	
	for(i=0; i<2; i++)
	{
		if((islem_no != 1) && (islem_no != 2))
		{
		printf("Girmis oldugunuz islem numarasi tanimli degil.\nLutfen tekrar deneyiniz.\n");
		scanf("%d", &islem_no);
		}
	}
	
	if((islem_no == 1) || (islem_no == 2))
	{	
		sicaklik_donustur(islem_no , deger);
	
	}
	
	
	
	

	
	return 0;
}
