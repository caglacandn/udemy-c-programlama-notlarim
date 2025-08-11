#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O dan 10 a kadar olan tek ve çift sayiari while döngüsü kullanarak bastiriniz
    */

    int i=0;
    while(i<10)
    {
    	//tek sayilari bastirir
        printf("%d ",i+1);
        i += 2; // i=i+2;
    }


    return 0;
}
