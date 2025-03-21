#include<reg51.h>
void main()
{
	unsigned char LUT[]={1,4,9,16,25,36,49,64,81,100};
	unsigned char i,square;
	for(i=1;i<11;i++)
	{
		square=LUT[i-1];
	}
}