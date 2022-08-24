#include "C:\Mohamed files\New folder\ERU SUB\ARM Egyfwd\ARM_Egyfwd\Src\Mcal\DIO\inc\DIO.h"
#include "C:\Mohamed files\New folder\ERU SUB\ARM Egyfwd\ARM_Egyfwd\Src\Mcal\Timer\inc\Timer.h"

void SystemInit(void){}
	
int main()
{
	GPIO_PORTF_Init();
	//RESET_systick();

	while(1)
	{
		DelayFun(2);
		toggelPin(1,1);

	}
}