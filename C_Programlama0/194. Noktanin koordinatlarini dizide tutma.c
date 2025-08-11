#include<stdio.h>
/*
Daha once  yarattigimiz point structini kullanarak 5 tane nokta tutan bir dizi yaratin.
Her noktaya bir isim ekleyin ve her noktanin atamasini tanimlarken yapin.
Fonksiiyon yardimiyla ekrana bastin.
*/


/*
typedef struct nokta{
	char isim[10];
	float x_ekseni;
	float y_ekseni;
}Nokta;
*/
struct nokta{
	char isim[10];
	float x_ekseni;
	float y_ekseni;
};
void ekrana_yazdir(struct nokta p[], int n) //(Nokta p[], int n)
{
	
	int i;
	for(i=0; i<n; i++)
	{
		printf("%s = (%.3f, %.3f)\n",p[i].isim, p[i].x_ekseni, p[i].y_ekseni);
	}

}



int main()
{
	
	struct nokta dizi[5]={{"Can",3,4 }, {"Hakan",578,38.98}, {"Cagla",5,12.45}, {"Baran", 19,12}, {"Burak", 21, 3}};
	//Nokta dizi[5]={{"Can",3,4 }, {"Hakan",5,3}, {"Cagla",5,12.45}, {"Baran", 19,12}, {"Burak", 21, 3}};
	
	ekrana_yazdir(dizi,5);
	
	return 0;
}
