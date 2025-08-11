/*
Malloc hafizadan belirlibir yer ayirmamiza yarar. Geriye void tipinde
bir pointer döndürür. Void in tipi olmadigindan istedigimiz degiskene 
Cast islemi yapabilirz.
Eger yeterli alan ayrilmadiysa geriye NULL pointer döndürür.

int* ptr=(int*) malloc (5*sizeof(int));
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int n;
	n=5;
	int i;
	printf("Girdigimiz sayi degeri %d\n",n);
	
	ptr = (int *)malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("Hafiza bolunmedi");
	}
	else
	{
		for(i=0; i<n; i++)
		{
			ptr[i]=i+1;
		}
		printf("Elemanlarim:\n");
		for(i=0; i<n; i++)
		{
			printf("%d\n",ptr[i]);
		}
	}
	return 0;
}
