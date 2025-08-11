#include<stdio.h>
/*
kullaniciya kac elemanlai bir sayi dizisi olusturmak istedigini sorun
pointer kullanarak elemanlari tek tek alin ve console a bastirin
*/
int main()
{
	int arr[100];
	int n;
	int *ptr;
	int i;
	ptr = arr;
	
	printf("Dizi kac elemanli olsun: ");
	scanf("%d",&n); 
	
	printf("Lutfen elemanlari giriniz: \n");
	for(i=0; i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr = arr; //!!! en son ptr artmis olarak ciktigi icin bastirmadan once tekrar dizinin ilk elemaninin adresine esitlemiz gerekiyor
	
	printf("\nDegerlerim:\n");
	for(i=0; i<n;i++)
	{
		printf("%d\t",*ptr);
		ptr++;
	}
	return 0;
}
