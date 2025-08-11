//Basit kesirlerle dört iþlem hesabý
int main(){
	
	char op;
	int a,b;
	
	printf("Isleminizi seciniz(+,-): ");
	scanf("%c",&op);
	printf("iki tamsayi giriniz: ");
	scanf("%d%d",&a,&b);
	if(a==0||b==0){
		printf("islem yapilamiyor");
	}
	else{
		printf("1/%d %c 1/%d = ", a, op, b);
		switch(op){
			case '+': printf("%d/%d", (a+b), (a*b));
			break;
			case '-': printf("%d/%d", (a-b), (a*b));
			break;
			default: printf("operator tanimli degil");
			break;
		}
		
	}
	
	return 0;
}
