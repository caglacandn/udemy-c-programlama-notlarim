/*
Asagidaki verilen yapiyi kullanarak personel bilgilerinin alinmasini ve alindiktan sonra 
personel adlarina gore a dan z ye alfabetik olarak personel bilgilerinin listelenmesini 
saglayan C programini yaziniz.

typedef struct personel{
	int sifre;
	char ad[20],
	char soyad[20];
	int yas;
	float maas;
	char cinsiyet[10];
}kisiler;

void sirala(kisiler x[], int m);
void listele (kisiler x[], int m);
*/
#include<stdio.h>
#include<string.h>
typedef struct personel{
	int sifre;
	char ad[20];
	char soyad[20];
	int yas;
	float maas;
	char cinsiyet[10];
}kisiler;

void sirala(kisiler x[], int m)
{
	int i,j;
	kisiler t;
	for (i=0; i<m-1; i++)
	{
		for(j=i+1; j<m; j++)
		{
			if(strcmp(x[i].ad,x[j].ad)>0)
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;	
			}	
		}
	}
}

void listele(kisiler x[], int m)
{
	int i;
	for(i=0; i<m; i++)
	{
		printf("%d %s %s %d %f %s\n",x[i].sifre, x[i].ad, x[i].soyad, x[i].yas, x[i].maas, x[i].cinsiyet);
	}
}


int main(){
	int N;
	int i;
	printf("Kac adet personel bilgisi tutulacak\n");
	scanf("%d", &N);
	
	kisiler p[N];
	
	for(i=0; i<N; i++)
	{
		printf("%d. kisinin bilgileri:\n", i+1);
		printf("Sifre: \n");
		scanf("%d", &p[i].sifre);
		
		printf("Ad: \n");
		scanf("%s", &p[i].ad);
		
		printf("Soyad: \n");
		scanf("%s", &p[i].soyad);
		
		printf("Yas: \n");
		scanf("%d", &p[i].yas);
		
		printf("Maas: \n");
		scanf("%f", &p[i].maas);
		
		printf("Cinsiyet: \n");
		scanf("%s", &p[i].cinsiyet);
	}
	
	sirala(p, N);
	listele(p, N);
	return 0;
}
