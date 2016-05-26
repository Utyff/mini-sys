#ifndef __SBUS_H
#define __SBUS_H

#ifdef __cplusplus
 extern "C" {
#endif


#include "usart.h"

extern volatile uint8_t uart_data[26];
extern volatile uint8_t HAL_UART_ERROR;
extern volatile uint8_t SBUS_RECEIVED;
extern volatile uint16_t channels[16];

#endif /* __SBUSH_H*/