/*
 * File:   SASE_Init.c
 * Author: APTUSM6
 *
 * Created on April 14, 2021, 1:02 PM
 */


#include <xc.h>

void SASE_Initialize(void) {
   
    
    
    // drive the CAN STANDBY driver pin low
    _TRISG9 = 0;
    _LATG9 = 0;
    _TRISF1 = 0;
    _TRISF0 = 1;
 
    
    
    return;
}
