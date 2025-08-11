#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[5] = {19, 10, 8, 17, 9};
    int i;

    can[2]=18; 	// 8 yerine 18 yazdirir
    can[3]=1;	// 17 yerine 1 yazdirir

    for(i=0;i<5;i++) //diziyi yazdirma islemi
    {
        printf("%d ",can[i]);
    }
    return 0;
}
