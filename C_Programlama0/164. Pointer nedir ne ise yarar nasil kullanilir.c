#include<stdio.h>

//* ve & turev integral gibi dusun

int main()
{
/*
	int a=10;
	int *p;
	
	p=&a;
	
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",a);
	printf("%d\n",&a);
*/
	int *sayi;
	int n;
	n=20;	
	
	sayi=&n;
	
	printf("%d\n",*sayi);
	printf("%d\n",sayi);
	printf("%d\n",n);
	printf("%d\n",&n);
	
	*sayi=30;
	
	printf("%d\n",n);
	printf("%d\n",&n);
	
	return 0;
}
