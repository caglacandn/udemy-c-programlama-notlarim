#include <stdio.h>
//girilen cümlenin kelime sayýsýný bulma
int main(){
	
	char cumle[100];//max 100 karakter
	int i=0;
	int sayac=0;
	
	printf("lutfen bir cumle giriniz: ");
	gets(cumle);  //scanf boþluða kadar deðer alýr
	
	while(cumle[i]){
		if(cumle[i]==32){ //32 spacein ascýý numarasý
			sayac++;
		}
		i++;
	}
	printf("Girilen cumledeki kelime sayisi: %d",sayac+1);
	return 0;
}

