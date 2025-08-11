#include <stdio.h>
//Bu program B (buyuk b harfi) ekrana bastirir

void b_harfi(int n, char sembol) 
{
	int i,j,k,l,m,z,x,y;
	int taban_sayi = (n/2)-1; 
	int yarisi=(n/2)+1; 
	int yarisinin_ortasi=(yarisi/2)+1; 
	int bosluk_sayisi= taban_sayi;
	
	printf("\n\n");
	
	for(i=1; i<=n; i++)
	{
		if(i==1)
		{
			printf("\t\t");
			for(j=1; j<=taban_sayi; j++)
			{
				printf("%c",sembol);
			}
		}	
		
		if(i!=1 && i<yarisinin_ortasi)
		{
			printf("\t\t");
			printf("%c",sembol);
			for(k=1; k<= bosluk_sayisi; k++)
			{
				printf(" ");
			}
			bosluk_sayisi++;
			printf("%c",sembol);		
		}
		
		if(yarisinin_ortasi<=i && i<yarisi)
		{
			printf("\t\t");
			printf("%c",sembol);
			for(l=1; l<= bosluk_sayisi; l++)
			{
				printf(" ");
			}
			bosluk_sayisi--;
			printf("%c",sembol);
		}
		
		if(i==yarisi)
		{
			printf("\t\t");
			for(m=1; m<=taban_sayi; m++)
			{
				printf("%c",sembol);
			}
		}	
		
		if(yarisi<i && i<(yarisi+yarisinin_ortasi)-1)
		{
			printf("\t\t");
			printf("%c",sembol);
			for(z=1; z<= bosluk_sayisi+1; z++)
			{
				printf(" ");
			}
			bosluk_sayisi++;
			printf("%c",sembol);		
		}
		
		if((yarisi+yarisinin_ortasi)-1<=i && i<n)
		{
			printf("\t\t");
			printf("%c",sembol);
			for(x=1; x<= bosluk_sayisi+1; x++)
			{
				printf(" ");
			}
			bosluk_sayisi--;
			printf("%c",sembol);
		}
		
		if(i==n)
		{
			printf("\t\t");
			for(y=1; y<=taban_sayi; y++)
			{
				printf("%c",sembol);
			}
		}
		
		printf("\n");
	}
}

int main(){
	
	int satir_sayisi;
	char sembol;
	
	printf("Lutfen 9 veya 9'dan buyuk tek bir tamsayi giriniz: ");
	scanf("%d",&satir_sayisi);
	
	printf("Lutfen bir sembol giriniz: ");
	scanf(" %c",&sembol);
	
	if(satir_sayisi%2==0 || satir_sayisi<0)
	{
		printf("Girmis oldugunuz sayi uygun degildir. Tekrar deneyiniz. ");
	}
	else
	{
		b_harfi(satir_sayisi, sembol);
	}
	
	return 0;
}
