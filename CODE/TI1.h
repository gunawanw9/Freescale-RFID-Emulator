/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : TI1.H
**     Project   : rfidEmulator
**     Processor : MC56F8006_32_LQFP
**     Component : TimerInt
**     Version   : Component 02.157, Driver 02.02, CPU db: 3.00.188
**     Compiler  : Metrowerks DSP C Compiler
**     Date/Time : 7/31/2010, 5:18 PM
**     Abstract  :
**         This bean "TimerInt" implements a periodic interrupt.
**         When the bean and its events are enabled, the "OnInterrupt"
**         event is called periodically with the period that you specify.
**         TimerInt supports also changing the period in runtime.
**         The source of periodic interrupt can be timer compare or reload
**         register or timer-overflow interrupt (of free running counter).
**     Settings  :
**         Timer name                  : RTC (8-bit)
**         Compare name                : RTCmod
**         Counter shared              : No
**
**         High speed mode
**             Prescaler               : divide-by-1
**             Clock                   : 1000000 Hz
**           Initial period/frequency
**             Xtal ticks              : 2040
**             microseconds            : 255
**             seconds (real)          : 0.000255
**             Hz                      : 3922
**             kHz                     : 4
**
**         Runtime setting             : none
**
**         Initialization:
**              Timer                  : Enabled
**              Events                 : Enabled
**
**         Timer registers
**              Counter                : RTC_CNT   [62241]
**              Mode                   : RTC_SC    [62240]
**              Run                    : RTC_SC    [62240]
**              Prescaler              : RTC_SC    [62240]
**
**         Compare registers
**              Compare                : RTC_MOD   [62242]
**
**         Flip-flop registers
**     Contents  :
**         No public methods
**
**     Copyright : 1997 - 2009 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef __TI1
#define __TI1

/* MODULE TI1. */

/*Include shared modules, which are used for whole project*/
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


void TI1_Init(void);
/*
** ===================================================================
**     Method      :  TI1_Init (component TimerInt)
**
**     Description :
**         Initializes the associated peripheral(s) and the beans 
**         internal variables. The method is called automatically as a 
**         part of the application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

void TI1_Interrupt(void);
/*
** ===================================================================
**     Method      :  TI1_Interrupt (component TimerInt)
**
**     Description :
**         The method services the interrupt of the selected peripheral(s)
**         and eventually invokes the beans event(s).
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/

/* END TI1. */

#endif /* ifndef __TI1 */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.00 [04.35]
**     for the Freescale 56800 series of microcontrollers.
**
** ###################################################################
*/