#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 //constant olarak cagrilmasini saglar sayi olmak zorunda degil
#define circleArea(r) (PI*(r)*(r))
//#undef PI //define PI yi kaldirir

int main()
{
    float yaricap,alan;
    printf("Lutfen yaricap degerini giriniz\n");
    scanf("%f",&yaricap);
    
    alan=circleArea(yaricap);
    printf("Alanimiz %.2f birim",alan);

    return 0;
}
