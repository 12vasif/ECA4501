#include <reg51.h>
void main(){
	unsigned long temp,array[]={0xff223344,0xaa336699,0x11223344,0x3344556,0x88aa3311};
	unsigned char i,pos,neg;
	CY=0;
	for(i=0;i<5;i++){
		temp=array[i]<<1;
		if(CY==1)neg++;
		else pos++;
		CY=0;
	}
	while(1);
}