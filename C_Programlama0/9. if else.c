#include <stdio.h>
/*
	if(kosul){
		kod...	
	}
	else{
		kod...
	}
*/ 
int main(){
	int a;
	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	
	if (a>0){
		printf("%d sayisi pozitiftir\n",a);
	} 		
	else if (a==0){
		printf("girdiginiz sayi sifirdir\n");
	} 	
	else{
		printf("%d sayisi negatiftir.\n",a);  
	} 			
	
	if((a%2) == 1)    printf("%d sayisi tek sayidir",a);
	else  printf("%d sayisi cift sayidir",a);
		
	return 0;
}
