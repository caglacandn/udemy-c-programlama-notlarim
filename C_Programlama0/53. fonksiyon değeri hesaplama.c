// kullanýcý tarafýndan girilen bir reel sayýyý donksiyonda yerine koyup hesaplayan program
//				f(x) = x^3 + 13x^2 + 47x+5
#include<stdio.h>
int main(){
	float x;
	printf("Lutfen f(x)=x^3+13*x^2+47*x+5 fonksiyonu için reel bir x deðeri giriniz: ");
	scanf("%f", &x);
	
	printf("f(%.3f)= %.3f ", x, x*x*x + 13*x*x + 47*x + 5);
	
	return 0;
}
