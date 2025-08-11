/*
 * atm.c
 * Tek bir kullanicinin hesabini tutan bank atm programi
 * Cagla Candan
 * 20120101007
 */


#include <stdio.h>

/*bu iki degisken const olarak tanimlandigi icin 
 * programda calisma esnasinda degeri degistirelemez*/
const int PSWRD = 1234;         /*Kullanicinin sifresi*/
const int INIT_BALANCE = 100;   /* baslangic bakiye   */

int main(){

	printf("\n               Merhaba, bankaniza hos geldiniz!\n\n");
	
	int PSWRDx;     /*kullaniciden alinan sifreyi sistemde kayitli sifreyle karsilastirmak icin PSWRDx degiskeni tanimlanmistir.*/
	printf("  islem yapmak icin lutfen 4 haneli sifrenizi giriniz: ");
	scanf("%d", &PSWRDx);
	
	
	int i;
    	
   for(i=0; i<2; i++){  /* kullanici sifresini yanlis girdigi zaman tekrar deneme hakki olmasi icin bu kisim donguye alinmistir.*/
    	                /*kullaniciya toplamda 3 defa sifre girme hakki taninmistir.*/
		if (PSWRDx != PSWRD ){
    		printf("  girdiginiz sifre yanlis tekrar deneyin: ");
    		scanf("%d", &PSWRDx);	
		}
    }
    
	
	     
    if (PSWRDx != PSWRD )    printf(" girdiginiz sifre hatali !!!");
	/*3 defa sifre girme hakkinda dogru sifre girilmezse hata mesaji verilip program kapanmaktadir.*/
	
	
	
    if (PSWRDx == PSWRD) { /*kullanicidan alinan sifre dogru ise if fonksiyonu calisir.*/
        
		  
	    printf ("\n  Hos geldiniz Ammar Daskin.\n"); /*sifre dogru girildiginde kullanicinin adiyla hos geldiniz mesaji vermektedir.*/
		  
		  
		int islem;	/* ATM ana menusunde tanimlanan islemleri secmek icin tanimlanmis degiskendir. */
	    int ekle=0; /* bakiyeye eklenmek istenen para tutari icin tanimlanmis degiskendir.*/
	    int cek=0;  /* bakiyeden cekilmek istenen para tutari icin tanimlanmis degiskendir*/
		int Balance = INIT_BALANCE; /* const ile tanimlanmis degistirilemeyen ilk bakiye, Balance isimli degiskene atanarak 
		para ekleme veya cekme islemlerinden sonra yeni bakiyenin gorulmesi saglanmistir. */
		
		
		
		do{  /*Ana menunun her islemden sonra tekrar ekrana gelmesi icin do-while dongusu kullanilmistir.*/
		  		
		  		
    	    printf("\n\n\n        *** Ana Menu *** \n");          /* switch-case fonksiyonu icin islemler numaralandirilmistir*/
    	    printf("    Para yatirmak icin ------------> 1\n");    
    	    printf("    Para cekmek icin --------------> 2\n");
    	    printf("    Hesap bakiyenizi gormek icin --> 3\n");
    	    printf("    Cikmak icin -------------------> 4\n\n");
    	    printf("      Lutfen yapmak istediginiz islemi giriniz: ");   
    	    scanf("%d", &islem );        /*islem degiskeni icin kullanicidan girdi alinir.*/
    	    printf("\n");
    	 	 
			    
				
		      
			switch (islem){  
			        
	         
			    case 1:   //Para yatirmak icin 1
		      	    
	                printf("     Hesabiniza eklemek istediginiz miktari giriniz: ");
	                scanf("%d", &ekle);   /* kullanicidan eklenecek miktar icin girdi alinir */
	                 
	                if(ekle >= 0){ 
	                    printf("     Isleminiz basarili sekilde gerceklesmistir.\n");
	                	Balance += ekle; /*eklenen miktar bakiyenin guncellenmesi icin Balance degiskenine toplamayla atanmistir*/ 
	                	printf("     guncel bakiyeniz: %d", Balance );
					}
					    
					    
				    if (ekle<0) {
				    	printf("\nisleminiz gerceklestirilememistir. Girmis oldugunuz sayinin pozitif olduguna emin olun. "); 
					/* kullanici islemi dogru tamamlayamayinca hata mesaji verilip ana menuye donmekte*/
					}  
					
	            break ;
	               
			    
	                 
			 
   	            case 2:  //Para cekmek icin 2
   	          	     
                    
			        printf("     Hesabinizdan cekmek istediginiz miktari giriniz: ");
	                scanf("%d", &cek);   /* kullanicidan cekilenecek miktar icin girdi alinir */
	                
	                if(cek >= 0 && cek <= Balance ){
	                	
	                    printf("     isleminiz basarili sekilde gerceklesmistir.\n");
	                	
	                }
	                
	                if(cek < 0 || cek > Balance){
	                	
	                    printf("  isleminiz gerceklestirilememistir. Girmis oldugunuz sayinin bakiyenizden az ve pozitif olduguna emin olun.\n");	 
					    /* kullanici islemi dogru tamamlayamayinca hata mesaji verilip ana menuye donmekte*/
					}
					
					
					if (cek >= 0 && cek <= Balance){
						Balance -= cek; /*cekilenen miktar bakiyenin guncellenmesi icin Balance degiskenine cikarmayla atanmistir*/ 
	                	printf("     guncel bakiyeniz: %d", Balance );
	                	
	                 /* bu kisimi if(cek >= 0 && cek <= Balance ) dongusune alinca Balance degiskeni if(cek < 0 || cek > Balance) dongusunden önce 
					 tanimlaniyor ve if(cek < 0 || cek > Balance) dongusunde guncellenmis bakiye ile cek degiskenini karsilastirdigi icin yapilan
					 islemden sonra ekrana hem "isleminiz basarili sekilde gerceklesmistir." hem "isleminiz gerceklestirilememistir. Girmis oldugunuz 
					 sayinin bakiyenizden az ve pozitif olduguna emin olun." mesaji vermekteydi.  */  
					
					}
					
					
                break;
                
                	
				
			    case 3:  //Hesap bakiyenizi gormek icin 3 
			        
	          	    printf("     bakiyeniz: %d\n", Balance );
                    /* eklenen veya cekilen para oldugunda bakiye guncellenmektedir */
			    break;
			    
    
    
	            case 4:  //Cikmak icin 4 giriniz
	          	
                    printf("   Tesekkurler! ");
					 
                return 0;
                
  
    
                default:  // 1,2,3,4 sayilarini girmedigi zaman 
                
                    printf("  tanimladiginiz islem gerceklesmemekte.");
                
            }
			  
		} while( 1 >= 0 );  /*do-while dongusunun hep calismasi icin true olan bir islem ile sartlanmistir*/
    
	}
		   
	return 0;
}
