#include<reg51.h>
void main(){

	unsigned long array[]={0x33334444,0x10008888,0xffffbbbb,0x00009999,0x11110000};
	unsigned long smallest=0xffffffff,i;
	for(i=0;i<5;i++)
	{
		if (smallest>array[i]);
		smallest=array[i];
	}
}
