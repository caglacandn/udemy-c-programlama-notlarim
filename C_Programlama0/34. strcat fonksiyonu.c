#include <stdio.h>
#include <string.h>
//  strcat fonksiyonu:  iki karakter dizisini birleþtirir
int main(){
	
	char bosdizi[100]; //max karakter girilmeli
	
	strcpy(bosdizi,"Benim");     //Cagla'yý bosdiziye atar
	strcat(bosdizi," adim"); 
	strcat(bosdizi," Cagla");
	
	printf("%s", bosdizi);																
	
	return 0;
}
