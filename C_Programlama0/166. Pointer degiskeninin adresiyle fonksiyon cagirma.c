#include <stdio.h>
/*   adresle atama yapma global olarak degistirir

void degistir(int *ad1,int *ad2){
    int gecici;
    gecici=*ad1;
    *ad1=*ad2;
    *ad2=gecici;

    printf("Ilk sayim %d ikinci sayim %d\n",ad1,ad2);

}	
	
int main({
   int a=10,b=20;
   printf("Cagirmadan once %d %d\n",a,b);
   degistir(&a,&b);
   printf("Cagirdiktan sonra %d %d",a,b);

    return 0;
}							*/

// deger ile atama yapma lokal olarak değiştirir
void degistir(int ad1,int ad2)
{
    int gecici;
    gecici=ad1;
    ad1=ad2;
    ad2=gecici;

    printf("Ilk sayim %d ikinci sayim %d\n",ad1,ad2);

}
int main()
{
   int a=10,b=20;
   printf("Cagirmadan once %d %d\n",a,b);
   degistir(a,b);
   printf("Cagirdiktan sonra %d %d",a,b);

    return 0;
}
