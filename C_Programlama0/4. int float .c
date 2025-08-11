#include <stdio.h>
int main(){ 
  int a=3.14;
  float b=3.14;
 // float noktadan sonra 6 basamak;  double 15 basamak yazdýrýr.
  printf("%d\n",a); //ekrana 3 yazdýrýr
  printf("%f\n",b); //ekrana 3.140000 yazdýrýr
  printf("%.3f\n",b); //ekrana 3.140 yazdýrýr 
  return 0;
}
