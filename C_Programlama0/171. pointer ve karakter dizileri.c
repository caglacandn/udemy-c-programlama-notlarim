#include<stdio.h>
int main(){
	//karakter dizisini tek tirnakla kullanacaksan ters slas 0i (\0)eklemelisin
	char isim[20]={'s','e','l','a','m','\0'};
	char *can;
	can = isim;
	printf("%c\n",*can);
	printf("%c\n",*(can+1));
	return 0;
}
