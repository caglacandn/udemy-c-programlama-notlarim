#include<stdio.h>
/*
kullanicidan bir cumle girmesini isteyin.
Girilen cumle icindeki harflerin kac kere yazildigini ekrana bastirin
*/

int main(){

	char c;
	int sayma[26]={0};
	int can,karakter,i;
	karakter = 0;
	printf("Lutfen bir tekst girin ve antera basin: \n");
	
	while((c=getchar()) !='\n')
	{
		can = c-'a';
		if(can >= 0 && can<26){
			sayma[can]++;
		}
		else{
			karakter++;
		}
	}
	
	for(i=0; i<26; i++){
		printf("%d kez %c\n",sayma[i],'a'+i);
	}
	return 0;
}
