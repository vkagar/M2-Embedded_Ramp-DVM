#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#define F_CPU 16000000UL 	// Clock Frequency of MCU is 16 MHz
#define LED_PORT (PORTD)    // LED Port Number
#define LED_PIN  (PORTD3)   //LED Pin number
#define BUTTON_SENSOR  (PORTD1)   // Port for Button Sensor
#define TEMP_SENSOR  (PORTD2)   // Port for Temperature Sensor


#include <util/delay.h>
#include <avr/io.h>


//Function Definitions

//Initialize all the Peripherals and pin configurations
void peripheral_init(void);

void InitADC();

//Function to turn LED ON
void TurnLED_ON();

//Function to turn LED OFF
void TurnLED_OFF();

//Activity 1 to Turn ON LED if switches for Button sensor and Heat sensor are pressed
int Activity1_LED(void);
#endif // ACTIVITY1_H_INCLUDED
