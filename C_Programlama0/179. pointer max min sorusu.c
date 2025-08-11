#include<stdio.h>
/*
10 tane integer tipinde elemani olan bir dizi tanimlayin ve 
bu elemanlari kullanicinin girmeisini saglayin.
Pointer yardimiyla dizideki elemanlarin en buyuk ve en kucuk degerini bulun.
*/
#define n 10
int main()
{
	int i;
	int min,max;
	int *ptr;
	int dizi[n];
	
	printf("%d kadar deger giriniz: \n",n);
	
	for(ptr=dizi;ptr<dizi+n;ptr++)
	{
		scanf("%d",ptr);//dizinin ilk elemaninin adresi --> can=&can[0]
	}
	
	max=min=dizi[0]; //*can=can[0]
	
	for(ptr=dizi+1;ptr<dizi+n;ptr++)
	{
		if(*ptr>max)
			max=*(ptr);
		if(*ptr<min)
			min=*(ptr);
		
	}
	printf("Dizimizin maksimum degeri: %d\n",max);
	printf("Dizimizin minimum degeri: %d\n",min);

	return 0;
}
