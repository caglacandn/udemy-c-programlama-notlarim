#include <stdio.h>
#include <stdlib.h>
#include <string.h> //string kutuphanesinde bulunur.

int main()
{

    //strlwr(): k�c�k  harfe cevirmek icin her karakteri kucuk harfe degistiri ascii tablosu mantigi
    char can[100];

    printf("Lutfen bir text giriniz\n");
    fgets(can,sizeof(can),stdin);  //fgets boslugu da alir
   // scanf("%s",&can); //scanf boslugu g�rd�g�nde kapanir

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin kucuk harflere donusturulmus hali %s\n",strlwr(can));


    return 0;
}
