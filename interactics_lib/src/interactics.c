/*
 * interactics.c
 *
 *  Created on: Jun 25, 2022
 *      Author: hoyeon_yu
 */


#include "interactics.h"

/**
  * @brief This function prints a string message by USART.
  * @details
  * char *msg = "1\n\r";
    SerialPrint(&huart3, (uint8_t*)msg, strlen(msg));
  */
void SerialPrint(UART_HandleTypeDef *huar, const uint8_t *msg, uint16_t msgSize){
    HAL_UART_Transmit(huar, msg, msgSize, 0xFFFF);
}
