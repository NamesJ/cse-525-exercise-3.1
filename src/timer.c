#include "utils.h"
#include "printf.h"
#include "peripherals/timer.h"

const unsigned int interval = 200000;
unsigned int curVal = 0;

void timer_init ( void )
{
	put32(LOCAL_TIMER_CTRL, LOCAL_TIMER_CTRL_INIT | interval); // enable timer & interrupt, set interval (re-load value)
}

void handle_timer_irq( void ) 
{
	printf("Timer interrupt received\n\r");
	put32(LOCAL_TIMER_CLR, LOCAL_TIMER_CLR_CLEAR); // clear interrupt flag - handled
}
