#ifndef _MAIN_H
#define _MAIN_H

#include <stdint.h>

#define LED_WIDTH	128
#define LED_HEIGHT	128

// multiple of 15
#define ZOOM 6


#define SIMULATOR

#define ATTRIBUTES	__attribute__((constructor));

typedef uint8_t (*tick_fun)(void);

void registerAnimation(tick_fun tick, uint16_t t, uint16_t duration);
void registerApp(tick_fun tick, uint16_t t);

#endif

