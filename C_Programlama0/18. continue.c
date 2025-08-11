#include <stdio.h>
// Break kullanýmý
int main(){
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)   //5i yazmayý atlar
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
