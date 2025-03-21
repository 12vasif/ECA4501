#include<reg51.h>
#include<stdio.h>
void main()
{
	unsigned char i;
	unsigned long fact=1;
	for(i=1;i<=10;i++)
	{
		fact=fact*i;
	}
}
