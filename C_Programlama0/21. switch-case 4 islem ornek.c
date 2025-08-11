#include <stdio.h>
//switch case kullanarak 4 iþlem
int main(){
	
	char op;
	float a,b;
	
	printf("yapmak istediginiz islemin operatorunu giriniz:");
	scanf("%c", &op);
	
	puts("lutfen iki adet sayi giriniz:");
	scanf("%f%f", &a, &b);
	
	switch(op){
		case '+': printf("%f + %f = %.3f",a,b,a+b);
		break;
		case '-': printf("%f - %f = %.3f",a,b,a-b);
		break;
		case '*': printf("%f * %f = %.3f",a,b,a*b);
		break;
		case '/': printf("%f / %f = %.3f",a,b,a/b);
		break;
		default : printf("Girdiginiz operator tanimli degildir.");
		break; 
	}
	
	return 0;
}
