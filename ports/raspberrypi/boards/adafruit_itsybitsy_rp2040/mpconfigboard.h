#define MICROPY_HW_BOARD_NAME "Adafruit ItsyBitsy RP2040"
#define MICROPY_HW_MCU_NAME "rp2040"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO17)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO3)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO2)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO18)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO19)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO20)

#define DEFAULT_UART_BUS_RX (&pin_GPIO1)
#define DEFAULT_UART_BUS_TX (&pin_GPIO0)

// Flash chip is W25Q64 connected over QSPI
#define TOTAL_FLASH_SIZE (8 * 1024 * 1024)
