#include <stdio.h>
#include <string.h>
//  strcat fonksiyonu:  iki karakter dizisini birle�tirir
int main(){
	
	char bosdizi[100]; //max karakter girilmeli
	
	strcpy(bosdizi,"Benim");     //Cagla'y� bosdiziye atar
	strcat(bosdizi," adim"); 
	strcat(bosdizi," Cagla");
	
	printf("%s", bosdizi);																
	
	return 0;
}
