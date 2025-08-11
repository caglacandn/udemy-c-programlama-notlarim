#include <stdio.h>
#include <stdlib.h>
// 3 boyutlu sayi dizisi  // çok önemli deðil
int main()
{
	// iki tane 3x4 matrisi tutar
    int can[2][3][4]={{{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{5, 6, 7, 3}, {1, -5, 10, 13}, {22, 15, 33, 12}}};

	printf("%d\n", can[0][0][1]);	//4 yazdirir
	printf("%d", can[1][1][2]);		//10yazdirir
    return 0;
}
