#include<stdio.h>
/*
Dizinin elemanlarini giriniz: 10 20 30 40 50 60 70 80 90 100
Aradiginiz eleman: 35

output

35 dizide yer almiyor.
*/

void bastir(int *array, int size)
{
	int *arrEnd;
	arrEnd = (array + size - 1);
	while(array <= arrEnd )
	{
		scanf("%d",array++);
		
	}
}
int ara(int *arr, int size,int tosearch_num )
{
	int index=0;
	int *arrEnd;
	arrEnd = (arr+size-1);

	while(arr <= arrEnd && *arr!=tosearch_num)
	{
		
		arr++;
		index++;
	}
	if(arr <= arrEnd)
	{
		return index;
	}
	return -1;
}


int main()
{
	
	int array[100];
	int size,tosearch_num,searchIndex;
	printf("Dizimiz kac elemannli olsun:");
	scanf("%d",&size);
	printf("Dizinin elemanlarini giriniz: \n");
	
	bastir(array , size );
	printf("Hangi elemani ariyorsun: ");
	scanf("%d",&tosearch_num);
	
	searchIndex=ara(array,size, tosearch_num);
	
	if(searchIndex==-1)
	{
		printf("%d elemani dizinizde bulunmuyor.",tosearch_num); 
	}
	
	else
	{
		printf("%d elemani %d. sirada bulunuyor.",tosearch_num , searchIndex+1 ); 
	}
	
	
	return 0;
}
