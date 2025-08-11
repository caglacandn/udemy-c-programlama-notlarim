#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullanicidan bir sayi girmesini isteyiniz if else kullanarak sayinin tek mi çift mi oldugunu
    //ekrana bastiran bir program yaziniz
    int sayim;


    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    if(sayim%2 == 0)
    {
        printf("%d sayisi cift sayidir",sayim);
    }
    else
    {
        printf("%d sayisi tek sayidir",sayim);
    }

    return 0;
}
