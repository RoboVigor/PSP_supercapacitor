#ifndef __G474_FDCAN_H
#define __G474_FDCAN_H

#include "main.h"
#include <string.h>
#include <stdint.h>
#include "dcdc.h"
#include "fdcan.h"

void fdcan2_config(void);
void send_capinfo();
void protocol_pack (uint8_t * sendBuffer, uint16_t cmdID, uint8_t *data);
uint8_t Get_CRC8_Check_Sum(unsigned char *pchMessage, unsigned int dwLength);
uint16_t Get_CRC16_Check_Sum(unsigned char *pchMessage, unsigned int dwLength);



#endif
