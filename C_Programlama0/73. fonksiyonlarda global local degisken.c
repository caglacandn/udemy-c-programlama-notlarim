#include <stdio.h>
#include <stdlib.h>

void can() //geriye deger dondurmeyen fonksiyon
{
  int x = 3; //local fonksiyona ait 
  printf("%d",x);
}

int main()
{
    int x=1;
    {
        int x = 2;
        printf("%d\n",x);
        can();

    }
    return 0;
}
