#include "utils.h"
#include "printf.h"
#include "peripherals/timer.h"

const unsigned int interval = 200000;
unsigned int curVal = 0;
unsigned int countDown = 100;

void timer_init ( void )
{
	curVal = get32(TIMER_CLO);
	curVal += interval;
	put32(TIMER_C1, curVal);
}

void handle_timer_irq( void ) 
{
	curVal += interval;
	countDown--;
	put32(TIMER_C1, curVal);
	put32(TIMER_CS, TIMER_CS_M1);
	//printf("Timer interrupt received\n\r");
	if (countDown)
		printf("Countdown\t%d\n\r", countDown);
	else
		printf("Boom!!!");
}
