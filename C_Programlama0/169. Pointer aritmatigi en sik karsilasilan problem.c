#include <stdio.h>

int main()
{
	int arr[]={10, 20, 30, 40, 50};
	int *ptr;
	ptr=arr;
	
	printf("1. elemanim %d'dir\n",arr[0]);
	printf("1. elemanim %d'dir\n\n",*(ptr));
	printf("2. elemanim %d'dir\n",arr[1]);
	printf("2. elemanim %d'dir\n\n",*(ptr+1));
	printf("3. elemanim %d'dir\n",arr[2]);
	printf("3. elemanim %d'dir\n\n",*(ptr+2));
	printf("4. elemanim %d'dir\n",arr[3]);
	printf("4. elemanim %d'dir\n\n",*(ptr+3));
	printf("5. elemanim %d'dir\n",arr[4]);
	printf("5. elemanim %d'dir\n\n",*(ptr+4));
	//ptr++ = ptr+1;
	printf("%d\n",ptr);//6487552
	printf("%d\n",ptr+1);  //6487556
	return 0;
}
