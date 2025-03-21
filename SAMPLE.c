#include <reg51.h>

void main()
{
while(1)
	{
		unsigned int num1, num2;
		unsigned long int product;
		
		num1= 0xFFFF;
		num2= 0xFFFF;
		
		product= (unsigned long int)num1 * num2;
		P0= product & 0xff;
		P1= (product & 0xff00)>>8;
		P2= (product & 0xff0000)>>16;
		P3= (product & 0xff000000)>>24;
	}
}
		