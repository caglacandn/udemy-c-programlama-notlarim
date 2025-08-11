//158. ornegin degiskenin adresiyle cagirilip yazilmasi

#include<stdio.h>

void bolunebilirlik(int *n)
{
	if((*n%2)==0)
	{
		printf("Sayimiz cift sayidir.\n");
	}
	if((*n%3)==0)
	{
		printf("Sayimiz ucun katidir.\n");
	}
	if(( (*n%2)==0 ) && ( (*n%3)==0 ))
	{
		printf("Sayimiz altiya tam bolunur.\n");
	}
}

int main(){
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	bolunebilirlik(&sayi);
	
	return 0;
}
