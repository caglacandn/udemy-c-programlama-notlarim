#include <stdio.h>
// Break kullan�m�
int main(){
	int i;
	for(i=0;i<200;i++)
	{
		if((i%2)==1)   // tek say�lar� yazd�rmaz
		{
			continue;
		}
		printf("%d\n",i);
		
		if(i==20) //20'ye kadar devam eder 
		{
			break;
		}
	}
	return 0;
}
