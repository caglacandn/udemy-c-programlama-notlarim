#include <stdio.h>
/*
Kullanicidan dizi eleman sayisini belirlemesini isteyin dizinin elemanlarini girdidkten sonra
pointer yardiimiyla yeni bir diziye ilk dizinin elemanlarini kopyalayip her iki diziyi birden console a bastiriniz
*/

void bastir(int *arr, int n)
{
	int i;
	printf("\nDegerlerim:\n");
	for(i=0; i<n;i++)
	{
		printf("%d\t",*arr);
		arr++;
	}
}
int main()
{
	int source_arr[100];
	int dest_arr[100];
	int n;
	int *source_ptr;
	int *dest_ptr;
	int *end_ptr;
	int i;
	source_ptr = source_arr;
	dest_ptr = dest_arr;
	
	printf("Dizi kac elemanli olsun: ");
	scanf("%d",&n); 
	
	printf("Lutfen elemanlari giriniz: \n");
	for(i=0; i<n;i++)
	{
		scanf("%d",(source_ptr+i));
	}
	
	end_ptr=&source_arr[n-1];
	printf("\nKaynak arrayim kopyalamadan once\n");
	bastir(source_arr,n);
	
	
	while(source_ptr<= end_ptr)
	{
		*dest_ptr=*source_ptr;
		source_ptr++;
		dest_ptr++;
	}
	printf("\nKopyalandiktan sonraki source arryim: \n ");
	bastir(source_arr , n);
	printf("\nKopyalandiktan sonraki destination arryim: \n ");
	bastir(dest_arr , n);
	return 0;
}

