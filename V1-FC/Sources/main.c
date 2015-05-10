#include "derivative.h"
#include "TFC\TFC.h"


int main(void)
{
	uint32_t t, i=0;
	TFC_Init();
	
	for (;;)
	{
		
		TFC_SetServo(0,0);
		StartMotor();
		
		if (/*horizontal black line*/)
		{
			TFC_SetMotorPWM(0.5,0.5);
		} 
		else
		{
			stopMotor();
		}
		
	}
	
}

void startMotor()
{
	TFC_HBRIDGE_ENABLE;
}

void stopMotor() 
{
	TFC_SetMotorPWM(0,0);
	TFC_HBRIDGE_DISABLE;
}

void servoDirection(float Position)
{
	if(TFC_Ticker[0] >= 20)
	{
		TFC_Ticker = 0;
		TFC_SetServo(0, Position);
	}
}

