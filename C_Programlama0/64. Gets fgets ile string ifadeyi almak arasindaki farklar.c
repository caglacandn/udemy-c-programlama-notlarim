#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    printf("Lutfen isminizi giriniz\n");
    //gets(name); //gets �nerilmiyor fgets �neriliyor gets danger kod
    fgets(name,sizeof(name),stdin); //sizeof(name)=30
    printf("%s",name);

    return 0;
}
