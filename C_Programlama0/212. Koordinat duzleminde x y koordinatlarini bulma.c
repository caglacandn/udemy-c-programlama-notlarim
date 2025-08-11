/*
Bir topun x-y koordinaat düzlemindeki hareketi icin asagidaki yapi ve formuller
kullanilmaktadir. Topun t=0 anindan t=10 anina kadar 0.1 sn lik zaman dilimlerinde 
x ve y koordinat degerlerinin bulunmasini ve ekrana bastirilmasini saglayan C programini
yaziniz.

Formuller
x=20-6*cos(t);
y=15+2*sin(t);

Yapi:
	
struct koorinat{
	float x,y;
};
*/
#include<stdio.h>
#include <math.h>

 struct koordinat{
	float x,y;
};


int main(){
	
	struct koordinat top;
	float t;
	
	printf("\tX\t\tY\n");
	printf("\t------\t\t------\n");
	
	for(t=0.0;t<10.0; t+=0.1)
	{
		top.x=20-6*cos(t);
		top.y=15+2*sin(t);
		
		printf("\t%f\t%f\n",top.x,top.y);
	}
	
	return 0;
}
