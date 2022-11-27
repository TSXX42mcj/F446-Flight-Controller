#pragma once

#define TARGET_BOARD_IDENTIFIER "MF46"
#define USBD_PRODUCT_STRING  "F446"

#define USE_TARGET_CONFIG

#define LED1                    PB9  //Green

// *************** SPI1 Gyro & ACC *******************
//#define USE_DUAL_GYRO
//#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS

#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN   	 PA6
#define SPI1_MOSI_PIN   	 PA7

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW0_DEG
#define MPU6000_CS_PIN          PC0
#define MPU6000_SPI_BUS         BUS_SPI1

//#define USE_IMU_MPU6500
//#define IMU_MPU6500_ALIGN       CW270_DEG
//#define MPU6500_SPI_BUS         BUS_SPI1
//#define MPU6500_CS_PIN          PC5

#define USE_EXTI
#define GYRO_INT_EXTI            PC13
//#define GYRO_INT_EXTI            PC4
#define USE_MPU_DATA_READY_SIGNAL

// *************** I2C /Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB6
#define I2C1_SDA                PB7

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310

#define USE_OPFLOW
#define USE_RANGEFINDER

// *************** SPI2 OSD ***************************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN   	 PB14
#define SPI2_MOSI_PIN   	 PB15

#define USE_MAX7456
#define MAX7456_CS_PIN          PB10
#define MAX7456_SPI_BUS         BUS_SPI2

// *************** SPI2 SD Card  ********************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_SPI_BUS          BUS_SPI2
#define M25P16_CS_PIN           PB12
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP
#define VBUS_SENSING_PIN        PA13
#define VBUS_SENSING_ENABLED

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
#define SOFTSERIAL_1_TX_PIN      PA2
#define SOFTSERIAL_1_RX_PIN      PA2

#define SERIAL_PORT_COUNT       7

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
//#define SERIALRX_PROVIDER       SERIALRX_SBUS
//#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** ADC ***************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC_CHANNEL_1_PIN           PC1
#define ADC_CHANNEL_2_PIN           PC2
#define ADC_CHANNEL_3_PIN           PC3
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_1
#define VBAT_ADC_CHANNEL            ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_SOFTSERIAL)
#define CURRENT_METER_SCALE     179

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PB1  // USER 1
#define PINIO2_PIN                  PB0  // USER 2

#define USE_DSHOT
#define USE_ESC_SENSOR

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define MAX_PWM_OUTPUT_PORTS       8

// ************* SAVE FLASH ***************
//#define SKIP_CLI_COMMAND_HELP
//#define SKIP_CLI_RESOURCES
//#define SKIP_TASK_STATISTICS
//#define CLI_MINIMAL_VERBOSITY

