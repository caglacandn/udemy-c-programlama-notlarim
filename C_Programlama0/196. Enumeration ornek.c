#include<stdio.h>
/*
Yilin aylarini gosteren bir enumeration hazirlayin.
Ayni sekilde aldigi parametreye gore yilin ayini donduren bir fonksiyon yaziniz.
*/

typedef enum{
	ocak = 1,
	subat,
	mart,
	nisan,
	mayis,
	haziran,
	temmuz,
	agustos,
	eylul,
	ekim, 
	kasim,
	aralik
	
}aylar;
 
void ayi_goster (aylar canan)
{
	switch(canan)
	{
		case ocak: 
			printf("Ocak");
		break;
		
		case subat: 
			printf("Subat");
		break;
		
		case mart: 
			printf("Mart");
		break;
		
		case nisan: 
			printf("Nisan");
		break;
		
		case mayis: 
			printf("Mayis");
		break;
		
		case haziran: 
			printf("Haziran");
		break;
		
		case temmuz: 
			printf("Temmuz");
		break;
		
		case agustos: 
			printf("Agustos");
		break;
		
		case eylul: 
			printf("Eylul");
		break;
		
		case ekim: 
			printf("Ekim");
		break;
		
		case kasim: 
			printf("Kasim");
		break;
		
		case aralik: 
			printf("Aralik");
		break;
		
		default:
			printf("Boyle bir ay yok");
		break;
	}	
} 

 
int main()
{
	aylar can = 9; //aylar can = eylul;
	
	ayi_goster(can);
	
	
	return 0;
}
