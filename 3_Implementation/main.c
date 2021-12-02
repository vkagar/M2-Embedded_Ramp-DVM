/*
 */
#include"Activity1.h"
#include"Activity2.h"
#include"Activity3.h"
#include"Display.h"
#include <avr/io.h>

int main(void)
{

    uint16_t temp;
    while(1)
    {
        if(Activity1_LED()==1)
        {

            TurnLED_ON();//Turn LED ON
            temp=activity2_GetADC(); //Get the ADC value
            activity3_PWM(temp); //PWM output based on temperature
		    activity4_USARTWrite(temp); //To Serial monitor to print Temperature
        }
        else
        {
            TurnLED_OFF();
            _delay_ms(200);
        }
    }

    return 0;
}
