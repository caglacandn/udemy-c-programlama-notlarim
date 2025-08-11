#include<stdio.h>

int main()
{
	int *ad1, *ad2, *ad;
	int n=10,p=20;
	
	ad1=&n;
	ad2=&p;
	printf("Atamadan once ad1 degeri : %d\n",*ad1);
	printf("Atamadan once ad1 adresi : %d\n",ad1);
	*ad1=*ad2+2;
	printf("Atamadan sonra ad1 degeri : %d\n",*ad1);
	printf("Atamadan sonra ad1 adresi : %d\n",ad1);
	
	return 0;
}
