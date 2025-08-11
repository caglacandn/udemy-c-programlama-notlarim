#include <stdio.h>
/*
2 adet fonksiyon yazin
karakter dizisinin boyunu hesaplayan bir fonksiyon yazin.(adrsiyle cagirma yontemini kullanin)
2 kelimenin ortak harf sayisini hesaplayan ve bunu adresle gönderen bir fonksiyon yazin
Kullanicidan 2 kelime girmesini isteyen daha sonra yukaridaki
fonksiyonlari kullanarak ilk girilen karakter dizisinin boyunu 
kullanicidan 2 kelime girmesini ve 2 kelime arasinda ortak olan harf
sayisini ekrana bastiran bi c programi yazdirin.
Ornek program ciktisi asagidaki gibidir.

Lutfen bir cumle veya kelime giriniz:
can boz
karakter diziimin boyu: 7
lutfen 2 kelime giriniz:
haci osman
haci ve osman 1 ortak harfe sahiptir.
*/
#define max 40

void boy(char cumle[max], int *boy)
{
	int i;
	for(i=0; cumle[i] !='\0' ; i++);
	*boy=i;
}
//ortak harf fonksiyonu tam anlamiyla dogru calismiyooor
void ortak_harf(char tab[max], char can[max], int *t)

{

int i;

int kelime1, kelime2;

boy(tab,&kelime1);

boy(can,&kelime2);

*t=0;

int say1[26]={0};

int say2[26]={0};

for(i=0 ; i<kelime1 ; i++)

        {

            say1[tab[i]-'a']++;

        }

    for(i=0 ; i<kelime2 ; i++)

        {

            say2[can[i]-'a']++;

        }

    for(i=0 ; i<26 ; i++)

        {

           if(say1[i]<say2[i])

                {

                    *t += say1[i];

                }

            else if(say2[i]<say1[i])

                {

                    *t += say2[i];

                }

            else

                {

                    *t += say1[i];   // say2[i] de olabilir eþit olduklarý için

                }

        }

}

int main(){
	
	char cumle[max],tab[max];
	int i=0;
	int a;
	int r;
	
	printf("Lutfen bir cumle veya kelime giriniz: \n");
	do
	{
		scanf("%c",&cumle[i]);
		i++;
		
	} 
	while(cumle [i-1] != '\n');
	cumle[i-1]='\0';
	
	boy(cumle, &a);
	printf("karakter dizimin boyu: %d",a);
	
	printf("lutfen 2 kelime giriniz:\n");
	scanf("%s %s",&cumle,&tab);
	
	ortak_harf(cumle,tab,&r);
	
	printf("%s ve %s %d kadar ortak karaktere sahiptir.\n",cumle,tab,r);
	
	return 0;
}





