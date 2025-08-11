#include <stdio.h>
/*
kullanici tarafindan girilen A ve B dizilerine sirasiyla N ve K tamsayi girilmektedir. 
Bu iki dizinin birlestirilerek tek bir dizi haline getirilmesini saglayan C programini 
asagidaki fonksiyon prototipini kullanarak yaziniz.

void birlestir(int A[], int B[], int C[], int N, int K)
*/
//int A[]=int *A

void birlestir(int A[], int B[], int C[], int n, int k)
{
	int i;
	for(i=0; i<n; i++){
		C[i]=A[i];
	}
	for(i=n; i<n+k; i++){
		C[i] = B[i-n];
	}
	/*  // main fonksiyonunda ekrana bastirma yapabiliriz cunku birlesik dizisinin adresini gonderdik ve adresteki degisiklik tum kodu etkiler!
	for(i=0; i<n+k; i++){
		printf("C[%d] = %d\n", i, C[i]);
	}*/
}

int main(){
	int n,k;
	int i;
	
	printf("ilk dizinin eleman sayisini giriniz: ");
	scanf("%d", &n);
	
	int A[n];
	
	for(i=0;i<n;i++)
	{
		printf("birinci dizinin %d. elemani: ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("ikinci dizinin eleman sayisini giriniz: ");
	scanf("%d", &k);
	
	int B[k];
	
	for(i=0;i<k;i++)
	{
		printf("ikinci dizinin %d. elemani: ",i+1);
		scanf("%d",&B[i]);
	}
	
	int birlesik_dizi[n+k];
	
	birlestir(A,B,birlesik_dizi,n,k);		
	
	for(i=0;i<n+k;i++){
		printf("birlesik_dizi[%d] = %d\n", i, birlesik_dizi[i]);
	}
	
	return 0;
}
