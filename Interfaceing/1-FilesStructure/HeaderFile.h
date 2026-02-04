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