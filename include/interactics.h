/*
 * interactics.h
 *
 *  Created on: Jun 25, 2022
 *      Author: hoyeon_yu
 */

#ifndef INC_INTERACTICS_H_
#define INC_INTERACTICS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "usart.h"

void SerialPrint(UART_HandleTypeDef *huar, const uint8_t *msg, uint16_t msgSize);

#ifdef __cplusplus
}
#endif

#endif /* INC_INTERACTICS_H_ */
