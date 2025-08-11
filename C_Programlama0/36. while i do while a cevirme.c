#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    Bir sayi giriniz: 100
        100
        200
        300
        400
        500
        600
        700
        800
        900
        1000
    */
    int sayim;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    int i = 1;

     do{

        printf("%d\n",i*sayim);
        i++;
    }while (1);

    return 0;
}
