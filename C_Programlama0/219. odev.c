/*
1-Kullanicidan bir matris tanimlamasini isteyin.
2-Bir fonksiyon yazarak bu matrisinin simetrik olup olmadigini kontrol edin.Bunu adresin degeriyle islem yaparak yazin.
3-Bu matrisin diyagonal olup olmadigini kontrol eden bir fonksiyon yazin.Bunu adresin degeriyle
islem yaparak yazin.
4-Bu matrisi ekrana bastiran bir fonksiyon yazin
Yukaridaki fonksiyonlari içeren ve programin çalismasi asagidaki gibi olan bir C programi yaziniz.
*/


#include<stdio.h>
#define M 5

void simetri_kontrol(int Matris[M][M], int *s)
{
	int i,j;
	*s=0;
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			if(Matris[i][j] == Matris[j][i])
			{
				*s+=1;
			}
		}
	}

}

void diyagonel_kontrol(int Matris[M][M], int *d)
{
	int i,j;
	*d=0;
	for (i=0; i<M; i++)
	{
		if((Matris[i][i] == 0) && (*d==0))
			*d=0;
		else
			*d=1;
	}
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			if((Matris[i][j] == 0) && (i != j) && (*d==1))
				*d=1;
			else if((*d!=0) && (*d!=1))
				*d=2;
		}
	}
	
}

int main()
{
	int simetri, diyagonal;
	int matris[5][5];	
	int i,j;
	
	printf("Lutfen %dx%d'lik bir matris tanimlayiniz: \n",M,M);
	
	
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("a%d.%d =",i+1,j+1);
			scanf("%d", &matris[i][j]);
		}
	}
	
	printf("\nGirdiginiz matris:\n");
	
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			
			printf("%4d",matris[i][j]);
		}
		printf("\n");
	}
	
	
	simetri_kontrol(matris, &simetri);
	diyagonel_kontrol(matris, &diyagonal);
	
	if(simetri==M*M)
		printf("\nGirdiginiz matris simetriktir.\n");
		
	if(diyagonal == 0)
		printf("\nGirdiginiz matris sifir matrisidir.");
	else if(diyagonal == 1)
		printf("\nGirdiginiz matris diyagonal matristir.");
	else if(diyagonal == 2)
		printf("\nGirdiginiz matris diyagonal matris degildir.");
	
	return 0;
}
