#include <STC32G.h>
#include "config.h"

#define pmode(a , b , c) P ## a ## M0=b; ## P ## a ## M1=c;

void main()
{
	EAXFR = 1;
	WTST = 0x00;
	pmode(0 , 0 , 0);
	pmode(1 , 0 , 0);
	pmode(2 , 0 , 0);
	pmode(3 , 0 , 0);
	pmode(4 , 0 , 0);
	pmode(5 , 0 , 0);
	pmode(6 , 0 , 0);
	pmode(7 , 0 , 0);
	
	while(1)	// Ö÷Ñ­»·
	{
		
	}
}