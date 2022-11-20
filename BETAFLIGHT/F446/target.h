#pragma once

#define USE_TARGET_CONFIG

#define TARGET_BOARD_IDENTIFIER "F446" 
#define USBD_PRODUCT_STRING     "F446"

#define LED0_PIN                PB9  

#define USE_EXTI

/************ SPI1 GYRO *************/
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN   	 PA6
#define SPI1_MOSI_PIN   	 PA7

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define GYRO_1_CS_PIN           PC0
#define GYRO_1_SPI_INSTANCE     SPI1
#define GYRO_1_ALIGN            CW0_DEG

//#define USE_GYRO_SPI_MPU6500
//#define USE_ACC_SPI_MPU6500
//#define GYRO_1_SPI_INSTANCE    SPI1
//#define GYRO_1_CS_PIN          PC5
//#define GYRO_1_ALIGN           CW270_DEG

#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN PC13
//#define GYRO_1_EXTI_PIN PC4
#define USE_MPU_DATA_READY_SIGNAL

/************ SPI2 OSD && FLASH *************/
#define USE_SPI_DEVICE_2

#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN   	 PB14
#define SPI2_MOSI_PIN   	 PB15

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI2
#define MAX7456_SPI_CS_PIN      PB10

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define FLASH_CS_PIN            PB12
#define FLASH_SPI_INSTANCE      SPI2
/************ I2C1 BARO *************/
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C_DEVICE              (I2CDEV_1)
#define I2C1_SCL                PB6        // SCL pad
#define I2C1_SDA                PB7        // SDA pad

#define BARO_I2C_INSTANCE       (I2CDEV_1)
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_MS5611

//#define MAG_I2C_INSTANCE        (I2CDEV_1)
#define USE_MAG
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_LIS3MDL

#define USE_CMS
#define USE_VCP
#define USB_DETECT_PIN          PA13
#define USE_USB_DETECT

/************ SERIAL PORTS *************/
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_TX_PIN            PC10
#define UART3_RX_PIN            PC11

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define USE_SOFTSERIAL1

#define SERIAL_PORT_COUNT       7

#define USE_ESCSERIAL

/************ ADC CHANNELS *************/
#define USE_ADC
#define ADC_INSTANCE            ADC1
#define ADC1_DMA_OPT            1
#define CURRENT_METER_ADC_PIN   PC1
#define VBAT_ADC_PIN            PC2
#define RSSI_ADC_PIN            PC3

/************ OTHERS *************/
#define ENABLE_DSHOT_DMAR       DSHOT_DMAR_ON	

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PB1  // USER 1
#define PINIO2_PIN                  PB0  // USER 2
#define USE_PINIOBOX

#define MAX_SUPPORTED_MOTORS    8

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff

#define USABLE_TIMER_CHANNEL_COUNT 8
#define USED_TIMERS             (TIM_N(1) | TIM_N(3) | TIM_N(5) | TIM_N(8))
