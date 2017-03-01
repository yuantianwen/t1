#include <stdio.h>


int f()
{
	printf("hello");	
	return 1;
}

int main1()
{
	int (*func)();
	func = &f;
	int i=0;
	int iHash =0;
	printf(" size : %d\n",sizeof(void*));
	printf("º¯ÊýµØÖ· %d",func);
		
	for(i=0; i<sizeof(void*); i++){
    iHash = (iHash<<3) + ((unsigned char *)&func)[i];
	printf("%d",iHash);
  }
	return 1;
}
