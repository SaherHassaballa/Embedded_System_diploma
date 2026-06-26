/*
 * File : SourceFile.c
 * Author : Saher Hassaballa
 * LinkedIn : https://www.linkedin.com/in/saher-hassaballah-36a922196/
 * Created on may 21 , 2025 , 9:53 pm
*/

/*--------------------------- include HeaderFile --------------------------*/

/*---------------------- Variables ---------------------*/

/*------------------------Inline function decleration or Definition -----------------------*/

/*--------------------------- Function Defination --------------------------*/


/*------------------------Inline function Definition if not above-----------------------*/
/************************************************************************************************** */

/*
 * File     : SourceFile.c
 * Author   : Saher Hassaballa
 * LinkedIn : https://www.linkedin.com/in/saher-hassaballah-36a922196/
 * Created  : May 21, 2025, 9:53 pm
 * Brief    : Source file for module implementation
 */

/*--------------------------- Includes --------------------------*/
#include "HeaderFile.h"

/*-------------------- Local Macro Declarations ----------------*/
#define HW_PORT_BASE_ADDR      (0x40020000UL)

/*-------------- Local Macro Function Declarations -------------*/
#define SET_BIT(REG,BIT)       ((REG) |= (1U << (BIT)))
#define CLEAR_BIT(REG,BIT)     ((REG) &= ~(1U << (BIT)))

/*---------------- Local Data Type Declarations ----------------*/
typedef struct
{
    bool initialized;
} module_runtime_t;

/*------------------------ Global Variables --------------------*/
/* uint8_t global_counter = 0; */

/*------------------------ Local Variables ---------------------*/
static module_runtime_t module_state = {0};

/*---------------- Local Function Prototypes -------------------*/
static void Module_HardwareInit(void);
static void Module_Reset(void);

/*---------------- Software Interfaces Definitions -------------*/
Std_ReturnType MODULE_Init(const module_config_t *config)
{
    Std_ReturnType ret = E_NOT_OK;

    if (config != NULL)
    {
        Module_HardwareInit();
        module_state.initialized = true;
        ret = E_OK;
    }

    return ret;
}

Std_ReturnType MODULE_Start(void)
{
    Std_ReturnType ret = E_NOT_OK;

    if (module_state.initialized)
    {
        ret = E_OK;
    }

    return ret;
}

Std_ReturnType MODULE_Stop(void)
{
    Std_ReturnType ret = E_NOT_OK;

    if (module_state.initialized)
    {
        Module_Reset();
        ret = E_OK;
    }

    return ret;
}

/*-------------------- Local Function Definitions --------------*/
static void Module_HardwareInit(void)
{
    /* Hardware initialization */
}

static void Module_Reset(void)
{
    /* Reset hardware */
}