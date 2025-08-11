/*
kelime giriniz: kelime
k
k e
k e l
k e l i
k e l i m
k e l i m e
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j=0;
	char *kelime;
	kelime=(char *)malloc(50*sizeof(char));
	printf("Lutfen kelime giriniz: ");
	gets(kelime);
	
	while(i<strlen(kelime))
	{
		j=0;
		while(j<=i)
		{
			printf("%c ", *(kelime+j));
			j++;
		}
		printf("\n");
		i++;
	}
	
	free(kelime);
	return 0;
}
