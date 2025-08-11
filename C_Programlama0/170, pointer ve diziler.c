#include<stdio.h>

int main(){
	//int *tab = int tab 
	int t[10];
	int i;
	int *pt;
	
	for(pt=t;pt<t+10;pt++)
	{
		*pt = 0;
	}
	for(pt=t;pt<t+10;pt++)
	{
		printf("%d\n",*pt);
	}
	/*
	for(i=0;i<10;i++){
		t[i]=0;
	}
	for(i=0;i<10;i++){
		printf("%d\n",t[i]);
	}
	*/
	
	return 0;
}
