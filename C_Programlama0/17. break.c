#include <stdio.h>
// Break kullan�m�
int main(){
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)   //0'dan 5'e kadar say�lar yaz�l�r
		{
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
