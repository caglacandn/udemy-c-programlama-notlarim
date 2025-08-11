#include <stdio.h>
#include <string.h>
//  strncat fonksiyonu: iki karakter dizisini belli sayýda birleþtirir
int main(){
	
	char s1[100];
	char s2[100];

	
	printf("Lutfen bir yazi giriniz:");
	gets(s1);   						//gets boþluklarý da alýr scanf boþluklarý almaz!!!!!!
	printf("%s\n",s1);													
	
	printf("Lutfen ikinci yaziyi giriniz:");
	gets(s2); 						
	printf("%s\n",s2);
	
	int a;
	printf("birinci yazinin sonuna kac karakter eklemek istersiniz:");
	scanf("%d",&a);
	
	printf("Eklemeden once: %s\n",s1);
	
	printf("birlestirmeden sonra:");
	strncat(s1,s2,a);
	printf("%s",s1);
	
	return 0;
}
