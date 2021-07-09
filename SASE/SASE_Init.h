/* 
 * File:   SASE_Init.h
 * Author: APTUSM6
 *
 * Created on April 14, 2021, 3:40 PM
 */

#ifndef SASE_INIT_H
#define	SASE_INIT_H

#define AutecAddress1       0x18A
#define AutecAddress2       0x28A
#define AutecAddress3       0x38A
#define VFDaddress          0x400


bool Forward, Backward, TurnRight, TurnLeft, Start, Reset, Jog, TransportMode, 
        GrindMode, GrindModeOld, ForwardS, ReverseS, LightSW, GrindLeft, GrindRight, 
        TrimRight, TrimLeft, SwitchActive, JoystickActive, DriveBack, flag,
        Grinding, GrindChangeDirR, GrindChangeDirL, CAN_Received, StartRamp;

uint16_t JoystickY, JoystickX, GrindSpeed, YSpeed, XSpeed, Trim, 
        HeadSpeed, HeadSpeedHz, freq;

int LeftDrive, RightDrive, RampTM;

float DriveSpeedPer, DriveSpeed;

#ifdef	__cplusplus
extern "C" {
#endif

    void SASE_Initialize(void);


#ifdef	__cplusplus
}
#endif

#endif	/* SASE_INIT_H */

