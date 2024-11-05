

#ifndef I2C_HQ_
#define I2C_HQ_

#include "stm32f429xx.h"

void I2C1_init(void);
void I2C1_byteRead(char saddr, char maddr, char* data);
void I2C1_burstRead(char saddr, char maddr, int n, char* data);
void I2C1_burstWrite(char saddr, char maddr, int n, char* data);

#endif /* I2C_HQ_ */
