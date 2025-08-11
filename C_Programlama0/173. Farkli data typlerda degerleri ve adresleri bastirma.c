#include<stdio.h>
/*
Farkli data typelar icin (char int float double) degisken tanimlayip deger
atamasi yapiniz hem bu degerleri hem de bellekteki tuttuklari adresi console a bastiriniz.
*/

int main()
{
	char karakter='c';
	int integer_sayim=1;
	float float_sayim=5.43;
	double double_sayim=3728947239864.892;
	
	printf("Karakterim: %c, karakterimin adresi: %d\n",karakter,&karakter);
	printf("integer sayim: %d, integer sayimin adresi: %d\n",integer_sayim ,&integer_sayim);
	printf("float sayim: %f, float sayimin adresi: %d\n",float_sayim,&float_sayim);
	printf("double sayim: %lf, double sayimin adresi: %d\n",double_sayim,&double_sayim);
	
	return 0;
}
