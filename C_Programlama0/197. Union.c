

// structan farki union ayni hazifadaki yeri paylasiyor
// structta bir char bir float tanimlarsak 5 byte yer ayirir
// unionda bir char bir float tanimlarsak 4 byte yer ayirir

/* //onemliiiiiiiiiiiiiiiiiiiii
struct durumunda, uyelerinin tumune her an erisilebilir.

Ancak, union durumunda, bir kerede yalnizca uyelerinden birine 
erisilebilir ve diger tum uyeler cop degerleri icerir.
*/
//Asagidaki kod hatali calisiyor cunku yukaridaki sebepten
/*
#include <stdio.h>

union test{

    int x, y;

};

int main(){

    union test point;
    point.x = 4;
    point.y = 9;
    
    printf("x: %d\n",point.x);
    printf("y: %d\n",point.y);
    printf("Size of union = %d byte.",sizeof(point));

   
    return 0;
}
*/ 



#include<stdio.h>


union test{
	char x;
	int y;
	float z;
};

struct test2{
	char a;
	int b;
	float c;
};

int main(){
	
	union test t;
	struct test2 k;
	
	t.x='a';
	printf("%c\n",t.x);
	
	t.y = 10;
	printf("%d\n",t.y);
	
	t.z = 5.6894;
	printf("%.2f\n",t.z);
	
	
	printf("\nUnion'in tuttugu alan %d byte'dir.", sizeof(t));
	printf("\nStruct'in tuttugu alan %d byte'dir.", sizeof(k));
	return 0;
}
