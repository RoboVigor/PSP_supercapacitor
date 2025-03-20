#ifndef __G474_FDCAN_H
#define __G474_FDCAN_H

#include "main.h"
#include <string.h>
#include <stdint.h>
#include "dcdc.h"
#include "fdcan.h"

void fdcan2_config(void);
void send_capinfo();
uint8_t Get_CRC8_Check_Sum(unsigned char *pchMessage, unsigned int dwLength);
uint16_t Get_CRC16_Check_Sum(unsigned char *pchMessage, unsigned int dwLength);



#endif
