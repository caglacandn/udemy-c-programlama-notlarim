//�f else if else
//Kullan�c�dan pozitif bir tamsay�y� girdi olarak al�p, bu say�n�n 13 ce/veya 17'ye b�l�n�p b�l�nmedi�ini bularak bu durumu mesaj ile belirten bir c program� yaz�n�z.
#include<stdio.h>
int main(){
	int a;
	printf("Lutfen pozitif bir tam sayi giriniz: ");
	scanf("%d",&a);
	if(a>0){
		if(((a%13)==0) && ((a%17)==0)){
			printf("girdiginiz sayi 13'e ve 17'ye tam bolunmektedir.");
		}
		else if((a%17)==0){
			printf("girdiginiz sayi 17'ye tam bolunmektedir.");
		}
		else if((a%13)==0){
			printf("girdiginiz sayi 13'e tam bolunmektedir.");
		}
		else{
			printf("girdiginiz sayi 13'e veya 17'ye tam bolunmemektedir.");
		}
	}
	else{
		printf("girdiginiz sayi pozitif tam sayi degildir!");
	}
	return 0;
}
