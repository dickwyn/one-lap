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

		if(TFC_Ticker[1] >= 125)
		{
			TFC_Ticker[1] = 0;
			t++;
			if(t>4)
			{
				t=0;
			}			
			TFC_SetBatteryLED_Level(t);
		}
		break;

		if (/*horizontal black line*/)
		{
			TFC_SetMotorPWM(0.6,0.6);
			if (/*straight line*/)
			{
				straightLine();
			}
			else 
			{
				TFC_SetMotorPWM(0.4,0.4);
				curvedLine();
			}
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

void straightLine ()
{
	//taking in data for 44 to 84 bit
	//find the mid point
	//move servo direction servoDirection()
	//set speed to 0.8
}

void curvedLine()
{
	if (/*data for bit 0 to 43*/)
	{
		//IF taking in data for bit 0 to 43
		//move servo to left
	}
	else if (/*data for bit 85 to 128*/)
	{
		//ELSE IF taking in data for bit 85 to 128
		//move servo to right
	}
	else 
	{
		//invoke midpoint
		//set servo
	}
	//direction servo to direction servoDirection()
}

float midpoint(float hexNumber) 
{
	//add the two left and right bits and divide by 2
}


