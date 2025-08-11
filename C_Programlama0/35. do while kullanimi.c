#include <stdio.h>
#include <stdlib.h>

int main()
{
	//kod ilk basta kosula bakmadan calisiyor.
    int i = 15; // while kosulunu saglamiyor ama once do islemi oldugu icin ekrana yazdiriliyor.
    do{
    	
        printf("%d\n",i);
        i++;
        
    } while (i<10);
    
    
    return 0;
}
