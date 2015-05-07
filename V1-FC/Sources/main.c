#include "derivative.h"
#include "TFC\TFC.h"


int main(void)
{
	
	TFC_Ticker[0] = 0;
	do 
	{
		TFC_HBRIDGE_ENABLE;
		TFC_SetServo;
		
	}while (/*straight line detected*/);
	
	return 0;
}
