#ifndef DEFINES_2_x_H
#define DEFINES_2_x_H

#ifdef MASTER_OR_SINGLE		// layout 2.2 and 2.7 have buzzer on the slave board.
	#define HAS_BUZZER
#endif

// need this lower than default in order to prevent overcurrent throttling
#define MOTOR_AMP_CONV_DC_AMP 0.0201465201465

// by AILIFE4798
 
#define HALL_A		PA0
#define HALL_B		PB11
#define HALL_C		PA1

#define LED_RED			PA15
#define LED_ORANGE		PB3
#define LED_GREEN		PB4
#define UPPER_LED		PB5
#define LOWER_LED		PB8
#define BUZZER			PB9
#define VBATT			PA4
#define CURRENT_DC		PA6
#define SELF_HOLD		PB2
#define BUTTON			PA5


// Brushless Control DC (BLDC) defines
#define BLDC_GH PA10            // green
#define BLDC_GL PB15            
#define BLDC_BH PA9             // blue
#define BLDC_BL PB14            
#define BLDC_YH PA8             // yellow
#define BLDC_YL PB13            

#define TIMER_BLDC_PULLUP	GPIO_PUPD_NONE	// robo: not sure if some boards indeed need GPIO_PUPD_PULLUP like 2.2 or 2.3


// Timer BLDC short circuit emergency shutoff define
//#define TIMER_BLDC_EMERGENCY_SHUTDOWN	P_UNKOWN


// GD32F130 USART0 TX/RX:	(PA9/PA10)AF1	, (PB6/PB7)AF0 , 	(PA2/PA3)AF1 , (PA14/PA15)AF1 GD32F130x4 only!
#define USART0_TX	PB6
#define USART0_RX	PB7

// GD32F130 USART1 GD32F130 TX/RX: (PA14/PA15)AF1 , (PA2,PA3)AF1	, (PA8/PB0)AlternateFunction4
#define USART1_TX       PA2
#define USART1_RX       PA3

#endif 