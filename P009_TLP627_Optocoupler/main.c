/*--------------------------------------------------------------------------------------------------------------------------------------------------------
* Project: 		Post 9 TLP627 Optocoupler
* Hardware:		Arduino UNO
* Micro:		ATMEGA328P
* IDE:			Atmel Studio 6.2
*
* Name:    		main.c
* Purpose: 		TLP627 Example
* Date:			01-11-2015
* Author:		Marcel van der Ven
*
* Hardware setup:
*
* Note(s):
*--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/************************************************************************/
/* Defines				                                                */
/************************************************************************/
#define F_CPU	16000000UL

/************************************************************************/
/* Includes				                                                */
/************************************************************************/
#include <avr/io.h>
#include "util/delay.h"
#include "common.h"

/***************************************************************************
*  Function:		Setup()
*  Description:		Setup PORTB.
*  Receives:		Nothing
*  Returns:			Nothing
***************************************************************************/
void Setup()
{
	/* Setup Port B */
	/* Pin 1 output, other pins input  */
	DDRB = 0b00000001;
}

/***************************************************************************
*  Function:		Main(void)
*  Description:		Main function of the program.
*  Receives:		Nothing
*  Returns:			Optionally the exit code.
***************************************************************************/
int main(void)
{
	/* Setup and initialization */
	Setup();
	
    while(1)
    {
      
    }
}