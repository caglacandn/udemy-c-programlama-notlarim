#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilarim[3]; 
	//int i yi forun icinde tanimladik.
    for(int i=0;i<3;i++) //kulanicidan sayi almak icin
    {
        scanf("%d",&sayilarim[i]);
    }

    for(int i=0;i<3;i++) //kullanicidan aldigimiz sayilari ekrana yazdirmak icin
    {
        printf("%d\n",sayilarim[i]);
    }
    return 0;
}
