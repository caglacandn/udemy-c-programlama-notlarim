#include <stdio.h>
int min_func(int a, int b, int c);
int main(){
 	int k1, k2, k3, min;
 	printf("3 tane tamsayi giriniz:\n");
 	scanf("%d%d%d", &k1, &k2, &k3);
 	min = min_func(k1, k2, k3);
 	printf("En kucuk sayi: %d", min);
	return 0;
}

int min_func(int a, int b, int c){
	int m=a;
	if(b<=m) m=b;
	if(c<=m) m=c;
	return m;
}
