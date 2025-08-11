//Pointer ve diziler
#include<stdio.h>
int main(){
	
	char can[100]="canan"; 
	
	char *p1;
	//dizinin ismi ilk elemaninin adresine esittir
	p1 = can; //p1=&t[0];
	//örnek: 	int *tab ve int tab[] ayni seydir.
	
	printf("1. karakterim %c'dir\n",can[0]);
	printf("1. karakterim %c'dir\n\n",*(p1));
	printf("2. karakterim %c'dir\n",can[1]);
	printf("2. karakterim %c'dir\n\n",*(p1+1));
	printf("3. karakterim %c'dir\n",can[2]);
	printf("3. karakterim %c'dir\n\n",*(p1+2));
	printf("4. karakterim %c'dir\n",can[3]);
	printf("4. karakterim %c'dir\n\n",*(p1+3));
	printf("5. karakterim %c'dir\n",can[4]);
	printf("5. karakterim %c'dir\n\n",*(p1+4));
	
	return 0;
}
