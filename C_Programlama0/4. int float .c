#include <stdio.h>
int main(){ 
  int a=3.14;
  float b=3.14;
 // float noktadan sonra 6 basamak;  double 15 basamak yazd�r�r.
  printf("%d\n",a); //ekrana 3 yazd�r�r
  printf("%f\n",b); //ekrana 3.140000 yazd�r�r
  printf("%.3f\n",b); //ekrana 3.140 yazd�r�r 
  return 0;
}
