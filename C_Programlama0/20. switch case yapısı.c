#include <stdio.h>
//switch-case yapýsý
//if else if gibi
int main(){
	
	int day=4;
	
	switch(day){
		
		case 1:printf("pazartesi"); 
		break; //her caseden sonra break yazýlmalý
		case 2:printf("salý");
		break; 
		case 3:printf("carsamba");
		break; 
		case 4:printf("persembe");
		break; 
		case 5:printf("cuma");
		break; 
		case 6:printf("cumartesi");
		break;
		case 7:printf("pazar");
		break;
		default: printf("gecersiz gun"); //else gibi hiçbir case'e girmezse
		break;
	}
	/*  // ayný kodu if else if ile yazmak istersek
	int day=4;
	if(day==1){
		printf("pazartesi"); 
	}
	else if(day==2){
		printf("salý");
	}
	else if(day==3){
		printf("carsamba");
	}
	else if(day==4){
		printf("persembe");
	}
	else if(day==5){
		printf("cuma");
	}
	else if(day==6){
		printf("cumartesi");
	}
	else if(day==7){
		printf("pazar");
	}
	else{
		printf("gecersiz gun");
	}
	*/
	return 0;
}
