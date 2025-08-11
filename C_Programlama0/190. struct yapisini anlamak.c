//struct 

#include <stdio.h>
int main(){
	
	struct sehir{
		char sehir_adi[50];
		int sicaklik;
	};
	
	struct sehir turkiye[82];
	
	
	
	typedef float tipim;
	struct hacim_prizma{
		tipim en;
		tipim boy;
		tipim yukseklik;
		tipim hacim;
	};
	
	typedef struct hacim_prizma prizma;
	
	prizma prizma_a;
	
	return 0;
}
