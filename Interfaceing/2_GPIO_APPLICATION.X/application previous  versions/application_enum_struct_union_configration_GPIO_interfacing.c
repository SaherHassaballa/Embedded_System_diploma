/* 
 * File:   application.c
 * Author: saher
 *
 * Created on 27 June 2026, 00:56
 */

#define _XTAL_FREQ 8000000UL

#include "application.h"

/*==============================================================
 *                      TYPE DEFINITIONS
 *=============================================================*/
typedef unsigned char uint8;


/*==============================================================
 *                      CONSTANTS
 *=============================================================*/
#define LATC_ADDRESS        0xF8B
#define TRISC_ADDRESS       0xF94
#define SSPCON1_ADDRESS     0xFC6


/*==============================================================
 *                      LOW LEVEL REGISTER ACCESS
 *=============================================================*/
#define HWREG8(address)     (*((volatile uint8 *)(address)))


/*==============================================================
 *                      RAW REGISTER ACCESS
 *=============================================================*/
#define LATC_REG_RAW        HWREG8(LATC_ADDRESS)
#define TRISC_REG_RAW       HWREG8(TRISC_ADDRESS)


/*==============================================================
 *                      BIT MACROS
 *=============================================================*/
#define SET_BIT(REG, BIT_POS)       ((REG) |=  (1U << (BIT_POS)))
#define CLEAR_BIT(REG, BIT_POS)     ((REG) &= ~(1U << (BIT_POS)))
#define TOGGLE_BIT(REG, BIT_POS)    ((REG) ^=  (1U << (BIT_POS)))
#define READ_BIT(REG, BIT_POS)      (((REG) >> (BIT_POS)) & 1U)


/*==============================================================
 *                      LATC REGISTER INTERFACE
 *=============================================================*/
typedef union
{
    struct
    {
        unsigned LATC0 : 1;
        unsigned LATC1 : 1;
        unsigned LATC2 : 1;
        unsigned LATC3 : 1;
        unsigned LATC4 : 1;
        unsigned LATC5 : 1;
        unsigned LATC6 : 1;
        unsigned LATC7 : 1;
    };

    uint8 ALL_BITS;

} LATC_t;

#define LATC_REG   (*((volatile LATC_t *)LATC_ADDRESS))


/*==============================================================
 *                      SSPCON1 REGISTER INTERFACE
 *=============================================================*/
typedef union
{
    struct
    {
        unsigned SSPM  : 4;
        unsigned CKP   : 1;
        unsigned SSPEN : 1;
        unsigned SSPOV : 1;
        unsigned WCOL  : 1;
    };

    uint8 ALL_BITS;

} SSPCON1_t;

#define SSPCON1_REG   (*((volatile SSPCON1_t *)SSPCON1_ADDRESS))


/*==============================================================
 *                      ENUMS
 *=============================================================*/
typedef enum
{
    GPIO_LOW = 0,
    GPIO_HIGH
} gpio_logic_t;


typedef enum
{
    SPI_MASTER_MODE_FOSC_DIV_4,
    SPI_MASTER_MODE_FOSC_DIV_16,
    SPI_MASTER_MODE_FOSC_DIV_64,
    SPI_MASTER_MODE_FOSC_TMR2,
    SPI_SLAVE_MODE_SS_ENABLED,
    SPI_SLAVE_MODE_SS_DISABLED
} spi_mode_t;


/*==============================================================
 *                      HELPER FUNCTIONS
 *=============================================================*/
static inline void GPIO_PortC_Init(void)
{
    TRISC_REG_RAW = 0x00;
}

static inline void GPIO_Set_Pin6_High(void)
{
    LATC_REG.LATC6 = 1;
}

static inline void GPIO_Write_PortC(uint8 value)
{
    LATC_REG.ALL_BITS = value;
}


/*==============================================================
 *                      APPLICATION
 *=============================================================*/
int main(void)
{
    GPIO_PortC_Init();

    GPIO_Write_PortC(0xAA);

    __delay_ms(2000);

    GPIO_Set_Pin6_High();

   while(1)
{
    LATC_REG.ALL_BITS = 0x00;
    __delay_ms(500);

    LATC_REG.LATC0 = 1;
    LATC_REG.LATC7 = 1;
    __delay_ms(500);

    LATC_REG.LATC1 = 1;
    LATC_REG.LATC6 = 1;
    __delay_ms(500);

    LATC_REG.LATC2 = 1;
    LATC_REG.LATC5 = 1;
    __delay_ms(500);

    LATC_REG.LATC3 = 1;
    LATC_REG.LATC4 = 1;
    __delay_ms(500);

    LATC_REG.ALL_BITS = 0x00;
    __delay_ms(500);
}

    return EXIT_SUCCESS;
}