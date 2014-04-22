#ifndef TIMER_H
#define TIMER_H

#include "internal/Timer_internal.h"

/*****************************************************************************/
// Delays:

void sleep(uint8_t time);
void mSleep(uint16_t time);
void delayCycles(uint16_t dly);

#endif
