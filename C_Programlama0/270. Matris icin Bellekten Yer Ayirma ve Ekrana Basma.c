/*
Klavyeden satir ve sutun sayisi girilen bir matrise bellekten yar ayrilarak deger yazan
ve bu matrisi ekrana gosteren C programini yaziniz.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int satir, sutun;
	int **matris;
	int i,j;
	
	printf("Lutfen satir sayisini giriniz: ");
	scanf("%d", &satir);
	
	printf("Lutfen sutun sayisini giriniz: ");
	scanf("%d", &sutun);
	
	matris=(int **)calloc(satir, sizeof(int*));
	
	for(i=0; i<satir; i++)
	{
		matris[i]=(int *)calloc(sutun, sizeof(int));
		for(j=0; j<sutun; j++)
		{
			printf("Matris[%d][%d] = ",i,j);
			scanf("%d", &(matris[i][j]));
		}
	}
	
	for(i=0; i<satir; i++)
	{
		for(j=0; j<sutun; j++)
		{
			printf("%4d",matris[i][j]);
		}
		printf("\n");
	}
	
	free(matris);
	
	return 0;
}
