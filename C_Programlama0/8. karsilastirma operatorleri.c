#include <stdio.h>
// ==	!=	<	>	<=	>=	
int main(){
	int a;
	printf("lutfen ekrana bir deger giriniz:");
	scanf("%d",&a);
	
	if (a==4){
		
		printf("girdiginiz deger 4\n");
	}
	
	if (a!=4){
		
		printf("girdiginiz deger 4 degil\n");
	}
	
	if (a>5){
		
		printf("girdiginiz deger 5'ten buyuk\n");
	}
	if (a<=5){
		
		printf("girdiginiz deger 5'ten kucuk veya esit\n");
	}
	
	return 0;
}
