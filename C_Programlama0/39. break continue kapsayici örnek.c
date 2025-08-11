#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i;

      for (i = 0; i < 10; i++) {
        if(i == 5)
        {
            continue; //5i görünce atla
        }
        if(i == 8)
        {
            break; // 8i görünce bitir
        }

        printf("%d\n", i);

      }


    return 0;
}
