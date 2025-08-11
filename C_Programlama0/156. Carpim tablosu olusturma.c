#include<stdio.h>
int main(){
	
	int n;
	int i,j;
	
	printf("Kaca kaclik bir carpim tablosu istiyorsunuz: ");
	scanf("%d", &n);
	
	int carpim_tablosu[n][n];
	
	printf("\tX");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i);
	}
	
	printf("\n      -----");
	for(i=0; i<n; i++)
	{
		printf("--------");
	}
	//carpim tablosunu atama
	for(i=0;i<n;i++)
	{
		for(j=0; j<n;j++)
		{
			carpim_tablosu[i][j]=(i+1)*(j+1);
		}
	}
	//carpim tablosuunu yazdirma
	for(i=0;i<n;i++)
	{	
		printf("\n");
		printf("\t%d",(i+1));
		for(j=0; j<n;j++)
		{
			printf("\t%d",carpim_tablosu[i][j]);
		}
	}

	return 0;
}
