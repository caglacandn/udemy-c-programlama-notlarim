#include <stdio.h>
// Break kullanýmý
int main(){
	int i;
	for(i=0;i<200;i++)
	{
		if((i%2)==1)   // tek sayýlarý yazdýrmaz
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
