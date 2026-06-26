/*
 * File : HeaderFile.h
 * Author : Saher Hassaballa
 * LinkedIn : https://www.linkedin.com/in/saher-hassaballah-36a922196/
 * Created on may 21 , 2025 , 9:53 pm
*/

#ifndef HeaderFile_H
#define HeaderFile_H

/*-------------------- Includes ---------------------*/

/*-------------------- Macro Declarations ---------------------*/
/* PI is a constant value */
#define PI 3.14

/*-------------------- Macro Functions Declarations ---------------------*/
/* Slew Rate Enable/Disable */
#define I2C_SLEW_RATE_DISABLE_CFG() (SSPSTATbits.SMP = 1)


/*-------------------- Data Type Declarations ---------------------*/
typedef struct HeaderFile
{
    /* data */
};


/*-------------------- Software Interfaces Declarations ---------------------*/
Std_ReturnType MSSP_I2C_Init(const mssp_i2c_init *i2c_obj);



#endif



/********************************************************************* */

/*
 * File     : HeaderFile.h
 * Author   : Saher Hassaballa
 * LinkedIn : https://www.linkedin.com/in/saher-hassaballah-36a922196/
 * Created  : May 21, 2025, 9:53 pm
 * Brief    : Header file for module declarations
 */

#ifndef HeaderFile_H
#define HeaderFile_H

/*--------------------------- Includes --------------------------*/
#include <stdint.h>
#include <stdbool.h>

/*-------------------- Macro Declarations ----------------------*/
#define PI                      3.14
#define MODULE_MAX_COUNT       4U
#define MODULE_ENABLE          1U
#define MODULE_DISABLE         0U

/*---------------- Macro Function Declarations -----------------*/
#define I2C_SLEW_RATE_DISABLE_CFG()     (SSPSTATbits.SMP = 1)
#define IS_VALID_ID(id)                 ((id) < MODULE_MAX_COUNT)

/*-------------------- Data Type Declarations ------------------*/
typedef enum
{
    E_OK = 0,
    E_NOT_OK
} Std_ReturnType;

typedef struct
{
    uint8_t port;
    uint8_t pin;
} module_config_t;

/*---------------- External Variables Declarations ------------*/
/* extern uint8_t global_counter; */

/*---------------- Software Interfaces Declarations -----------*/
Std_ReturnType MODULE_Init(const module_config_t *config);
Std_ReturnType MODULE_Start(void);
Std_ReturnType MODULE_Stop(void);

#endif