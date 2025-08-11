#include <stdio.h>
/*
Nokta adinda bir struct yaratin.
abs(x dogrusu uzerindeki yeri)
ord(y dogrusu uzerindekki yeri), bu degerleri float turunde yapin.
P noktasinda bir nokta yaratin
P noktasinin abs=3 ve ord=2 atamasini yapin
printf icinde p noktasini ekrana yazdirin
*/
/*
struct nokta{
	float abs;
	float ord;
};
*/
typedef struct nokta{
	float abs;
	float ord;
}Nokta;


int main()
{
	/*
	struct nokta P_noktasi;
	*/
	Nokta P_noktasi;
	P_noktasi.abs=3;
	P_noktasi.ord=2;
	
	printf("P noktasinin koordinatlari:\nx = %.3f\t y = %.3f",P_noktasi.abs,P_noktasi.ord);
	
	return 0;
}
