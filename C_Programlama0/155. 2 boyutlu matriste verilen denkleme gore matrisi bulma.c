#include <stdio.h>
#include <stdlib.h>
 
 //Ci,j = Ci-1,j + Ci-1,j-1
int main()
{	
	//Ders 155..
	
	int i,j,n;
	
	printf("Kac Sutun Girmek Istiyorsunuz : ");
	scanf("%d",&n);
	int dizi[n][n];
	
	for(i=0;i<n;i++)
	{	
		if(i==0)
		{
			printf(" p");
			printf("%7d",i);
		}	
		else
		{
			printf("%5d",i);
		}
		
	}
	
	printf("\n n\n");
	printf("----");
	
	for(i=0;i<n;i++)
	{
		printf("-----");	
	}
	
	for(i=0;i<n;i++)
	{
		dizi[i][i]=1;
		dizi[i][0]=1;
		
		for(j=1;j<i;j++)
		{
			dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n%2d --",i);
		for(j=0;j<=i;j++)
		{
			if(j==0)
				printf("%4d",dizi[i][j]);
			else
				printf("%5d",dizi[i][j]);
		}
		printf("\n");
	}
	
    return 0;  
}
