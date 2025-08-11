#include <stdio.h>
#include <stdlib.h>
#include <string.h> //string kütüphanesinde bulunur

int main()
{
    //strrev(): yazilani ters cevirmek icin  kullanilir.
    
    char can[100];

    printf("Lutfen bir text giriniz\n");
    scanf("%s",&can);

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin ters cevrilmis hali %s\n",strrev(can));

    return 0;
}
