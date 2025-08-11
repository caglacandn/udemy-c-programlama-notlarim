// birden n'ye kadar sayýlarýn toplamýný hesaplayan program
#include<stdio.h>
int main(){
	int a,i=1;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&a);
	
	int toplam=0;
	
	while(i <= a){
		if(i==a)  printf("%d",a);
		else printf("%d + ",i);
		
		toplam = toplam + i;
		i++ ;
	}
	printf(" = %d",toplam);
	
	return 0;
}
