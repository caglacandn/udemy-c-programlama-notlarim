#include <stdio.h>
int main(){

	char karakter;
	int tamsayi;
	float ondaliksayi1;
	double ondaliksayi2;
	
	printf("char bellekte %d byte kadar yer tutar.\n", sizeof(karakter)); // 1 byte
	printf("integer bellekte %d byte kadar yer tutar.\n", sizeof(25));	// 4 byte
	printf("float bellekte %d byte kadar yer tutar.\n", sizeof(float)); // 4 byte
	printf("double bellekte %d byte kadar yer tutar.\n", sizeof(double)); // 8 byte	
	
	return 0;
}
