#include <stdio.h>
#include <stdlib.h>

int main()
{

  /* kullanicidan 1 sayi girmesini isteyiniz 1 den gireceginiz sayiya kadar olan sayilarin
  toplamini for dongusuyle hesaplayiniz
 */
    int sayim;
    int i,toplam=0;

   printf("Lutfen bir sayi giriniz\n");
   scanf("%d",&sayim);

   for(i=1;i<=sayim;i++)
   {
       toplam += i;
   }

   printf("Toplam:%d",toplam);


    return 0;
}
