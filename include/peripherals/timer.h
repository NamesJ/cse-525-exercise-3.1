#ifndef	_P_TIMER_H
#define	_P_TIMER_H

#include "peripherals/base.h"

#define LOCAL_TIMER_CTRL	(LOCAL_PBASE+0x34)
#define LOCAL_TIMER_CLR	(LOCAL_PBASE+0x38)

#define LOCAL_TIMER_CTRL_INIT	(3 << 28)
#define LOCAL_TIMER_CLR_CLEAR	(1 << 31)

#endif  /*_P_TIMER_H */
