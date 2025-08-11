#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kullanicidan 2 adet sayi aliniz büyüklük küçüklük durumuna göre
   // ekrana bastirma islemini yapiniz

   int sayi1,sayi2;

   printf("Lutfen 2 adet sayi giriniz\n");
   scanf("%d%d",&sayi1,&sayi2);

   if(sayi1 >= sayi2)
   {
       if(sayi1 == sayi2)
       {
          printf("Sonuc : %d = %d",sayi1,sayi2);
       }
       else
       {
            printf("Sonuc : %d > %d",sayi1,sayi2);
       }
   }
   else
   {
      printf("Sonuc : %d < %d",sayi1,sayi2);
   }


    return 0;
}
