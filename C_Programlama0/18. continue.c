#include <stdio.h>
// Break kullan�m�
int main(){
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)   //5i yazmay� atlar
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
