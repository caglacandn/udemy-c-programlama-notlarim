

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *c[10] = {"Bir", "Iki", "uc"};
	int i;
	for(i=0; i<3; i++)
	{
		printf("String: %s\n",c[i]);
	}
	
	return 0;
}
