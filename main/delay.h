/************************************************************************/
/*																		*/
/*	delay.h	--	Interface Declarations for delay.c						*/
/*																		*/
/************************************************************************/
/*	Author:		Gene Apperson											*/
/*	Copyright 2013, Digilent Inc.										*/
/************************************************************************/
/*  File Description:													*/
/*																		*/
/*																		*/
/************************************************************************/
/*  Revision History:													*/
/*																		*/
/*	04/29/2011(GeneA): created											*/
/*	04/04/2013(JordanR):  Ported for Stellaris LaunchPad				*/
/*	06/06/2013(JordanR):  Prepared for release							*/
/*																		*/
/************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
#if !defined(DELAY_INC)
#define	DELAY_INC

/* ------------------------------------------------------------ */
/*					Miscellaneous Declarations					*/
/* ------------------------------------------------------------ */
#define	cntMsDelay	5*10000			//timer 1 delay for 1ms


/* ------------------------------------------------------------ */
/*					General Type Declarations					*/
/* ------------------------------------------------------------ */



/* ------------------------------------------------------------ */
/*					Object Class Declarations					*/
/* ------------------------------------------------------------ */



/* ------------------------------------------------------------ */
/*					Variable Declarations						*/
/* ------------------------------------------------------------ */



/* ------------------------------------------------------------ */
/*					Procedure Declarations						*/
/* ------------------------------------------------------------ */

void	DelayInit();
void	DelayMs(int cms);

/* ------------------------------------------------------------ */

#endif
#ifdef __cplusplus
}
#endif
/************************************************************************/
