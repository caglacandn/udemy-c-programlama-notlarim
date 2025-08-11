#include <stdio.h>
/*
Enum: tek tip sembolik listelere denir.
ornek: 
enum istanbul{
	besiktas,
	kadikoy,
	....
};

ornekte de goruldugu uzere enum yazdiktan sonra isim yazilir ve aldigi degeler {}
arasinda virgulle ayrilir. 
Ayrica bu ornekte besiktas 0, kadikoy 1... seklinde degerler alir, enumeration yapildiginda
icindeki degerler numaralandirilir. 
*/
//***************************************

/*
enum istanbul{
	besiktas,
	sisli,
	beyoglu,
	uskudar,
	kadikoy,
	eminonu
};

enum istanbul x = besiktas;  //x=0;
*/

//************************************

/*
enum istanbul{
	besiktas,	//besiktas = 0;
	sisli=100,	//sisli 0 100;
	beyoglu,	//beyoglu = 101;
	uskudar,
	kadikoy,
	eminonu
};
*/

//******************************************





enum renkler {mavi,kirmizi, sari, yesil};
//typedef enum {mavi,kirmizi, sari, yesil}renkler;	//typedef enum renkler {mavi,kirmizi, sari, yesil}Renk;

int main()
{
	
	enum renkler can = sari;  //can=2;
	//renkler can = sari; //can=2;
	
	printf("%d",can);
	
	return 0;
}
