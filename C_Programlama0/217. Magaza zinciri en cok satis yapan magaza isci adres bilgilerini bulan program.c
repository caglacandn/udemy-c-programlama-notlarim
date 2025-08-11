#include<stdio.h>
#include<string.h>
#define N 1
#define M 2

struct urun{
	char referans_kodu[20];
	float fiyat;
};

struct isci{
	char isim[20];
	char soyisim[20];
	int yas;
	
};


struct magaza{
	char isim[20];
	char sokak_ismi[20];
	char mahalle[15];
	char telefon[15];
	float satis;
	struct isci e1;
	struct isci e2;
	struct isci e3;
	struct urun p[M];
};

void urunu_olustur(struct urun *pr)
{
	printf("Referans kodu giriniz:\n");
	scanf("%s", pr->referans_kodu);
	printf("Lutfen fiyati giriniz:\n");
	scanf("%f",&pr->fiyat);
}

void isciyi_olustur(struct isci *em)
{
	printf("Iscinin adini giriniz:\n");
	scanf("%s",em->isim);
	printf("Iscinin soyadini giriniz:\n");
	scanf("%s",em->soyisim);
	printf("Iscinin yasini giriniz:\n");
	scanf("%d",&em->yas);
}

void magazayi_olustur(struct magaza *m)
{
	int i;
	printf("Lutfen magazanin ismini girin:\n");
	scanf("%s",m->isim);
	printf("Lutfen magazanin bulundugu sokak ismini giriniz:\n");
	scanf("%s",m->sokak_ismi);
	printf("Lutfen magazanin bulundugu mahalle ismini giriniz:\n");
	scanf("%s",m->mahalle);
	printf("Lutfen magazanin telefonu olup olmadigini girin:\n");
	scanf("%s",m->telefon);
	printf("Satis rakamini giriniz:\n");
	scanf("%f",&m->satis);
	printf("Isci 1:\n");
	isciyi_olustur(&m->e1);
	printf("Isci 2:\n");
	isciyi_olustur(&m->e2);
	printf("Isci 3:\n");
	isciyi_olustur(&m->e3);
	for(i=0;i<M; i++)
	{
		printf("Urunlerinizi giriniz %d:\n",i);
		urunu_olustur(&m->p[i]);
	}
	
}

void isciyi_bas(struct isci e)
{
	printf("Isim: %s\n",e.isim);
	printf("Soyisim: %s\n",e.soyisim);
	printf("Yas: %d\n", e.yas);
}

void urunu_bas(struct urun p)
{
	printf("Referans kodu: %s\n",p.referans_kodu);
	printf("Fiyat: %f\n",p.fiyat);
	
}
void magazayi_bas(struct magaza m)
{
	int i;
	printf("Magazanin ismi : %s\n",m.isim);
	printf("Magazanin bulundugu sokak: %s\n",m.sokak_ismi);
	printf("Magazanin bulundugu mahalle: %s\n",m.mahalle);
	printf("Magazanin telefon numarasi var mi: %s\n",m.telefon);
	printf("Satis rakami: %f\n",m.satis);
	printf("Isci 1: \n");
	isciyi_bas(m.e1);
	printf("Isci 2: \n");
	isciyi_bas(m.e2);
	printf("Isci 3: \n");
	isciyi_bas(m.e3);
	for(i=0; i<M; i++)
	{
		printf("Urun: %d\n",i);
		urunu_bas(m.p[i]);
	}
}
void en_yasli(struct magaza m)
{
	struct isci yasli;
	if(m.e1.yas > yasli.yas)
		yasli = m.e1;
		
	if(m.e2.yas > yasli.yas)
		yasli = m.e2;
		
	if(m.e3.yas > yasli.yas)
		yasli=m.e3;
		
	printf("En yasli isci: \n");
	isciyi_bas(yasli);
}

void ortalama_fiyat(struct magaza m[N])
{
	int i,j;
	float s=0.0;
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			s=s+m[i].p[j].fiyat;
		}
		printf("%s magazasinda yer alan urunlerin ortalama fiyati: %d\n", m[i].isim,(float)s/M);
	}
}
void bulundugu_mahalle(struct magaza m[N], char q[12])
{
	int i;
	for(i=0; i<N; i++)
	{
		if(stricmp(m[i].mahalle,q)==0)
		{
			printf("%s mahallesinde %s magazasi bulunur\n",m[i].mahalle,m[i].isim);
		}
	}
}
int main(){
	
	int i;
	struct magaza m[N];
	for(i=0; i<N; i++)
	{
		printf("Magaza %d: \n",i);
		magazayi_olustur(&m[i]);
	}
	
	printf("Magaza %d:\n",N);
	magazayi_bas(m[N]);
	en_yasli(m[N]);
	ortalama_fiyat(m);
	bulundugu_mahalle(m,"sisli");
	return 0;
}
