// girilen harf alfabede kaçýncý (ascýý)
/* Ýngiliz alfabesinden herhangi bir büyük veya küçük harfi ch deðiþkenine 
okuyan ve bu harfin alfabede kaçýncý harf olduðunu bulan bir C programý 
yazýnýz.(Ýpucu: Büyük harf için (int)ch-(int)'A'+1,küçük harf için 
(int)ch-(int)'a'+1 ifadelerini kullanabilirsiniz. */
#include<stdio.h>
int main(){
	
	char ch;
    int sira;
    
    printf("Bir karakter giriniz\n");
    scanf("%c",&ch);
    
	if((ch>='A')&&(ch<='Z')){
        sira=(int)ch-(int)'A'+1;
    }
    else if((ch>='a')&&(ch<='z')){
       sira=(int)ch-(int)'a'+1;
    }
    else{
        printf("Lutfen harf giriniz.Boyle bir harf yoktur");
    }

    printf("%c : %d. harftir",ch,sira);

	
	return 0;
}
