#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //strupr(): str upper - girilen T�m harfleri b�y�k harfe donust�r�r.
    char can[100];

    printf("Lutfen bir text giriniz\n");
    fgets(can,sizeof(can),stdin);
   // scanf("%s",&can);

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin buyuk harflere donusturulmus hali %s\n",strupr(can));


    return 0;
}
