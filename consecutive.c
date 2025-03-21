#include <reg51.h>
void main()
{
	unsigned char array[]={0x57,0xfc};
	unsigned char i,ones,zeros;
	unsigned long temp;
	CY=0;
	for(i=0;i<8;i++)
	{
		temp=array[0]>>1;
		if(CY==1)ones++;
		else zeros++;
	}
	while(1);
}
