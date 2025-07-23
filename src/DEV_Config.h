/******************************************************************************
**************************Hardware interface layer*****************************
* | file      	:	DEV_Config.h
* |	version		  :	V1.0
* | date		    :	2020-06-16
* | function	  :	Provide the hardware underlying interface	
******************************************************************************/
#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_

#include <HardwareSerial.h>
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <pgmspace.h>

/**
 * data
**/
#define UBYTE   uint8_t
#define UWORD   uint16_t
#define UDOUBLE uint32_t

#define USE_SPI_4W  1
#define USE_IIC     0

#define IIC_CMD        0X00
#define IIC_RAM        0X40

/****************************************************************************************
    //Use the  library function definition
*****************************************************************************************/
//GPIO config

#define OLED_VCC_3V3_RED   "ABOVE DIN_MOSI_BLOW"
#define OLED_GND_BLACK     "BELOW BATTERY PIN (TOP RIGHT NEXT TO USB-C)"
#define OLED_RST_BROWN     12
#define OLED_DC_PURPLE     13
#define OLED_CS_ORANGE     14
#define OLED_CLK_YELLOW    15
#define OLED_DIN_MOSI_BLUE 16

#define OLED_RST_0    digitalWrite(OLED_RST_BROWN, LOW)
#define OLED_RST_1    digitalWrite(OLED_RST_BROWN, HIGH)

#define OLED_DC_0     digitalWrite(OLED_DC_PURPLE, LOW)
#define OLED_DC_1     digitalWrite(OLED_DC_PURPLE, HIGH)

#define OLED_CS_0     digitalWrite(OLED_CS_ORANGE, LOW)
#define OLED_CS_1     digitalWrite(OLED_CS_ORANGE, HIGH)

/*------------------------------------------------------------------------------------------------------*/
uint8_t System_Init(void);

void SPI4W_Write_Byte(uint8_t DATA);
void I2C_Write_Byte(uint8_t value, uint8_t Cmd);

void Driver_Delay_ms(unsigned long xms);
void Driver_Delay_us(int xus);

#endif

