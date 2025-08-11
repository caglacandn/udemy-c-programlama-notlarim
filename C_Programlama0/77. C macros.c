#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*(r)*(r))

int main()
{
	//predefined macros
	
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );//13. line
   printf("STDC :%d\n", __STDC__ );//???
    return 0;
}
