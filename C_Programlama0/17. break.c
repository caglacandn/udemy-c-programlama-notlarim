#include <stdio.h>
// Break kullanýmý
int main(){
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)   //0'dan 5'e kadar sayýlar yazýlýr
		{
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
