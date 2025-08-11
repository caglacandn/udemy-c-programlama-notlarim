#include <stdio.h>

int main(){
	
	//kisinin secimlerde yasal olarak oy kullanip kullanamayacagini ekrana bastiran
	//programi yaziniz
		
		int yas;
		printf("Lutfen yasinizi giriniz: ");
		scanf("%f"&yas);
		
		if(yas >= 18){
			printf("yasal olarak oy kullanabilirsiniz.");
		}
		else{
			printf("yasal olarak oy kullanamazsiniz buyude gel");
		}
	return 0;
}
