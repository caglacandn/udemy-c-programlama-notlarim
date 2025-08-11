#include<stdio.h>
//pointer kullanrak iki sayiyi toplayiniz
int main()
{
	int sayi1,sayi2,toplam;
	int *ptr1, *ptr2;
	
	ptr1=&sayi1;
	ptr2=&sayi2; 
	
	printf("Lutfen iki adet sayi giriniz: ");
	scanf("%d %d",ptr1, ptr2 ); //scanf("%d %d",&sayi1,&sayi2);
	
	toplam = *ptr1 + *ptr2;
	printf("Toplam = %d",toplam);
	
	return 0;
}
