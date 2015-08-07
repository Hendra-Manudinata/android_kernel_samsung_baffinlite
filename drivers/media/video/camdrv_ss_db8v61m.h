/* drivers/media/video/db8v61m_regs_1_1.h
 *
 * Driver for db8v61m (VGA Camera) from Siliconfile
 *
 * Copyright (C) 2012, SAMSUNG ELECTRONICS
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */


/* ========== version info ==========*/
//2013.11.27 kyutae.yeon
//26MHz (50Hz)
/* ============================*/


#ifndef __CAMDRV_SS_DB8V61M_H__
#define __CAMDRV_SS_DB8V61M_H__


//#define START_BURST_MODE 0x0F12
//#define DELAY_SEQ 0xE7

// Frame Auto
const regs_t db8v61m_init_regs[]={
//===================================
// For Analog Setting
//===================================
0xFFD0,

0x1108,    // ChrgPmpBypss
0x17E1,    // AMP_CDS
0x295B,    // FallScanTx
0x5814,    // Rise Tran
0x5A16,    // Fall Tran
0x5F70,    // ABlkCtrlRsrv
0x6907,    // CDS_Ctrl
0x1B01,    // Pixel Bias

0xFFB0,
0x2500,    // Clock Prepare Timing
0x2703,    // Clock Trail Timing
0x290E,    // Data/Clock Post Timing
0x3304,    // Data Trail Timing

//==================================//
// ADF Anlog                        //
//==================================//
0xFF84,
0x0503,		// APthreshold
0x060E,		// APClmpthreshold

0x9300,		//Min NCP Range
0x9403,		//Min GC
0x9503,		//Min rstcds
0x9603,		//Min RiseIntTx
0x971D,		//Min FallIntTx
0x9801,		//Min RiseIntRx
0x991F,		//Min FallIntRx
0x9A00,		//Min RiseIntLatch
0x9B1F,		//Min FallIntLatch
0x9C08,		//Min ClmpCtrl

0x9D00,		//Max NCP Range
0x9E03,		//Max GC
0x9F03,		//Max rstcds
0xA003,		//Max RiseIntTx
0xA11D,		//Max FallIntTx
0xA201,		//Max RiseIntRx
0xA31F,		//Max FallIntRx
0xA400,		//Max RiseIntLatch
0xA51F,		//Max FallIntLatch
0xA608,		//Max ClmpCtrl

0xFF85,
0x0602,            //Min rstl
0x0906,            //Min Amp_Intege
0x143C,            //Min Analog ADF En0 RISE QT_SIG 
0x187D,            //Min Analog ADF EN1 FALL QSIG

0x0702,            //Max rstl
0x0A06,            //Max Amp_Intege
0x1543,            //Max Analog ADF EN0 RISE QT_SIG
0x198B,            //Max Analog ADF EN1 FALL QSIG

0x1085,            //Analog ADF En0
0x1344,            //Analog Address Low ADF En0
0x1735,            //Analog Address Low ADF En1

//==================================//
// FMT                              //
//==================================//
0xFFA1,
//7000,
0x710D,

//==================================//
// PMS/OD                              //
//==================================//
0xFF83,
0xA801,
0xA90F,
0xAA00,
0xAB04,

//==================================//
// AE                               //
//==================================//
0xFFA1,
0x9108,	// Point A
0x9208,	
0x9340,	// Point B
0x942A,	
0x9560,	// Point C
0x964E,	
0x9798,	// Point D
0x9870,	

0xFF81,
0x8F01,    	// AE Mode
0x9019,    	// AE Ctrl

0x9322,	// AE Weight (Left / Top)
0x942C,    	// AE Weight (Right / Center)
0x9532,	// AE Weight (Factor / Bottom)
0x9606,	// AE Speed
0x9702,		// AeLockBnd
0x9806,		// AeHoldBnd
0x9908,		// Analog gain max

0xA338,	// Outdoor Target
0xA438,	// Indoor Target

0xBD2A,	// LowLevelIndex_0
0xBE0C,	// LowLevelIndex_1
0xBF02,		// LowLevelIndex_2

0xD505, //05	// PLL 26MHz
0xD614, //12	

0xDA00,    	// AE Gain Max 
0xDBA0,   		//
0xDC60,	// Gain2Lut
0xDD36,	// Gain1Lut
0xDE20,		// GainMin

//15-8fps start
0xDF03,	// MinFrame 15fps
0xE021,	//
0xE10F,	// TimeMax60Hz
0xE20A,	// Time2Lut60Hz
0xE304,		// Time1Lux60Hz
0xE40C,	// TimeMax50Hz
0xE508,	// Time2Lut50Hz
0xE603,		// Time1Lut50Hz		

0xFF82,
0x0802,	// FrmMin60Hz High
0x09F4,	// FrmMin60Hz Low
0x0A03,	// FrmMin50Hz High
0x0B8B,	// FrmMin50Hz Low

0xFF81,
0x9039,		// AE Ctrl

//==================================//
// AWB STE                          //
//==================================//
0xFFA1,
0x9B22,
0x9C02,
0x9F00, //3A,  //3F //01	// AWBZone0LTx   // Flash
0xA000, //D8,  //7E //01	// AWBZone0LTy
0xA100, //56,  //55 //02	// AWBZone0RBx
0xA200, //C8,  //73 //02	// AWBZone0RBy
0xA373, //73, //73	// AWBZone1LTx   // Cloudy
0xA464, //64, //62	// AWBZone1LTy
0xA588, //88, //88	// AWBZone1RBx
0xA644, //44, //42	// AWBZone1RBy
0xA75C, //5C, //5C	// AWBZone2LTx   // Daylight
0xA864, //64, //64	// AWBZone2LTy
0xA978, //78, //78	// AWBZone2RBx
0xAA44, //44, //44	// AWBZone2RBy
0xAB48, //48, //56	// AWBZone3LTx   // Fluorescent
0xAC6F, //72, //72	// AWBZone3LTy
0xAD68, //68, //6E	// AWBZone3RBx
0xAE65, //65, //65	// AWBZone3RBy
0xAF44, //44, //44	// AWBZone4LTx   // CoolWhite
0xB06E, //6E, //6E	// AWBZone4LTy
0xB165, //65, //5B	// AWBZone4RBx
0xB244, //44, //4C	// AWBZone4RBy
0xB33F, //3F, //3F	// AWBZone5LTx   // TL84
0xB490, //90, //8B	// AWBZone5LTy
0xB555, //55, //55	// AWBZone5RBx
0xB670, //70, //6F	// AWBZone5RBy
0xB73C, //3C, //3C	// AWBZone6LTx   // A
0xB8A4, //A4, //A0	// AWBZone6LTy
0xB954, //54, //52	// AWBZone6RBx
0xBA8A, //8A, //8A	// AWBZone6RBy
0xBB3A, //3A, //34	// AWBZone7LTx   // Horizon
0xBCBA, //BA, //BA	// AWBZone7LTy
0xBD56, //56, //4A	// AWBZone7RBx
0xBEA0, //A0, //A0	// AWBZone7RBy
    
0xFF83,
0x0104,	// STD R
0x02F0,    	//        
0x0306,	// STD B
0x0410,    	// 
          
//==================================//
// AWB                              //
//==================================//
0xFF82,
0x1DA7,		// SwitchFlag [7]:Special RB Gain
0x3200,	// Indoor Lux Threshold
0x3304,    	// 
0x3400,	// Outdoor Lux Threshold
0x3560,    	// 

0x6404,	// AWB Start R
0x65F0,    	// 
0x6806,	// AWB Start B
0x6910,    	// 
                 
0x3600, //00	// AWB_Weight_General_0
0x3718, //12    	// AWB_Weight_General_1
0x3810, //10	// AWB_Weight_General_2
0x3913, //13	// AWB_Weight_General_3
0x3A20, //20    	// AWB_Weight_General_4
0x3B10, //10	// AWB_Weight_General_5
0x3C10, //10	// AWB_Weight_General_6
0x3D0E, //0E	// AWB_Weight_General_7
0x3E00, //10	// AWB_Weight_Indoor_0
0x3F00, //10	// AWB_Weight_Indoor_1
0x4010, //10	// AWB_Weight_Indoor_2
0x4110, //10   		// AWB_Weight_Indoor_3
0x4218, //10    	// AWB_Weight_Indoor_4
0x430E, //00	// AWB_Weight_Indoor_5
0x440E, //00	// AWB_Weight_Indoor_6
0x4500, //00	// AWB_Weight_Indoor_7
0x4600, //00	// AWB_Weight_Outdoor_0
0x4700, //00	// AWB_Weight_Outdoor_1
0x4820, //20    	// AWB_Weight_Outdoor_2
0x4900, //18	// AWB_Weight_Outdoor_3		 
0x4A00, //00	// AWB_Weight_Outdoor_4
0x4B00, //00	// AWB_Weight_Outdoor_5
0x4C00, //00	// AWB_Weight_Outdoor_6
0x4D00, //00	// AWB_Weight_Outdoor_7

0x5105,    	// AWB_unicolorzone
0x5A01,    	// Min Gray Count
0x5B00,    	//

// Min-Max R B Color Gain 0
0x8406,  //06,	// LSValue0 Under
0x8507,  //07,	// LSValue1	Upper
    	  //      	
0x7403,  //03,	03	// Min R Gain 0
0x7534,  //A4,  A4  	// 
0x760C,  //0C,  0C  	// Max R Gain 0
0x7700,  //00,  00  	// 
0x7800,  //00,	00	// Min B Gain 0
0x7920,  //20,	20	// 	
0x7A07,  //07,	07	// Max B Gain 0
0x7BC8,  //C8,  C8  	// 
        //
0x7C03, //03		// Min R Gain 1
0x7DA0, //50	//
0x7E03, //03	// Max R Gain 1
0x7FF0, //D0	// 
0x8006, //06	// Min B Gain 1
0x8180, //80	// 	
0x8207, //07		// Max B Gain 1
0x8370, //68	//

//==================================//
// CCM D65                          //
//==================================//
0x9D00,		//   CrcMtx11_Addr1 
0x9E72,	// CrcMtx11_Addr0 
0x9FFF,    	//   CrcMtx12_Addr1 
0xA0C8,	// CrcMtx12_Addr0         
0xA100,	// CrcMtx13_Addr1 
0xA206,	// CrcMtx13_Addr0
0xA3FF,		//   CrcMtx21_Addr1 
0xA4F7,	// CrcMtx21_Addr0 
0xA500,		//   CrcMtx22_Addr1 
0xA651,		//   CrcMtx22_Addr0 
0xA7FF,		//   CrcMtx23_Addr1 
0xA8F4,	// CrcMtx23_Addr0 
0xA900,	// CrcMtx31_Addr1 
0xAA04,	// CrcMtx31_Addr0 
0xABFF,		//   CrcMtx32_Addr1 
0xACCA,	// CrcMtx32_Addr0 
0xAD00,		//   CrcMtx33_Addr1 
0xAE72,	// CrcMtx33_Addr0

//==================================//
// CCM Coolwhite                    //
//==================================//
0xAF00,		//   CrcMtx11_Addr1 
0xB061,	// CrcMtx11_Addr0 
0xB1FF,    	//   CrcMtx12_Addr1 
0xB2D7,	// CrcMtx12_Addr0 
0xB300,	// CrcMtx13_Addr1 
0xB408,	// CrcMtx13_Addr0 
0xB5FF,		//   CrcMtx21_Addr1 
0xB6F3,	// CrcMtx21_Addr0 
0xB700,		//   CrcMtx22_Addr1 
0xB841,	// CrcMtx22_Addr0 
0xB900,	// CrcMtx23_Addr1 
0xBA0C,	// CrcMtx23_Addr0 
0xBB00,	// CrcMtx31_Addr1 
0xBC00,	// CrcMtx31_Addr0 
0xBDFF,		//   CrcMtx32_Addr1 
0xBEC8,	// CrcMtx32_Addr0 
0xBF00,		//   CrcMtx33_Addr1 
0xC078,	// CrcMtx33_Addr0
  
//==================================//
// CCM A                            //
//==================================//
0xC100,		//   CrcMtx11_Addr1 
0xC262,	// CrcMtx11_Addr0 
0xC3FF,    	//   CrcMtx12_Addr1 
0xC4E0,	// CrcMtx12_Addr0 
0xC5FF,    	//   CrcMtx13_Addr1 
0xC6FE,	// CrcMtx13_Addr0 
0xC7FF,		//   CrcMtx21_Addr1 
0xC8F5,	// CrcMtx21_Addr0 
0xC900,		//   CrcMtx22_Addr1 
0xCA5A,	// CrcMtx22_Addr0 
0xCBFF,		//   CrcMtx23_Addr1 
0xCCF0,	// CrcMtx23_Addr0 
0xCDFF,		//   CrcMtx31_Addr1 
0xCEFB,	// CrcMtx31_Addr0 
0xCFFF,		//   CrcMtx32_Addr1 
0xD0B8,	// CrcMtx32_Addr0 
0xD100,		//   CrcMtx33_Addr1 
0xD28E,	// CrcMtx33_Addr0

//==================================//
// CCM Outdoor                      //
//==================================//
0xD301,	// OutCCM&GMA_Threshold
0xD400,

0xD500,		//   CrcMtx11_Addr1 
0xD66C,	// CrcMtx11_Addr0 
0xD7FF,    	//   CrcMtx12_Addr1 
0xD8D1,	// CrcMtx12_Addr0 
0xD900,    	//   CrcMtx13_Addr1 
0xDA02,	// CrcMtx13_Addr0 
0xDBFF,		//   CrcMtx21_Addr1 
0xDCF2,	// CrcMtx21_Addr0 
0xDD00,		//   CrcMtx22_Addr1 
0xDE5B,	// CrcMtx22_Addr0 
0xDFFF,		//   CrcMtx23_Addr1 
0xE0F2,	// CrcMtx23_Addr0 
0xE100,	// CrcMtx31_Addr1 
0xE204,	// CrcMtx31_Addr0 
0xE3FF,		//   CrcMtx32_Addr1 
0xE4D4,	// CrcMtx32_Addr0 
0xE500,		//   CrcMtx33_Addr1 
0xE669,	// CrcMtx33_Addr0
//==================================//
// ADF                              //
//==================================//
0xFF84,
0x00FD,	// FuncCtrl1
0x01FF,		// FuncCtrl2
0x02E7,		// FuncCtrl3
0x03B8,		// Flag [7]:EnSUPRowSumOne [6]:EnYcFunc [5]:CB [4]:RowSumOne

//BGT       	
0x1B41,	// Th_BGT	
0x30FC,	// Min_BGT	
0x4E00,		// Max_BGT	

//CNT       	
0x1C43,	// Th_CNT	
0x3100,		// Min_CON	
0x4F04,		// Max_CON	

//================================//
// ADF - LSC                      //
//================================//
0xFFA0,
//5BF0,  // LVLSC

0xFF84,
0x1263, // ThrLevel_LVLSC
0x13E0,	// ThrLevel_LSLSC
0x1F90,
0x3DF0,

//Min Shading
0x20F0,	// Min_RRp0Gain
0x216A,	// Min_RRp1Gain
0x220A,	// Min_RRp2Gain	
0x2307,	// Min_RRp3Gain	
0x2490,	// Min_BBp0Gain
0x2568,	// Min_BBp1Gain
0x260B,	// Min_BBp2Gain
0x2707,	// Min_BBp3Gain
0x2898,	// Min_GGp0Gain
0x2958,	// Min_GGp1Gain
0x2A04,	// Min_GGp2Gain
0x2B00,		// Min_GGp3Gain

//Max Shading
0x3EE0,	// Max_RRp0Gain	
0x3F48,	// Max_RRp1Gain	
0x4003,	// Max_RRp2Gain	
0x4100,		// Max_RRp3Gain	
0x4286,	// Max_BBp0Gain
0x4350,	// Max_BBp1Gain
0x4406,	// Max_BBp2Gain
0x4504,	// Max_BBp3Gain
0x4688,	// Max_GGp0Gain
0x4746,	// Max_GGp1Gain
0x4802,	// Max_GGp2Gain
0x4900,		// Max_GGp3Gain

//================================//
// ADF - NSF                      //
//================================//
0x15A4,	// ThrLevel_NSF
0xED28,	// ADF_STVal_NSF_TH1
0xEE90,	// ADF_STVal_NSF_TH2
0x2C10,	// Min_NSFTh1
0x2D60,	// Min_NSFTh2
0x4A0D,	// Max_NSFTh1
0x4B48,	// Max_NSFTh2
0xEF0D,	// ADF_EndVal_NSF_TH1
0xF030,	// ADF_EndVal_NSF_TH2	

//================================//
// ADF - CNF                      //
//================================//
// ADF - CNFTh1 
0x1703,	// ThrLevel_CNFTh1
0x2E93,	// Min_CNFTh1
0x4CB3,	// Max_CNFTh1

// ADF - CNFTh2 
0x1651,	// ThrLevel_CNFTh2
0x2F02,	// Min_CNFTh2
0x4D06,	// Max_CNFTh2

// ADF - CNFTh3, 4 
0xF100,	// CNFTh3 - cloudy, daylight, flourscent
0xF400,	// CNFTh4 - cloudy, daylight, flourscent
0xF200,	// CNFTh3 - CWF, TL84
0xF500,	// CNFTh4 - CWF, TL84
0xF300,	// CNFTh3 - A, Horizon
0xF600,	// CNFTh4 - A, Horizon

0xFFA1,
0x4606,	// CNFTh5

// ADF - Color Booster
0xFF84,
0x1E31, 		// ThrLevel_CLB
0x3A02,	// Min CLBTh
0x3B3E,		// Min CLB Cb Slope 
0x3C3E,		// Min CLB Cr Slope
0x5802,	// Max CLBTh
0x5940,		// Max CLB Cb Slope
0x5A40,		// Max CLB Cr Slope      

0xFFA1,
0x4A0F,		// CLB_SecEnb

//================================//
// ADF - EDE new                  //
//================================//
0xFF84,
0x18A4,	// Th_Edge	
0x3205,		// Min_Coring	
0x3305,		// Min_Edge_Slope1	
0x340A,		// Min_Edge_Slope2	
0x3501,	// Min_Edge_SmallOffset	
0x3622,	// Min_Edge_Slope
0x5003,		// Max_Coring	
0x5107,	// Max_Edge_Slope1	
0x520B,	// Max_Edge_Slope2	
0x5301,	// Max_Edge_SmallOffset	
0x5422,	// Max_Edge_Slope

0xDF40,	// DEDE_Th_Lux1 [ Middle 1 , Low ]
0xE0FA,		// DEDE_Th_Lux2 [ High , Middle 2 ]

0xE106,	// DEDE_Start_SL1
0xE206,	// DEDE_Mid1_SL1
0xE308,	// DEDE_Mid2_SL1
0xE40A,	// DEDE_End_SL1

0xE500,		//
0xE620,		// DEDE_Start_Xp1
//E700		//
0xE81C,		// DEDE_Mid1_Xp1
0xE900,		//
0xEA18,		// DEDE_Mid2_Xp1
0xEB00,		//
0xEC20,		// DEDE_End_Xp1

0xFFA1,
0x3600,  // EDETransFuncXP2
0x3780,

0xFF84,
0xF902,	// EdgeOP_Th
0xFB20,		// Out_EdOP
0xFC00,		// In_EdOP
0xFE00,		// Out_SmThrd_Val

0xFF85,
0x0000,		// In_SmThrd_Val

0x0100,		// Min_Small_Edge_Gain
0x0200,		// Max_Small_Edge_Gain

//================================//
// ADF Gamma                      //
//================================//
0xFF84,
0xBC01,    	// DarkGMA Threshold
0x1A41,	// Gamma Threshold
0xA900,	// ADF_OutDGMAHys
0xAA00,	//

0xBD00,	// Dark_Gamma_0 
0xBE0A,	// Dark_Gamma_1 
0xBF20,	// Dark_Gamma_2 
0xC03A,	// Dark_Gamma_3 
0xC14D,	// Dark_Gamma_4 
0xC25A,	// Dark_Gamma_5 
0xC36D,	// Dark_Gamma_6 
0xC480,	// Dark_Gamma_7 
0xC590,	// Dark_Gamma_8 
0xC69E,	// Dark_Gamma_9 
0xC7B8,	// Dark_Gamma_10
0xC8CC,	// Dark_Gamma_11
0xC9DE,	// Dark_Gamma_12
0xCAE6,	// Dark_Gamma_13
0xCBEE,	// Dark_Gamma_14
0xCCF5,	// Dark_Gamma_15
0xCDFF,	// Dark_Gamma_16
       
0x5B00, //00,	// Min_Gamma_0 
0x5C18, //1A,	// Min_Gamma_1 
0x5D2A, //20,	// Min_Gamma_2 
0x5E48, //40,	// Min_Gamma_3 
0x5F5E, //58,	// Min_Gamma_4 
0x606E, //68	// Min_Gamma_5 
0x6186, //84,	// Min_Gamma_6 
0x6298, //96,	// Min_Gamma_7 
0x63A6, //A4,	// Min_Gamma_8 
0x64B1, //B1,	// Min_Gamma_9 
0x65C5, //C5,	// Min_Gamma_10
0x66D8, //D8,	// Min_Gamma_11
0x67E5, //E6,	// Min_Gamma_12
0x68EB, //ED,	// Min_Gamma_13
0x69F2, //F2,	// Min_Gamma_14
0x6AF8, //F8,	// Min_Gamma_15
0x6BFF, //FF,	// Min_Gamma_16

0x6C00, 		// Max_Gamma_0  
0x6D02,  // Max_Gamma_1  
0x6E12,  // Max_Gamma_2  
0x6F26, 		// Max_Gamma_3  
0x7036,  // Max_Gamma_4  
0x7148,  // Max_Gamma_5  
0x7264,  // Max_Gamma_6  
0x737C,  // Max_Gamma_7  
0x748E,  // Max_Gamma_8  
0x759E, 		// Max_Gamma_9  
0x76B8,  // Max_Gamma_10 
0x77CC, 		// Max_Gamma_11 
0x78DE,  // Max_Gamma_12 
0x79E6,  // Max_Gamma_13 
0x7AEE,  // Max_Gamma_14 
0x7BF5,  // Max_Gamma_15 
0x7CFF, 		// Max_Gamma_16 

0xAB00, 		// OutDGMA_Gamma_0  
0xAC04, 		// OutDGMA_Gamma_1  
0xAD0E,	// OutDGMA_Gamma_2  
0xAE26, 		// OutDGMA_Gamma_3  
0xAF40,	// OutDGMA_Gamma_4  
0xB054,	// OutDGMA_Gamma_5  
0xB16D,	// OutDGMA_Gamma_6  
0xB282,	// OutDGMA_Gamma_7  
0xB392,	// OutDGMA_Gamma_8  
0xB4A2, 		// OutDGMA_Gamma_9  
0xB5BC,	// OutDGMA_Gamma_10 
0xB6D0,	// OutDGMA_Gamma_11 
0xB7E2, 		// OutDGMA_Gamma_12 
0xB8EA, 		// OutDGMA_Gamma_13 
0xB9F2, 		// OutDGMA_Gamma_14 
0xBAF9,	// OutDGMA_Gamma_15 
0xBBFF, 		// OutDGMA_Gamma_16 
       
//Suppression              
0x1D62,	// Th_SUP	        
0x3960,		// Min_suppression
0x5780,		// Max_suppression

//=================================//						
// ADF Update						           //
//=================================//						
0xCE01,	// ADF_Refresh

//=================================//						
// Saturation		           //
//=================================//
0x8F00,		// Color Hue 						
0x9140,		// Color Saturation	
       
//===================================
// Flip
//===================================
0xFFD0,
0x0300,	// B[1] : Y, B[0] : X

//===================================
// DDC & GDC
//===================================
0xFF85,
0x10C5,	// Manual_ADF_Di_En
0x110F,	// 0~1 Enable

0x1FA0,	// YOff0_DDC Addr
0x2064,

0x2131, // ADF_Di_0_Th
0x2200,	// DDC Dark
0x230F,	// DDC Normal


0x25A1,	// YOff0_DDC Addr
0x26B0,

0x2878,	// DDC Dark
0x296E,	// DDC Normal


//===================================
// For 5614 Setting
//===================================
0xFFB0,
//0x102A,  // MIPI DATA TYPE Addr
0x101E,  // MIPI DATA TYPE Addr


//===================================
// clock off Enable  
//===================================
0xFFD1,
0x0400,  // clock off

//===================================
// Preview Command (VGA)
//===================================
0xFFC0,
0x1002,


0xFFFF,

0xE70F, // 150ms	 
/* Self-Cam END of Initial*/
};

const regs_t db8v61m_preview_camera_regs[] =
{
};
const regs_t db8v61m_snapshot_normal_regs[] =
{
};
const regs_t db8v61m_snapshot_lowlight_regs[] =
{
};
const regs_t db8v61m_snapshot_highlight_regs[] =
{
};
const regs_t db8v61m_snapshot_nightmode_regs[] =
{
};
const regs_t db8v61m_snapshot_flash_on_regs[] =
{
};
const regs_t db8v61m_snapshot_af_preflash_on_regs[] =
{
};
const regs_t db8v61m_snapshot_af_preflash_off_regs[] =
{
};

const regs_t db8v61m_single_af_start_regs[] =
{
};
const regs_t db8v61m_get_1st_af_search_status[] = 
{
};
const regs_t db8v61m_get_2nd_af_search_status[] = 
{
};
const regs_t db8v61m_single_af_stop_regs[] =
{
};
//==========================================================
//  EFFECT(6)
//==========================================================

const regs_t db8v61m_effect_normal_regs[] =
{
0xFF83,
0x6200,

0x6300,
0x6400,
0x6500,

0xFFFF,
};
const regs_t db8v61m_effect_negative_regs[] =
{
0xFF83,
0x6220,

0x6300,
0x6400,
0x6500,
0xFFFF,
};
const regs_t db8v61m_effect_sepia_regs[] =
{
0xFF83,
0x6218,

0x6300,
0x6470,
0x6598,
0xFFFF,
};
const regs_t db8v61m_effect_mono_regs[] =
{
0xFF83,
0x6208,

0x6300,
0x6400,
0x6500,
0xFFFF,
};
const regs_t db8v61m_effect_aqua_regs[] =
{
0xFF83,
0x6218,

0x6300,
0x64AB,
0x6500,
0xFFFF,
};
const regs_t db8v61m_effect_sharpen_regs[] =
{
};
const regs_t db8v61m_effect_solarization_regs[] =
{
};
const regs_t db8v61m_effect_black_white_regs[] =
{
};
//==========================================================
//  EFFECT(6)  -END
//==========================================================



//==========================================================
// WB(5) -START
//==========================================================


const regs_t db8v61m_wb_auto_regs[] =
{

0xFF82,
0x3200,  // Indoor Lux Threshold
0x3304,  // 
0x3400,  // Outdoor Lux Threshold
0x3560,  // 

0xD301,  // OutCCM&GMA_Threshold
0xD400,

0x4600,	// AWB_Weight_Outdoor_0
0x4700,	// AWB_Weight_Outdoor_1
0x4820, // AWB_Weight_Outdoor_2
0x4900,	// AWB_Weight_Outdoor_3
0x4A00,	// AWB_Weight_Outdoor_4
0x4B00,	// AWB_Weight_Outdoor_5
0x4C00,	// AWB_Weight_Outdoor_6
0x4D00,	// AWB_Weight_Outdoor_7

// Min-Max R B Color Gain 0

0x7403,  //03		// Min R Gain 0
0x7534,  //A4    	// 
0x760C,  //0C    	// Max R Gain 0
0x7700,  //00    	// 
0x7800,  //00		// Min B Gain 0
0x7920,  //20		// 	
0x7A07,  //07		// Max B Gain 0
0x7BC8,  //C8    	// 

0xE70F,
  
0xFFFF,
};

const regs_t db8v61m_wb_daylight_regs[] =
{
0xFF82,
0x3200,  // Indoor Lux Threshold
0x3300,  // 
0x3400,  // Outdoor Lux Threshold
0x3500,  // 

0xD300,  // OutCCM&GMA_Threshold
0xD400,

0x4601,	// AWB_Weight_Outdoor_0
0x4701,	// AWB_Weight_Outdoor_1
0x4820, // AWB_Weight_Outdoor_2
0x4901,	// AWB_Weight_Outdoor_3
0x4A01,	// AWB_Weight_Outdoor_4
0x4B00,	// AWB_Weight_Outdoor_5
0x4C01,	// AWB_Weight_Outdoor_6
0x4D01,	// AWB_Weight_Outdoor_7

// Min-Max R B Color Gain 0

0x7404,  //03		// Min R Gain 0
0x75E0,  //A4    	// 
0x7604,  //0C    	// Max R Gain 0
0x77F8,  //00    	// 
0x7804,  //00		// Min B Gain 0
0x79A0,  //20		// 	
0x7A04,  //07		// Max B Gain 0
0x7BA8,  //C8    	// 

0xE70F,


0xFFFF,
};

const regs_t db8v61m_wb_cloudy_regs[] =
{
0xFF82,
0x3200,  // Indoor Lux Threshold
0x3300,  // 
0x3400,  // Outdoor Lux Threshold
0x3500,  // 

0xD300,  // OutCCM&GMA_Threshold
0xD400,

0x4601,	// AWB_Weight_Outdoor_0
0x4701,	// AWB_Weight_Outdoor_1
0x4820, // AWB_Weight_Outdoor_2
0x4901,	// AWB_Weight_Outdoor_3
0x4A01,	// AWB_Weight_Outdoor_4
0x4B00,	// AWB_Weight_Outdoor_5
0x4C01,	// AWB_Weight_Outdoor_6
0x4D01,	// AWB_Weight_Outdoor_7

// Min-Max R B Color Gain 0

0x7405,  //03		// Min R Gain 0
0x75F8,  //A4    	// 
0x7606,  //0C    	// Max R Gain 0
0x7700,  //00    	// 
0x7804,  //00		// Min B Gain 0
0x7950,  //20		// 	
0x7A04,  //07		// Max B Gain 0
0x7B60,  //C8    	// 

0xE70F,

0xFFFF,
};
const regs_t db8v61m_wb_incandescent_regs[] =
{
0xFF82,
0x3200,  // Indoor Lux Threshold
0x3300,  // 
0x3400,  // Outdoor Lux Threshold
0x3500,  // 

0xD300,  // OutCCM&GMA_Threshold
0xD400,

0x4620,	// AWB_Weight_Outdoor_0
0x4701,	// AWB_Weight_Outdoor_1
0x4801, // AWB_Weight_Outdoor_2
0x4901,	// AWB_Weight_Outdoor_3
0x4A01,	// AWB_Weight_Outdoor_4
0x4B00,	// AWB_Weight_Outdoor_5
0x4C01,	// AWB_Weight_Outdoor_6
0x4D01,	// AWB_Weight_Outdoor_7

// Min-Max R B Color Gain 0

0x7403,  //03		// Min R Gain 0
0x7570,  //A4    	// 
0x7603,  //0C    	// Max R Gain 0
0x7780,  //00    	// 
0x7806,  //00		// Min B Gain 0
0x79D0,  //20		// 	
0x7A06,  //07		// Max B Gain 0
0x7BE0,  //C8    	// 



0xFFFF,
};

const regs_t db8v61m_wb_fluorescent_regs[] =
{
0xFF82,
0x3200,  // Indoor Lux Threshold
0x3300,  // 
0x3400,  // Outdoor Lux Threshold
0x3500,  // 

0xD300,  // OutCCM&GMA_Threshold
0xD400,

0x4601,	// AWB_Weight_Outdoor_0
0x4701,	// AWB_Weight_Outdoor_1
0x4801, // AWB_Weight_Outdoor_2
0x4901,	// AWB_Weight_Outdoor_3
0x4A20,	// AWB_Weight_Outdoor_4
0x4B00,	// AWB_Weight_Outdoor_5
0x4C01,	// AWB_Weight_Outdoor_6
0x4D01,	// AWB_Weight_Outdoor_7

// Min-Max R B Color Gain 0

0x7404,  //03		// Min R Gain 0
0x75E0,  //A4    	// 
0x7604,  //0C    	// Max R Gain 0
0x77F0,  //00    	// 
0x7806,  //00		// Min B Gain 0
0x7920,  //20		// 	
0x7A06,  //07		// Max B Gain 0
0x7B30,  //C8    	// 


0xFFFF,
};

//==========================================================
// WB(5)  --END
//==========================================================



//==========================================================
//METERING()
//==========================================================

const regs_t db8v61m_metering_matrix_regs[] =
{
0xFF81,
              
0x9333,  // AE Weight (Left / Top)
0x9433,  // AE Weight (Right / Center)
0x9533,  // AE Weight (Factor / Bottom)
0xFFFF,
};

const regs_t db8v61m_metering_center_regs[] =
{
0xFF81,

0x9322,  // AE Weight (Left / Top)
0x942C,  // AE Weight (Right / Center)
0x9532,  // AE Weight (Factor / Bottom)
0xFFFF,
};

const regs_t db8v61m_metering_spot_regs[] =
{
0xFF81,
              
0x9300,  // AE Weight (Left / Top)
0x940F,  // AE Weight (Right / Center)
0x9510,  // AE Weight (Factor / Bottom)
0xFFFF,
};
//==========================================================
//METERING() - END
//==========================================================


//==========================================================
// BRIGHTNES(9) - START
//==========================================================

const regs_t db8v61m_ev_minus_4_regs[] =
{
0xFF83,
0x60B0,
0xFFFF,
};

const regs_t db8v61m_ev_minus_3_regs[] =
{
0xFF83,
0x60C4,
0xFFFF,
};

const regs_t db8v61m_ev_minus_2_regs[] =
{
0xFF83,
0x60D8,
0xFFFF,

};

const regs_t db8v61m_ev_minus_1_regs[] =
{
0xFF83,
0x60EC,

0xFFFF,
};

const regs_t db8v61m_ev_default_regs[] =
{
0xFF83,
0x6000,

0xFFFF,
};

const regs_t db8v61m_ev_plus_1_regs[] =
{
0xFF83,
0x6013,

0xFFFF,
};

const regs_t db8v61m_ev_plus_2_regs[] =
{
0xFF83,
0x6026,
0xFFFF,
};

const regs_t db8v61m_ev_plus_3_regs[] =
{
0xFF83,
0x6039,
0xFFFF,
};

const regs_t db8v61m_ev_plus_4_regs[] =
{
0xFF83,
0x604E,
0xFFFF,
};
// ==========================================================
// BRIGHTNES(9) - END
//==========================================================

//==========================================================
// contrast(5) - START
//==========================================================

const regs_t db8v61m_contrast_minus_2_regs[] =
{
0xFF83,
0x61A0,
0xFFFF,
};

const regs_t db8v61m_contrast_minus_1_regs[] =
{
0xFF83,
0x6190,
0xFFFF,
};

const regs_t db8v61m_contrast_default_regs[] =
{
0xFF83,
0x6180,
0xFFFF,
};

const regs_t db8v61m_contrast_plus_1_regs[] =
{
0xFF83,
0x6170,
0xFFFF,
};

const regs_t db8v61m_contrast_plus_2_regs[] =
{
0xFF83,
0x6160,
0xFFFF,
};

//==========================================================
// contrast(5) - END
//==========================================================



//==========================================================
// sharpness(5) -START
//==========================================================



//==========================================================
// sharpness(5) -END
//==========================================================


//==========================================================
// saturation(5) - START
//==========================================================


//==========================================================
// saturation(5) - END
//==========================================================





//==========================================================
// ZOOM - START
//==========================================================


//==========================================================
// ZOOM - END
//==========================================================



//==========================================================
// SCENEMODE -START
//==========================================================



// ==========================================================
// 	CAMERA_SCENE_PORTRAIT (Auto/Center/Br0/Auto/Sharp-1/Sat0)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_NIGHT (Night/Center/Br0/Auto/Sharp0/Sat0)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_AGAINSTLIGHT (Auto/Spot(flash) or Center(no flash)/Br0/Auto/Sharp0/Sat0)
// ==========================================================

// ==========================================================
// 	CAMERA_SCENE_LANDSCAPE (Auto/Matrix/Br0/Auto/Sharp+1/Sat+1)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_SPORTS (Sport/Center/Br0/Auto/Sharp0/Sat0)
// ==========================================================

// ==========================================================
// 	CAMERA_SCENE_PARTYINDOOR (ISO200/Center/Br0/Auto/Sharp0/Sat+1)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_BEACHSNOW (ISO50/Center/Br+1/Auto/Sharp0/Sat+1)
// ==========================================================

// ==========================================================
// 	CAMERA_SCENE_SUNSET (Auto/Center/Br0/Daylight/Sharp0/Sat0)
// ==========================================================

// ==========================================================
// 	CAMERA_SCENE_DAWN (Auto/Center/Br0/CWF/Sharp0/Sat0)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_FALLCOLOR (Auto/Center/Br0/Auto/Sharp0/Sat+2)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_FIREWORK (ISO50/Center/Br0/Auto/Sharp0/Sat0)
// ==========================================================


// ==========================================================
// 	CAMERA_SCEBE_CANDLELIGHT (Auto/Center/Br0/Daylight/Sharp0/Sat0)
// ==========================================================


// ==========================================================
// 	CAMERA_SCENE_TEXT (Auto/Center/Br0/Auto/Sharp+2/Sat0)
// ==========================================================

//==========================================================
// SCENEMODE -END
//==========================================================



//==========================================================
//FPS()  - START
//==========================================================


const regs_t db8v61m_sharpness_minus_3_regs[] = 
{
};
const regs_t db8v61m_sharpness_minus_2_regs[] =
{
};
const regs_t db8v61m_sharpness_minus_1_regs[] =
{
};
const regs_t db8v61m_sharpness_default_regs[] =
{
};
const regs_t db8v61m_sharpness_plus_1_regs[] =
{
};
const regs_t db8v61m_sharpness_plus_2_regs[] =
{
};
const regs_t db8v61m_sharpness_plus_3_regs[] =
{
};

const regs_t db8v61m_saturation_minus_2_regs[] =
{
};
const regs_t db8v61m_saturation_minus_1_regs[] =
{
};
const regs_t db8v61m_saturation_default_regs[] =
{
};
const regs_t db8v61m_saturation_plus_1_regs[] =
{
};
const regs_t db8v61m_saturation_plus_2_regs[] =
{
};
const regs_t db8v61m_zoom_00_regs[] =
{
};
const regs_t db8v61m_zoom_01_regs[] =
{
};
const regs_t db8v61m_zoom_02_regs[] =
{
};
const regs_t db8v61m_zoom_03_regs[] =
{
};
const regs_t db8v61m_zoom_04_regs[] =
{
};
const regs_t db8v61m_zoom_05_regs[] =
{
};
const regs_t db8v61m_zoom_06_regs[] =
{
};
const regs_t db8v61m_zoom_07_regs[] =
{
};
const regs_t db8v61m_zoom_08_regs[] =
{
};
const regs_t db8v61m_scene_none_regs[] =
{
};
const regs_t db8v61m_scene_portrait_regs[] =
{
};
const regs_t db8v61m_scene_nightshot_regs[] =
{
};
const regs_t db8v61m_scene_backlight_regs[] =
{
};
const regs_t db8v61m_scene_landscape_regs[] =
{
};
const regs_t db8v61m_scene_sports_regs[] =
{
};
const regs_t db8v61m_scene_party_indoor_regs[] =
{
};
// ==========================================================
const regs_t db8v61m_scene_beach_snow_regs[] =
{
};
const regs_t db8v61m_scene_sunset_regs[] =
{
};
const regs_t db8v61m_scene_duskdawn_regs[] =
{
};
const regs_t db8v61m_scene_fall_color_regs[] =
{
};
const regs_t db8v61m_scene_fireworks_regs[] =
{
};
const regs_t db8v61m_scene_candle_light_regs[] =
{
};
const regs_t db8v61m_scene_text_regs[] =
{
};

const regs_t db8v61m_fps_auto_regs[] =
{
};

const regs_t db8v61m_fps_auto_normal_regs[] =
{
0xFF81,
0x8F01,  // AE Mode

//15-8fps start
0xDF03,  // MinFrame 15fps
0xE021,  //
0xE10F,  // TimeMax60Hz
0xE20A,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE40C,  // TimeMax50Hz
0xE508,  // Time2Lut50Hz
0xE603,  // Time1Lut50Hz    
              
0xFF82,
0x0802,	// FrmMin60Hz High
0x09F4,	// FrmMin60Hz Low
0x0A03,  // FrmMin50Hz High
0x0B8B,	// FrmMin50Hz Low

0x3200,	// Indoor Lux Threshold
0x3304,    	// 

0xFF84,        
0x15A4,  // NSF
0x1651,  // CNF
0x18A4,  // EDE
0x19A4,  // GDC
0x1A41,  // GAM
0x1B41,  // BGT
0x1C43,  // CNT
0x1D62,  // SUP
0x0503,  // AP

0x2C10,  // NSF_Th1

0xFF85,
0x2131,  // ADF_Di_0_Th
              
0xFF81,
0x9039,  // AE Ctrl

0xFFFF,

0xE746, /*Wait  600*/


};

const regs_t db8v61m_fps_auto_Dark_regs[] =
{



};
//==========================================================
//FPS()
//==========================================================

const regs_t db8v61m_fps_5_regs[] = 
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF01,  // MinFrame 5fps
0xE0F5,  //
0xE118,  // TimeMax60Hz
0xE20C,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE414,  // TimeMax50Hz
0xE50A,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x080D,  // FrmMin60Hz High
0x0930,  // FrmMin60Hz Low
0x0A0D,  // FrmMin50Hz High
0x0B30,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x3304,    	// 

0xFF84,        
0x15A4,  // NSF
0x1651,  // CNF
0x18A4,  // EDE
0x19A4,  // GDC
0x1A41,  // GAM
0x1B41,  // BGT
0x1C43,  // CNT
0x1D62,  // SUP
0x0503,  // AP

0x2C10,  // NSF_Th1

0xFF85,
0x2131,  // ADF_Di_0_Th
 
0xFF81,
0x9039,  // AE Ctrl		  

0xFFFF,

0xE728, /*Wait  150*/
};
const regs_t db8v61m_fps_7_regs[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF02,  // MinFrame 5fps
0xE0BD,  //
0xE111,  // TimeMax60Hz
0xE20C,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE40E,  // TimeMax50Hz
0xE50A,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x0809,  // FrmMin60Hz High
0x0957,  // FrmMin60Hz Low
0x0A09,  // FrmMin50Hz High
0x0B3B,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x3304,    	// 

0xFF84,        
0x15A4,  // NSF
0x1651,  // CNF
0x18A4,  // EDE
0x19A4,  // GDC
0x1A41,  // GAM
0x1B41,  // BGT
0x1C43,  // CNT
0x1D62,  // SUP
0x0503,  // AP

0x2C10,  // NSF_Th1              

0xFF85,
0x2131,  // ADF_Di_0_Th
 
0xFF81,
0x9039,  // AE Ctrl	

0xFFFF,

0xE728, /*Wait  150*/
};




const regs_t db8v61m_fps_10_regs[] = 
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF03,  // MinFrame 5fps
0xE0E9,  //
0xE10C,  // TimeMax60Hz
0xE20A,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE40A,  // TimeMax50Hz
0xE508,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x0806,  // FrmMin60Hz High
0x0998,  // FrmMin60Hz Low
0x0A06,  // FrmMin50Hz High
0x0B98,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
 
0xFF81,
0x9039,  // AE Ctrl	   

0xFFFF,

0xE728, /*Wait  150*/
};

const regs_t db8v61m_fps_15_regs[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF05,  // MinFrame 5fps
0xE0DD,  //
0xE108,  // TimeMax60Hz
0xE206,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE406,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0804,  // FrmMin60Hz High
0x0966,  // FrmMin60Hz Low
0x0A03,  // FrmMin50Hz High
0x0BF5,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1695,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
 
0xFF81,
0x9039,  // AE Ctrl	 

0xFFFF,

0xE728, /*Wait  150*/
};

const regs_t db8v61m_fps_20_regs[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF07,  // MinFrame 5fps
0xE0D1,  //
0xE106,  // TimeMax60Hz
0xE204,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE405,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0803,  // FrmMin60Hz High
0x094C,  // FrmMin60Hz Low
0x0A03,  // FrmMin50Hz High
0x0B4C,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
 
0xFF81,
0x9039,  // AE Ctrl		 

0xFFFF,

0xE728, /*Wait  150*/
};
const regs_t db8v61m_fps_25_regs[] =
{

0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF09,  // MinFrame 5fps
0xE0C5,  //
0xE104,  // TimeMax60Hz
0xE204,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE404,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0802,  // FrmMin60Hz High
0x095D,  // FrmMin60Hz Low
0x0A02,  // FrmMin50Hz High
0x0B5D,  // FrmMin50Hz Low

0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th

0xFF81,
0x9039,  // AE Ctrl

0xFFFF,

0xE746, /*Wait  600ms*/

};

const regs_t db8v61m_fps_30_regs[] =
{

0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF0B,  // MinFrame 5fps
0xE0B9,  //
0xE104,  // TimeMax60Hz
0xE204,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE404,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0801,  // FrmMin60Hz High
0x09F8,  // FrmMin60Hz Low
0x0A01,  // FrmMin50Hz High
0x0BF8,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
              
0xFF81,
0x9039,  // AE Ctrl

0xFFFF,

0xE728, /*Wait  150*/

};
    
const regs_t db8v61m_fps_60_regs[] =
{
};
const regs_t db8v61m_fps_120_regs[] =
{
};    

//==========================================================
//FPS()  - END
//==========================================================
//==========================================================
// JPEG QUALITY - // DO NOT USE IT SEHF_CHECK_IT
//==========================================================

//==========================================================
// JPEG QUALITY -END
//==========================================================
//==========================================================
//preivew size() - START
//==========================================================

//==========================================================
//PREVIEW SIZE - END
//==========================================================



//==========================================================
//CAPTURE START
//==========================================================

//==========================================================
//CAPTURE SIZE - END
//==========================================================

const regs_t db8v61m_quality_superfine_regs[] =
{
};
const regs_t db8v61m_quality_fine_regs[] =
{
};

const regs_t db8v61m_quality_normal_regs[] =
{
};

const regs_t db8v61m_quality_economy_regs[] =
{
};
const regs_t db8v61m_preview_size_176x144_regs[] =
{	//176x144
};
const regs_t db8v61m_preview_size_320x240_regs[]=
{
};
const regs_t db8v61m_preview_size_352x288_regs[] =
{	//352x288
};
const regs_t db8v61m_preview_size_640x480_regs[] =
{
};

const regs_t db8v61m_preview_size_704x576_regs[] =
{
};
const regs_t db8v61m_preview_size_720x480_regs[] =
{	//72 0x480
};
const regs_t db8v61m_preview_size_800x480_regs[] =
{	//800x480
};
const regs_t db8v61m_preview_size_800x600_regs[] =
{
};
const regs_t db8v61m_preview_size_1024x600_regs[] =
{
};
const regs_t db8v61m_preview_size_1024x768_regs[] =
{
};
const regs_t db8v61m_HD_Camcorder_regs[] =
{
};
const regs_t db8v61m_HD_Camcorder_Disable_regs[] =
{
};
const regs_t db8v61m_preview_size_1280x960_regs[] =
{
};
const regs_t db8v61m_preview_size_1600x960_regs[] =
{
};
const regs_t db8v61m_preview_size_1600x1200_regs[] =
{
};
const regs_t db8v61m_preview_size_2048x1232_regs[] =
{
};
const regs_t db8v61m_preview_size_2048x1536_regs[] =
{	//2048x1536
};
const regs_t db8v61m_preview_size_2560x1920_regs[] =
{
};
const regs_t db8v61m_capture_size_640x480_regs[] =
{	//640x480
};
    
const regs_t db8v61m_capture_size_720x480_regs[] =
{	
};
    
const regs_t db8v61m_capture_size_800x480_regs[] =
{	
};

const regs_t db8v61m_capture_size_800x486_regs[] =
{	//800x480
};
const regs_t db8v61m_capture_size_800x600_regs[] =
{	
};
const regs_t db8v61m_capture_size_1024x600_regs[] =
{	
};
const regs_t db8v61m_capture_size_1024x768_regs[] =
{	
};

const regs_t db8v61m_capture_size_1280x960_regs[] = 
{
};
const regs_t db8v61m_capture_size_1600x960_regs[] =
{	
};

/* 1600 x 1200 */
const regs_t db8v61m_capture_size_1600x1200_regs[] = 
{
};

const regs_t db8v61m_capture_size_2048x1232_regs[] =
{	//2048x1232
};

const regs_t db8v61m_capture_size_2048x1536_regs[] =
{	//2048x1536
};
const regs_t db8v61m_capture_size_2560x1536_regs[] =
{
};
const regs_t db8v61m_capture_size_2560x1920_regs[] =
{	// 5M
};
//==========================================================
//TEST PATTERN- START
//==========================================================

const regs_t db8v61m_pattern_on_regs[] =
{
0xFFA0,		/*Page mode*/
0x0080,		/*BayerFunc*/
0x0108,		/*RGBYcFunc*/
0x0205,		/*TPG Gamma*/
0xFFFF,

0xE70F, /*Wait  150*/
};

const regs_t db8v61m_pattern_off_regs[] = 
{
0xFFA0,		/*Page mode*/
0x00FF,		/*BayerFunc*/
0x01DF,		/*RGBYcFunc*/
0x0200,		/*TPG Gamma*/
0xFFFF,

0xE70F, /*Wait  150*/
};
//==========================================================
//TEST PATTERN- END
//==========================================================



//==========================================================
//AE - START
//==========================================================

static regs_t db8v61m_ae_lock_regs[] =
{
};
static regs_t db8v61m_ae_unlock_regs[] =
{
};

//==========================================================
//AE - END
//==========================================================



//==========================================================
//AWB - START
//==========================================================

static regs_t db8v61m_awb_lock_regs[] =
{
};
static regs_t db8v61m_awb_unlock_regs[] =
{
};

//==========================================================
//AWB - END
//==========================================================


const regs_t db8v61m_iso_auto_regs[] =
{
};

const regs_t db8v61m_iso_50_regs[] =
{
};

const regs_t db8v61m_iso_100_regs[] =
{
};

const regs_t db8v61m_iso_200_regs[] =
{
};

const regs_t db8v61m_iso_400_regs[] =
{
};


//==========================================================
//WDR - START
//==========================================================

const regs_t db8v61m_wdr_on_regs[] = {
};

const regs_t db8v61m_wdr_off_regs[] = {
};

//==========================================================
//WDR - END
//==========================================================


//==========================================================
// BRIGHTNES(9) Camcorder
//==========================================================

const regs_t db8v61m_ev_camcorder_minus_4_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_minus_3_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_minus_2_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_minus_1_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_default_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_plus_1_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_plus_2_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_plus_3_regs[] =
{
};

const regs_t db8v61m_ev_camcorder_plus_4_regs[] =
{
};


//==========================================================
// Auto Contrast
//==========================================================

const regs_t db8v61m_auto_contrast_on_regs[] =
{
};

const regs_t db8v61m_auto_contrast_off_regs[] =
{
};



//==========================================================
//AF() - SEHF_AF_CHECK
//==========================================================

const regs_t db8v61m_af_return_inf_pos[] =
{
};

const regs_t db8v61m_af_return_macro_pos[] =
{
};

const regs_t db8v61m_focus_mode_auto_regs[] =
{
};


const regs_t db8v61m_focus_mode_macro_regs[] =
{
};

const regs_t db8v61m_wb_iso_auto_regs[] = 
{
};
const regs_t db8v61m_wb_manual_iso_auto_regs[] =
{
};
const regs_t db8v61m_wb_auto_iso_manual_regs[] =
{
};
const regs_t db8v61m_wb_manual_iso_manual_regs[] =
{
};


// Frame Fixed
const regs_t db8v61m_vt_mode_regs[] = 
{
/*
 Command Preview Fixed 8fps
*/
//===================================
// For Analog Setting
//===================================
0xFFD0,
0x1108,  // ChrgPmpBypass
0x17E1,  // AMP_CDS
0x295B,  // FallScanTx
0x5814,  // Rise Tran
0x5A16,  // Fall Tran
0x5F70,  // ABlkCtrlRsrv
0x6907,  // CDS_Ctrl

//==================================//
// ADF Anlog                        //
//==================================//
0xFF84,
0x0503,  // APthreshold
0x060E,  // APClmpthreshold

0x9300,  //Min NCP Range
0x9403,  //Min GC
0x9503,  //Min rstcds
0x971D,  //Min FallIntTx
0x9C08,  //Min ClmpCtrl

0x9D00,  //Max NCP Range
0x9E03,  //Max GC
0x9F03,  //Max rstcds
0xA11D,    //Max FallIntTx
0xA608,  //Max ClmpCtrl
              
0xFF85,
0x0602,  //Min rstl
0x0906,  //Min Amp_Intege
0x143C,  //Min Analog ADF En0 RISE QT_SIG 
0x187D,  //Min Analog ADF EN1 FALL QSIG
              
0x0702,  //Max rstl
0x0A06,  //Max Amp_Intege
0x1543,  //Max Analog ADF EN0 RISE QT_SIG
0x198B,  //Max Analog ADF EN1 FALL QSIG
              
0x1085,  //Analog ADF En0, En1
0x1344,  //Analog Address Low ADF En0
0x1735,  //Analog Address Low ADF En1      

// UR Analog
0xFF83,
0xBf01,  //pixel_bias

//==================================//
// PMS/OD                              //
//==================================//
0xFFD0,
0x6F01,
0x700F,
0x7100,
0x7704,

//==================================//
// AE                               //
//==================================//
0xFFA1,
0x9100,  // Point A
0x9200,  
0x933A,  // Point B
0x9424,  
0x9566,  // Point C
0x9654,  
0x97A0,  // Point D
0x9878,  

0xFF81,
0x8F02,  // AE Mode
0x9019,  // AE Ctrl
              
0x9322,  // AE Weight (Left / Top)
0x942C,  // AE Weight (Right / Center)
0x9532,  // AE Weight (Factor / Bottom)
0x9606,  // AE Speed
0x9702,  // AeLockBnd
0x9806,  // AeHoldBnd
0x9908,  // Analog gain max
              
0xA33A,  // Outdoor Target
0xA43A,  // Indoor Target

0xBD28,  // LowLevelIndex_0
0xBE16,  // LowLevelIndex_1
0xBF02,  // LowLevelIndex_2
              
0xD505, //05	// PLL 27MHz
0xD614, //46	
              
0xDA00,  // AE Gain Max 
0xDBA0,  //
0xDC70,  // Gain2Lut
0xDD28,  // Gain1Lut
0xDE20,  // GainMin

//15-8fps start
0xDF03,  // MinFrame 15fps
0xE021,  //
0xE10F,  // TimeMax60Hz
0xE20C,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE40C,  // TimeMax50Hz
0xE50A,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x0803,	// FrmMin60Hz High
0x09F0,	// FrmMin60Hz Low
0x0A03,	// FrmMin50Hz High
0x0BFD,	// FrmMin50Hz Low
              
0xFF81,
0x9039,  // AE Ctrl

//==================================//
// AWB STE                          //
//==================================//
0xFFA1,
0x9F01,  // AWBZone0LTx   // Flash
0xA001,  // AWBZone0LTy
0xA102,  // AWBZone0RBx
0xA202,  // AWBZone0RBy
0xA373,  // AWBZone1LTx   // Cloudy
0xA45C,  // AWBZone1LTy
0xA584,  // AWBZone1RBx
0xA642,  // AWBZone1RBy
0xA75C,  // AWBZone2LTx   // Daylight
0xA864,  // AWBZone2LTy
0xA97B,  // AWBZone2RBx
0xAA44,  // AWBZone2RBy
0xAB56,  // AWBZone3LTx   // Fluorescent
0xAC72,  // AWBZone3LTy
0xAD6E,  // AWBZone3RBx
0xAE65,  // AWBZone3RBy
0xAF44,  // AWBZone4LTx   // CoolWhite
0xB06E,  // AWBZone4LTy
0xB161,  // AWBZone4RBx
0xB24C,  // AWBZone4RBy
0xB33F,  // AWBZone5LTx   // TL84
0xB484,  // AWBZone5LTy
0xB555,  // AWBZone5RBx
0xB666,  // AWBZone5RBy
0xB739,  // AWBZone6LTx   // A
0xB89C,  // AWBZone6LTy
0xB94C,  // AWBZone6RBx
0xBA85,  // AWBZone6RBy
0xBB34,  // AWBZone7LTx   // Horizon
0xBCB4,  // AWBZone7LTy
0xBD46,  // AWBZone7RBx
0xBE9C,  // AWBZone7RBy
          
//==================================//
// AWB                              //
//==================================//
0xFF82,
0x1DA3,  // SwitchFlag [7]:Special RB Gain
0x3200,  // Indoor Lux Threshold
0x3303,  // 
0x3401,  // Outdoor Lux Threshold
0x3500,  // 
                   
0x3610,  // AWB_Weight_General_0
0x3710,  // AWB_Weight_General_1
0x3810,  // AWB_Weight_General_2
0x3910,  // AWB_Weight_General_3
0x3A20,  // AWB_Weight_General_4
0x3B18,  // AWB_Weight_General_5
0x3C10,  // AWB_Weight_General_6
0x3D18,  // AWB_Weight_General_7
0x3E10,  // AWB_Weight_Indoor_0
0x3F10,  // AWB_Weight_Indoor_1
0x4010,  // AWB_Weight_Indoor_2
0x4120,  // AWB_Weight_Indoor_3
0x4210,  // AWB_Weight_Indoor_4
0x4310,  // AWB_Weight_Indoor_5
0x4400,  // AWB_Weight_Indoor_6
0x4500,  // AWB_Weight_Indoor_7
0x4600,  // AWB_Weight_Outdoor_0
0x4720,  // AWB_Weight_Outdoor_1
0x4820,  // AWB_Weight_Outdoor_2
0x4900,  // AWB_Weight_Outdoor_3
0x4A20,  // AWB_Weight_Outdoor_4
0x4B00,  // AWB_Weight_Outdoor_5
0x4C00,  // AWB_Weight_Outdoor_6
0x4D00,  // AWB_Weight_Outdoor_7
              
0x5100,  // AWB_unicolorzone
0x5A00,  // Min Gray Count
0x5B96,  //

// Min-Max R B Color Gain 0
0x8406,  // LSValue0 Under
0x8507,  // LSValue1  Upper
              
0x7403,  // Min R Gain 0
0x75A4,  // 
0x760C,  // Max R Gain 0
0x7700,  // 
0x7800,  // Min B Gain 0
0x7920,  //   
0x7A07,  // Max B Gain 0
0x7BC8,  //   
                 
0x7C03,  // Min R Gain 1
0x7DA8,  //
0x7E04,  // Max R Gain 1
0x7F00,  // 
0x8003,  // Min B Gain 1
0x8160,  //   
0x8207,  // Max B Gain 1
0x8370,  //

//==================================//
// CCM D65                          //
//==================================//
0x9D00,  // CrcMtx11_Addr1 
0x9E76,  // CrcMtx11_Addr0 
0x9FFF,  // CrcMtx12_Addr1                           
0xA0C8,  // CrcMtx12_Addr0         
0xA100,  // CrcMtx13_Addr1 
0xA202,  // CrcMtx13_Addr0
0xA3FF,  // CrcMtx21_Addr1 
0xA4F4,  // CrcMtx21_Addr0 
0xA500,  // CrcMtx22_Addr1 
0xA659,  // CrcMtx22_Addr0 
0xA7FF,  // CrcMtx23_Addr1 
0xA8F0,  // CrcMtx23_Addr0 
0xA900,  // CrcMtx31_Addr1 
0xAA02,  // CrcMtx31_Addr0 
0xABFF,  // CrcMtx32_Addr1 
0xACCA,  // CrcMtx32_Addr0 
0xAD00,  // CrcMtx33_Addr1 
0xAE74,  // CrcMtx33_Addr0

//==================================//
// CCM Coolwhite                    //
//==================================//
0xAF00,  // CrcMtx11_Addr1 
0xB060,  // CrcMtx11_Addr0 
0xB1FF,  // CrcMtx12_Addr1 
0xB2D8,  // CrcMtx12_Addr0 
0xB300,  // CrcMtx13_Addr1 
0xB408,  // CrcMtx13_Addr0 
0xB5FF,  // CrcMtx21_Addr1 
0xB6F3,  // CrcMtx21_Addr0 
0xB700,  // CrcMtx22_Addr1 
0xB841,  // CrcMtx22_Addr0 
0xB900,  // CrcMtx23_Addr1 
0xBA0C,  // CrcMtx23_Addr0 
0xBB00,  // CrcMtx31_Addr1 
0xBC00,  // CrcMtx31_Addr0 
0xBDFF,  // CrcMtx32_Addr1 
0xBEC8,  // CrcMtx32_Addr0 
0xBF00,  // CrcMtx33_Addr1 
0xC078,  // CrcMtx33_Addr0
 
//==================================//
// CCM A                            //
//==================================//
0xC100,  // CrcMtx11_Addr1 
0xC262,  // CrcMtx11_Addr0 
0xC3FF,  // CrcMtx12_Addr1 
0xC4E0,  // CrcMtx12_Addr0 
0xC5FF,  // CrcMtx13_Addr1 
0xC6FE,  // CrcMtx13_Addr0 
0xC7FF,  // CrcMtx21_Addr1 
0xC8F5,  // CrcMtx21_Addr0 
0xC900,  // CrcMtx22_Addr1 
0xCA5A,  // CrcMtx22_Addr0 
0xCBFF,  // CrcMtx23_Addr1 
0xCCF0,  // CrcMtx23_Addr0 
0xCDFF,  // CrcMtx31_Addr1 
0xCEFB,  // CrcMtx31_Addr0 
0xCFFF,  // CrcMtx32_Addr1 
0xD0B8,  // CrcMtx32_Addr0 
0xD100,  // CrcMtx33_Addr1 
0xD28E,  // CrcMtx33_Addr0

//==================================//
// CCM Outdoor                      //
//==================================//
0xD301,  // OutCCM&GMA_Threshold
0xD400,

0xD500,  // CrcMtx11_Addr1 
0xD676,  // CrcMtx11_Addr0 
0xD7FF,  // CrcMtx12_Addr1 
0xD8C8,  // CrcMtx12_Addr0 
0xD900,  // CrcMtx13_Addr1 
0xDA02,  // CrcMtx13_Addr0 
0xDBFF,  // CrcMtx21_Addr1 
0xDCEE,  // CrcMtx21_Addr0 
0xDD00,  // CrcMtx22_Addr1 
0xDE61,  // CrcMtx22_Addr0 
0xDFFF,  // CrcMtx23_Addr1 
0xE0F0,  // CrcMtx23_Addr0 
0xE100,  // CrcMtx31_Addr1 
0xE202,  // CrcMtx31_Addr0 
0xE3FF,  // CrcMtx32_Addr1 
0xE4CA,  // CrcMtx32_Addr0 
0xE500,  // CrcMtx33_Addr1 
0xE674,  // CrcMtx33_Addr0

//==================================//
// ADF                              //
//==================================//
0xFF84,
0x00FF,  // FuncCtrl1
0x01FF,  // FuncCtrl2
0x02E7,  // FuncCtrl3
0x0338,  // Flag [7]:EnSUPRowSumOne [6]:EnYcFunc [5]:CB [4]:RowSumOne
              
//BGT         
0x1B32,  // Th_BGT  
0x3024,  // Min_BGT  
0x4E00,  // Max_BGT  
              
//CNT         
0x1C61,  // Th_CNT  
0x3100,  // Min_CON  
0x4F00,  // Max_CON  
 
//================================//
// ADF - LSC                      //
//================================//       
0x12A3,  // ThrLevel_LVLSC
0x13E0,  // ThrLevel_LSLSC

//Min Shading
0x1FF0,  // Min_LVLSC
0x20F0,  // Min_RRp0Gain
0x216A,  // Min_RRp1Gain
0x220A,  // Min_RRp2Gain  
0x2307,  // Min_RRp3Gain  
0x2490,  // Min_BBp0Gain
0x2568,  // Min_BBp1Gain
0x260B,  // Min_BBp2Gain
0x2707,  // Min_BBp3Gain
0x2898,  // Min_GGp0Gain
0x2958,  // Min_GGp1Gain
0x2A04,  // Min_GGp2Gain
0x2B00,  // Min_GGp3Gain

//Max Shading
0x3DF0,  // Max_LVLSC
0x3ED0,  // Max_RRp0Gain  
0x3F48,  // Max_RRp1Gain  
0x4003,  // Max_RRp2Gain  
0x4100,  // Max_RRp3Gain  
0x4286,  // Max_BBp0Gain
0x4350,  // Max_BBp1Gain
0x4406,  // Max_BBp2Gain
0x4504,  // Max_BBp3Gain
0x4688,  // Max_GGp0Gain
0x4746,  // Max_GGp1Gain
0x4802,  // Max_GGp2Gain
0x4900,  // Max_GGp3Gain

//================================//
// ADF - NSF                      //
//================================//
0x1594,  // ThrLevel_NSF
0xED40,  // ADF_STVal_NSF_TH1
0xEEA0,  // ADF_STVal_NSF_TH2
0x2C16,  // Min_NSFTh1
0x2D50,  // Min_NSFTh2
0x4A10,  // Max_NSFTh1
0x4B38,  // Max_NSFTh2
0xEF10,  // ADF_EndVal_NSF_TH1
0xF028,  // ADF_EndVal_NSF_TH2  

//================================//
// ADF - CNF                      //
//================================//
// ADF - CNFTh1 
0x1703,  // ThrLevel_CNFTh1
0x2EB3,  // Min_CNFTh1
0x4CB3,  // Max_CNFTh1

// ADF - CNFTh2 
0x1661,  // ThrLevel_CNFTh2
0x2F08,  // Min_CNFTh2
0x4D06,  // Max_CNFTh2

// ADF - CNFTh3, 4 
0xF100,  // CNFTh3 - cloudy, daylight, flourscent
0xF400,  // CNFTh4 - cloudy, daylight, flourscent
0xF202,  // CNFTh3 - CWF, TL84
0xF502,  // CNFTh4 - CWF, TL84
0xF300,  // CNFTh3 - A, Horizon
0xF600,  // CNFTh4 - A, Horizon

0xFFA1,
0x460A,  // CNFTh5

// ADF - Color Booster
0xFF84,
0x1EA4,  // ThrLevel_CLB
0x3A04,  // Min CLBTh
0x3B40,  // Min CLB Cb Slope 
0x3C40,  // Min CLB Cr Slope
0x5804,  // Max CLBTh
0x5940,  // Max CLB Cb Slope
0x5A40,  // Max CLB Cr Slope      

0xFFA1,
0x4A00,  // CLB_SecEnb

//================================//
// ADF - EDE new                  //
//================================//
0xFF84,
0x1894,  // Th_Edge  
0x3205,  // Min_Coring  
0x3305,  // Min_Edge_Slope1  
0x3408,  // Min_Edge_Slope2  
0x3500,  // Min_Edge_SmallOffset  
0x3622,  // Min_Edge_Slope
0x5003,  // Max_Coring  
0x5107,  // Max_Edge_Slope1  
0x5208,  // Max_Edge_Slope2  
0x5300,  // Max_Edge_SmallOffset  
0x5432,  // Max_Edge_Slope

0xDF40,  // DEDE_Th_Lux1 [ Middle 1 , Low ]
0xE0FA,  // DEDE_Th_Lux2 [ High , Middle 2 ]
              
0xE105,  // DEDE_Start_SL1
0xE208,  // DEDE_Mid1_SL1
0xE309,  // DEDE_Mid2_SL1
0xE409,  // DEDE_End_SL1
              
0xE500,  //
0xE620,  // DEDE_Start_Xp1
//E700,  //
0xE820,  // DEDE_Mid1_Xp1
0xE900,  //
0xEA20,  // DEDE_Mid2_Xp1
0xEB00,  //
0xEC20,  // DEDE_End_Xp1
              
0xF9FA,  // EdgeOP_Th
0xFB20,  // Out_EdOP
0xFC20,  // In_EdOP
0xFE00,  // Out_SmThrd_Val

0xFF85,
0x0000,  // In_SmThrd_Val

0x0102,  // Min_Small_Edge_Gain
0x0202,  // Max_Small_Edge_Gain

//================================//
// ADF Gamma                      //
//================================//
0xFF84,
0xBC01,  // DarkGMA Threshold
0x1A32,  // Gamma Threshold
0xA900,  // ADF_OutDGMAHys
0xAA00,  //
         
0x5B01,  // Min_Gamma_0 
0x5C0C,  // Min_Gamma_1 
0x5D1C,  // Min_Gamma_2 
0x5E3B,  // Min_Gamma_3 
0x5F51,  // Min_Gamma_4 
0x6062,  // Min_Gamma_5 
0x617E,  // Min_Gamma_6 
0x6296,  // Min_Gamma_7 
0x63A5,  // Min_Gamma_8 
0x64B2,  // Min_Gamma_9 
0x65C8,  // Min_Gamma_10
0x66DA,  // Min_Gamma_11
0x67E8,  // Min_Gamma_12
0x68EE,  // Min_Gamma_13
0x69F4,  // Min_Gamma_14
0x6AFA,  // Min_Gamma_15
0x6BFF,  // Min_Gamma_16

0x6C00,  // Max_Gamma_0  
0x6D02,  // Max_Gamma_1  
0x6E0E,  // Max_Gamma_2  
0x6F30,  // Max_Gamma_3  
0x704E,  // Max_Gamma_4  
0x7162,  // Max_Gamma_5  
0x727A,  // Max_Gamma_6  
0x738D,  // Max_Gamma_7  
0x749A,  // Max_Gamma_8  
0x75A7,  // Max_Gamma_9  
0x76C0,  // Max_Gamma_10 
0x77D4,  // Max_Gamma_11 
0x78E7,  // Max_Gamma_12 
0x79EF,  // Max_Gamma_13 
0x7AF5,  // Max_Gamma_14 
0x7BFA,  // Max_Gamma_15 
0x7CFF,  // Max_Gamma_16 

0xAB00,  // OutDGMA_Gamma_0  
0xAC04,  // OutDGMA_Gamma_1  
0xAD18,  // OutDGMA_Gamma_2  
0xAE30,  // OutDGMA_Gamma_3  
0xAF42,  // OutDGMA_Gamma_4  
0xB052,  // OutDGMA_Gamma_5  
0xB16C,  // OutDGMA_Gamma_6  
0xB280,  // OutDGMA_Gamma_7  
0xB392,  // OutDGMA_Gamma_8  
0xB4A2,  // OutDGMA_Gamma_9  
0xB5BC,  // OutDGMA_Gamma_10 
0xB6D0,  // OutDGMA_Gamma_11 
0xB7E2,  // OutDGMA_Gamma_12 
0xB8EA,  // OutDGMA_Gamma_13 
0xB9F2,  // OutDGMA_Gamma_14 
0xBAF9,  // OutDGMA_Gamma_15 
0xBBFF,  // OutDGMA_Gamma_16             
       
//Suppression              
0x1D62,  // Th_SUP          
0x3980,  // Min_suppression
0x5780,  // Max_suppression  

//=================================//            
// ADF Update                       //
//=================================//            
0xCE01,  // ADF_Refresh

//=================================//            
// Saturation                       //
//=================================//            
0x8F00,  // Color Hue 
0x9140,  // Color Saturation  

//===================================
// Flip
//===================================
0xFFD0,
0x0303,  // B[1] : Y, B[0] : X

//===================================
// For 5614 Setting
//===================================
0xFFB0,
//0x102A,  // MIPI DATA TYPE Addr
0x101E,  // MIPI DATA TYPE Addr

//===================================
// clock off Enable  
//===================================
0xFFD1,
0x0400,  // clock off

//===================================
// Preview Command (VGA)
//===================================
0xFFC0,
0x1002,
0xFFFF,
0xE70F, /*Wait  150*/

};

const regs_t db8v61m_init_regs_smart_stay[] = {
//ADD
};

const regs_t db8v61m_Pre_Flash_Start_EVT1[] =
{
};

const regs_t db8v61m_Pre_Flash_End_EVT1[] =
{
};

const regs_t db8v61m_Main_Flash_Start_EVT1[] =
{
};

const regs_t db8v61m_Main_Flash_End_EVT1[] =
{
};

const regs_t db8v61m_focus_mode_auto_regs_cancel1[] =
{
};

const regs_t db8v61m_focus_mode_auto_regs_cancel2[] =
{
};

const regs_t db8v61m_focus_mode_auto_regs_cancel3[] =
{
};

const regs_t db8v61m_focus_mode_macro_regs_cancel1[] =
{
};

const regs_t db8v61m_focus_mode_macro_regs_cancel2[] =
{
};

const regs_t db8v61m_focus_mode_macro_regs_cancel3[] =
{
};

// Frame Auto
const regs_t db8v61m_init_regs_60hz[]={
//===================================
// For Analog Setting
//===================================
0xFFD0,

0x1108,    // ChrgPmpBypss
0x17E1,    // AMP_CDS
0x295B,    // FallScanTx
0x5814,    // Rise Tran
0x5A16,    // Fall Tran
0x5F70,    // ABlkCtrlRsrv
0x6907,    // CDS_Ctrl
0x1B01,    // Pixel Bias

0xFFB0,
0x2500,    // Clock Prepare Timing
0x2703,    // Clock Trail Timing
0x290E,    // Data/Clock Post Timing
0x3304,    // Data Trail Timing

//==================================//
// ADF Anlog                        //
//==================================//
0xFF84,
0x0503,		// APthreshold
0x060E,		// APClmpthreshold

0x9300,		//Min NCP Range
0x9403,		//Min GC
0x9503,		//Min rstcds
0x9603,		//Min RiseIntTx
0x971D,		//Min FallIntTx
0x9801,		//Min RiseIntRx
0x991F,		//Min FallIntRx
0x9A00,		//Min RiseIntLatch
0x9B1F,		//Min FallIntLatch
0x9C08,		//Min ClmpCtrl

0x9D00,		//Max NCP Range
0x9E03,		//Max GC
0x9F03,		//Max rstcds
0xA003,		//Max RiseIntTx
0xA11D,		//Max FallIntTx
0xA201,		//Max RiseIntRx
0xA31F,		//Max FallIntRx
0xA400,		//Max RiseIntLatch
0xA51F,		//Max FallIntLatch
0xA608,		//Max ClmpCtrl

0xFF85,
0x0602,            //Min rstl
0x0906,            //Min Amp_Intege
0x143C,            //Min Analog ADF En0 RISE QT_SIG 
0x187D,            //Min Analog ADF EN1 FALL QSIG

0x0702,            //Max rstl
0x0A06,            //Max Amp_Intege
0x1543,            //Max Analog ADF EN0 RISE QT_SIG
0x198B,            //Max Analog ADF EN1 FALL QSIG

0x1085,            //Analog ADF En0
0x1344,            //Analog Address Low ADF En0
0x1735,            //Analog Address Low ADF En1

//==================================//
// FMT                              //
//==================================//
0xFFA1,
//7000,
0x710D,

//==================================//
// PMS/OD                              //
//==================================//
0xFF83,
0xA801,
0xA90F,
0xAA00,
0xAB04,

//==================================//
// AE                               //
//==================================//
0xFFA1,
0x9108,	// Point A
0x9208,	
0x9340,	// Point B
0x942A,	
0x9560,	// Point C
0x964E,	
0x9798,	// Point D
0x9870,	

0xFF81,
0x8F01,    	// AE Mode
0x901D,    	// AE Ctrl

0x9322,	// AE Weight (Left / Top)
0x942C,    	// AE Weight (Right / Center)
0x9532,	// AE Weight (Factor / Bottom)
0x9606,	// AE Speed
0x9702,		// AeLockBnd
0x9806,		// AeHoldBnd
0x9908,		// Analog gain max

0xA338,	// Outdoor Target
0xA438,	// Indoor Target

0xBD2A,	// LowLevelIndex_0
0xBE0C,	// LowLevelIndex_1
0xBF02,		// LowLevelIndex_2

0xD505, //05	// PLL 26MHz
0xD614, //12	

0xDA00,    	// AE Gain Max 
0xDBA0,   		//
0xDC60,	// Gain2Lut
0xDD36,	// Gain1Lut
0xDE20,		// GainMin

//15-8fps start
0xDF03,	// MinFrame 15fps
0xE021,	//
0xE10F,	// TimeMax60Hz
0xE20A,	// Time2Lut60Hz
0xE304,		// Time1Lux60Hz
0xE40C,	// TimeMax50Hz
0xE508,	// Time2Lut50Hz
0xE603,		// Time1Lut50Hz		

0xFF82,
0x0802,	// FrmMin60Hz High
0x09F4,	// FrmMin60Hz Low
0x0A03,	// FrmMin50Hz High
0x0B8B,	// FrmMin50Hz Low

0xFF81,
0x903D,		// AE Ctrl

//==================================//
// AWB STE                          //
//==================================//
0xFFA1,
0x9B22,
0x9C02,
0x9F3A,  //3F //01	// AWBZone0LTx   // Flash
0xA0D8,  //7E //01	// AWBZone0LTy
0xA156,  //55 //02	// AWBZone0RBx
0xA2C8,  //73 //02	// AWBZone0RBy
0xA373, //73	// AWBZone1LTx   // Cloudy
0xA464, //62	// AWBZone1LTy
0xA588, //88	// AWBZone1RBx
0xA644, //42	// AWBZone1RBy
0xA75C, //5C	// AWBZone2LTx   // Daylight
0xA864, //64	// AWBZone2LTy
0xA978, //78	// AWBZone2RBx
0xAA44, //44	// AWBZone2RBy
0xAB48, //56	// AWBZone3LTx   // Fluorescent
0xAC72, //72	// AWBZone3LTy
0xAD68, //6E	// AWBZone3RBx
0xAE65, //65	// AWBZone3RBy
0xAF44, //44	// AWBZone4LTx   // CoolWhite
0xB06E, //6E	// AWBZone4LTy
0xB165, //5B	// AWBZone4RBx
0xB244, //4C	// AWBZone4RBy
0xB33F, //3F	// AWBZone5LTx   // TL84
0xB490, //8B	// AWBZone5LTy
0xB555, //55	// AWBZone5RBx
0xB670, //6F	// AWBZone5RBy
0xB73C, //3C	// AWBZone6LTx   // A
0xB8A4, //A0	// AWBZone6LTy
0xB954, //52	// AWBZone6RBx
0xBA8A, //8A	// AWBZone6RBy
0xBB3A, //34	// AWBZone7LTx   // Horizon
0xBCBA, //BA	// AWBZone7LTy
0xBD56, //4A	// AWBZone7RBx
0xBEA0, //A0	// AWBZone7RBy

0xFF83,
0x0104,	// STD R
0x02F0,    	//        
0x0306,	// STD B
0x0410,    	// 
          
//==================================//
// AWB                              //
//==================================//
0xFF82,
0x1DA7,		// SwitchFlag [7]:Special RB Gain
0x3200,	// Indoor Lux Threshold
0x3304,    	// 
0x3400,	// Outdoor Lux Threshold
0x3560,    	// 

0x6404,	// AWB Start R
0x65F0,    	// 
0x6806,	// AWB Start B
0x6910,    	// 
                 
0x3600, //00	// AWB_Weight_General_0
0x3718, //12    	// AWB_Weight_General_1
0x3810, //10	// AWB_Weight_General_2
0x3913, //13	// AWB_Weight_General_3
0x3A20, //20    	// AWB_Weight_General_4
0x3B10, //10	// AWB_Weight_General_5
0x3C10, //10	// AWB_Weight_General_6
0x3D0E, //0E	// AWB_Weight_General_7
0x3E00, //10	// AWB_Weight_Indoor_0
0x3F00, //10	// AWB_Weight_Indoor_1
0x4010, //10	// AWB_Weight_Indoor_2
0x4110, //10   		// AWB_Weight_Indoor_3
0x4218, //10    	// AWB_Weight_Indoor_4
0x430E, //00	// AWB_Weight_Indoor_5
0x440E, //00	// AWB_Weight_Indoor_6
0x4500, //00	// AWB_Weight_Indoor_7
0x4600, //00	// AWB_Weight_Outdoor_0
0x4700, //00	// AWB_Weight_Outdoor_1
0x4820, //20    	// AWB_Weight_Outdoor_2
0x4900, //18	// AWB_Weight_Outdoor_3		 
0x4A00, //00	// AWB_Weight_Outdoor_4
0x4B00, //00	// AWB_Weight_Outdoor_5
0x4C00, //00	// AWB_Weight_Outdoor_6
0x4D00, //00	// AWB_Weight_Outdoor_7

0x5105,    	// AWB_unicolorzone
0x5A01,    	// Min Gray Count
0x5B00,    	//

// Min-Max R B Color Gain 0
0x8406,  //06,	// LSValue0 Under
0x8507,  //07,	// LSValue1	Upper
    	  //      	
0x7403,  //03,	03	// Min R Gain 0
0x7534,  //A4,  A4  	// 
0x760C,  //0C,  0C  	// Max R Gain 0
0x7700,  //00,  00  	// 
0x7800,  //00,	00	// Min B Gain 0
0x7920,  //20,	20	// 	
0x7A07,  //07,	07	// Max B Gain 0
0x7BC8,  //C8,  C8  	// 
        //
0x7C03, //03		// Min R Gain 1
0x7DA0, //50	//
0x7E03, //03	// Max R Gain 1
0x7FF0, //D0	// 
0x8006, //06	// Min B Gain 1
0x8180, //80	// 	
0x8207, //07		// Max B Gain 1
0x8370, //68	//

//==================================//
// CCM D65                          //
//==================================//
0x9D00,		//   CrcMtx11_Addr1 
0x9E72,	// CrcMtx11_Addr0 
0x9FFF,    	//   CrcMtx12_Addr1 
0xA0C8,	// CrcMtx12_Addr0         
0xA100,	// CrcMtx13_Addr1 
0xA206,	// CrcMtx13_Addr0
0xA3FF,		//   CrcMtx21_Addr1 
0xA4F7,	// CrcMtx21_Addr0 
0xA500,		//   CrcMtx22_Addr1 
0xA651,		//   CrcMtx22_Addr0 
0xA7FF,		//   CrcMtx23_Addr1 
0xA8F4,	// CrcMtx23_Addr0 
0xA900,	// CrcMtx31_Addr1 
0xAA04,	// CrcMtx31_Addr0 
0xABFF,		//   CrcMtx32_Addr1 
0xACCA,	// CrcMtx32_Addr0 
0xAD00,		//   CrcMtx33_Addr1 
0xAE72,	// CrcMtx33_Addr0

//==================================//
// CCM Coolwhite                    //
//==================================//
0xAF00,		//   CrcMtx11_Addr1 
0xB061,	// CrcMtx11_Addr0 
0xB1FF,    	//   CrcMtx12_Addr1 
0xB2D7,	// CrcMtx12_Addr0 
0xB300,	// CrcMtx13_Addr1 
0xB408,	// CrcMtx13_Addr0 
0xB5FF,		//   CrcMtx21_Addr1 
0xB6F3,	// CrcMtx21_Addr0 
0xB700,		//   CrcMtx22_Addr1 
0xB841,	// CrcMtx22_Addr0 
0xB900,	// CrcMtx23_Addr1 
0xBA0C,	// CrcMtx23_Addr0 
0xBB00,	// CrcMtx31_Addr1 
0xBC00,	// CrcMtx31_Addr0 
0xBDFF,		//   CrcMtx32_Addr1 
0xBEC8,	// CrcMtx32_Addr0 
0xBF00,		//   CrcMtx33_Addr1 
0xC078,	// CrcMtx33_Addr0
  
//==================================//
// CCM A                            //
//==================================//
0xC100,		//   CrcMtx11_Addr1 
0xC262,	// CrcMtx11_Addr0 
0xC3FF,    	//   CrcMtx12_Addr1 
0xC4E0,	// CrcMtx12_Addr0 
0xC5FF,    	//   CrcMtx13_Addr1 
0xC6FE,	// CrcMtx13_Addr0 
0xC7FF,		//   CrcMtx21_Addr1 
0xC8F5,	// CrcMtx21_Addr0 
0xC900,		//   CrcMtx22_Addr1 
0xCA5A,	// CrcMtx22_Addr0 
0xCBFF,		//   CrcMtx23_Addr1 
0xCCF0,	// CrcMtx23_Addr0 
0xCDFF,		//   CrcMtx31_Addr1 
0xCEFB,	// CrcMtx31_Addr0 
0xCFFF,		//   CrcMtx32_Addr1 
0xD0B8,	// CrcMtx32_Addr0 
0xD100,		//   CrcMtx33_Addr1 
0xD28E,	// CrcMtx33_Addr0

//==================================//
// CCM Outdoor                      //
//==================================//
0xD301,	// OutCCM&GMA_Threshold
0xD400,

0xD500,		//   CrcMtx11_Addr1 
0xD66C,	// CrcMtx11_Addr0 
0xD7FF,    	//   CrcMtx12_Addr1 
0xD8D1,	// CrcMtx12_Addr0 
0xD900,    	//   CrcMtx13_Addr1 
0xDA02,	// CrcMtx13_Addr0 
0xDBFF,		//   CrcMtx21_Addr1 
0xDCF2,	// CrcMtx21_Addr0 
0xDD00,		//   CrcMtx22_Addr1 
0xDE5B,	// CrcMtx22_Addr0 
0xDFFF,		//   CrcMtx23_Addr1 
0xE0F2,	// CrcMtx23_Addr0 
0xE100,	// CrcMtx31_Addr1 
0xE204,	// CrcMtx31_Addr0 
0xE3FF,		//   CrcMtx32_Addr1 
0xE4D4,	// CrcMtx32_Addr0 
0xE500,		//   CrcMtx33_Addr1 
0xE669,	// CrcMtx33_Addr0
//==================================//
// ADF                              //
//==================================//
0xFF84,
0x00FD,	// FuncCtrl1
0x01FF,		// FuncCtrl2
0x02E7,		// FuncCtrl3
0x03B8,		// Flag [7]:EnSUPRowSumOne [6]:EnYcFunc [5]:CB [4]:RowSumOne

//BGT       	
0x1B41,	// Th_BGT	
0x30FC,	// Min_BGT	
0x4E00,		// Max_BGT	

//CNT       	
0x1C43,	// Th_CNT	
0x3100,		// Min_CON	
0x4F04,		// Max_CON	

//================================//
// ADF - LSC                      //
//================================//
0xFFA0,
//5BF0,  // LVLSC

0xFF84,
0x1263, // ThrLevel_LVLSC
0x13E0,	// ThrLevel_LSLSC
0x1F90,
0x3DF0,

//Min Shading
0x20F0,	// Min_RRp0Gain
0x216A,	// Min_RRp1Gain
0x220A,	// Min_RRp2Gain	
0x2307,	// Min_RRp3Gain	
0x2490,	// Min_BBp0Gain
0x2568,	// Min_BBp1Gain
0x260B,	// Min_BBp2Gain
0x2707,	// Min_BBp3Gain
0x2898,	// Min_GGp0Gain
0x2958,	// Min_GGp1Gain
0x2A04,	// Min_GGp2Gain
0x2B00,		// Min_GGp3Gain

//Max Shading
0x3EE0,	// Max_RRp0Gain	
0x3F48,	// Max_RRp1Gain	
0x4003,	// Max_RRp2Gain	
0x4100,		// Max_RRp3Gain	
0x4286,	// Max_BBp0Gain
0x4350,	// Max_BBp1Gain
0x4406,	// Max_BBp2Gain
0x4504,	// Max_BBp3Gain
0x4688,	// Max_GGp0Gain
0x4746,	// Max_GGp1Gain
0x4802,	// Max_GGp2Gain
0x4900,		// Max_GGp3Gain

//================================//
// ADF - NSF                      //
//================================//
0x15A4,	// ThrLevel_NSF
0xED28,	// ADF_STVal_NSF_TH1
0xEE90,	// ADF_STVal_NSF_TH2
0x2C10,	// Min_NSFTh1
0x2D60,	// Min_NSFTh2
0x4A0D,	// Max_NSFTh1
0x4B48,	// Max_NSFTh2
0xEF0D,	// ADF_EndVal_NSF_TH1
0xF030,	// ADF_EndVal_NSF_TH2	

//================================//
// ADF - CNF                      //
//================================//
// ADF - CNFTh1 
0x1703,	// ThrLevel_CNFTh1
0x2E93,	// Min_CNFTh1
0x4CB3,	// Max_CNFTh1

// ADF - CNFTh2 
0x1651,	// ThrLevel_CNFTh2
0x2F02,	// Min_CNFTh2
0x4D06,	// Max_CNFTh2

// ADF - CNFTh3, 4 
0xF100,	// CNFTh3 - cloudy, daylight, flourscent
0xF400,	// CNFTh4 - cloudy, daylight, flourscent
0xF200,	// CNFTh3 - CWF, TL84
0xF500,	// CNFTh4 - CWF, TL84
0xF300,	// CNFTh3 - A, Horizon
0xF600,	// CNFTh4 - A, Horizon

0xFFA1,
0x4606,	// CNFTh5

// ADF - Color Booster
0xFF84,
0x1E31, 		// ThrLevel_CLB
0x3A02,	// Min CLBTh
0x3B3E,		// Min CLB Cb Slope 
0x3C3E,		// Min CLB Cr Slope
0x5802,	// Max CLBTh
0x5940,		// Max CLB Cb Slope
0x5A40,		// Max CLB Cr Slope      

0xFFA1,
0x4A0F,		// CLB_SecEnb

//================================//
// ADF - EDE new                  //
//================================//
0xFF84,
0x18A4,	// Th_Edge	
0x3205,		// Min_Coring	
0x3305,		// Min_Edge_Slope1	
0x340A,		// Min_Edge_Slope2	
0x3501,	// Min_Edge_SmallOffset	
0x3622,	// Min_Edge_Slope
0x5003,		// Max_Coring	
0x5107,	// Max_Edge_Slope1	
0x520B,	// Max_Edge_Slope2	
0x5301,	// Max_Edge_SmallOffset	
0x5422,	// Max_Edge_Slope

0xDF40,	// DEDE_Th_Lux1 [ Middle 1 , Low ]
0xE0FA,		// DEDE_Th_Lux2 [ High , Middle 2 ]

0xE106,	// DEDE_Start_SL1
0xE206,	// DEDE_Mid1_SL1
0xE308,	// DEDE_Mid2_SL1
0xE40A,	// DEDE_End_SL1

0xE500,		//
0xE620,		// DEDE_Start_Xp1
//E700		//
0xE81C,		// DEDE_Mid1_Xp1
0xE900,		//
0xEA18,		// DEDE_Mid2_Xp1
0xEB00,		//
0xEC20,		// DEDE_End_Xp1

0xFFA1,
0x3600,  // EDETransFuncXP2
0x3780,

0xFF84,
0xF902,	// EdgeOP_Th
0xFB20,		// Out_EdOP
0xFC00,		// In_EdOP
0xFE00,		// Out_SmThrd_Val

0xFF85,
0x0000,		// In_SmThrd_Val

0x0100,		// Min_Small_Edge_Gain
0x0200,		// Max_Small_Edge_Gain

//================================//
// ADF Gamma                      //
//================================//
0xFF84,
0xBC01,    	// DarkGMA Threshold
0x1A41,	// Gamma Threshold
0xA900,	// ADF_OutDGMAHys
0xAA00,	//

0xBD00,	// Dark_Gamma_0 
0xBE0A,	// Dark_Gamma_1 
0xBF20,	// Dark_Gamma_2 
0xC03A,	// Dark_Gamma_3 
0xC14D,	// Dark_Gamma_4 
0xC25A,	// Dark_Gamma_5 
0xC36D,	// Dark_Gamma_6 
0xC480,	// Dark_Gamma_7 
0xC590,	// Dark_Gamma_8 
0xC69E,	// Dark_Gamma_9 
0xC7B8,	// Dark_Gamma_10
0xC8CC,	// Dark_Gamma_11
0xC9DE,	// Dark_Gamma_12
0xCAE6,	// Dark_Gamma_13
0xCBEE,	// Dark_Gamma_14
0xCCF5,	// Dark_Gamma_15
0xCDFF,	// Dark_Gamma_16
       
0x5B00, //00,	// Min_Gamma_0 
0x5C18, //1A,	// Min_Gamma_1 
0x5D2A, //20,	// Min_Gamma_2 
0x5E48, //40,	// Min_Gamma_3 
0x5F5E, //58,	// Min_Gamma_4 
0x606E, //68	// Min_Gamma_5 
0x6186, //84,	// Min_Gamma_6 
0x6298, //96,	// Min_Gamma_7 
0x63A6, //A4,	// Min_Gamma_8 
0x64B1, //B1,	// Min_Gamma_9 
0x65C5, //C5,	// Min_Gamma_10
0x66D8, //D8,	// Min_Gamma_11
0x67E5, //E6,	// Min_Gamma_12
0x68EB, //ED,	// Min_Gamma_13
0x69F2, //F2,	// Min_Gamma_14
0x6AF8, //F8,	// Min_Gamma_15
0x6BFF, //FF,	// Min_Gamma_16

0x6C00, 		// Max_Gamma_0  
0x6D02,  // Max_Gamma_1  
0x6E12,  // Max_Gamma_2  
0x6F26, 		// Max_Gamma_3  
0x7036,  // Max_Gamma_4  
0x7148,  // Max_Gamma_5  
0x7264,  // Max_Gamma_6  
0x737C,  // Max_Gamma_7  
0x748E,  // Max_Gamma_8  
0x759E, 		// Max_Gamma_9  
0x76B8,  // Max_Gamma_10 
0x77CC, 		// Max_Gamma_11 
0x78DE,  // Max_Gamma_12 
0x79E6,  // Max_Gamma_13 
0x7AEE,  // Max_Gamma_14 
0x7BF5,  // Max_Gamma_15 
0x7CFF, 		// Max_Gamma_16 

0xAB00, 		// OutDGMA_Gamma_0  
0xAC04, 		// OutDGMA_Gamma_1  
0xAD0E,	// OutDGMA_Gamma_2  
0xAE26, 		// OutDGMA_Gamma_3  
0xAF40,	// OutDGMA_Gamma_4  
0xB054,	// OutDGMA_Gamma_5  
0xB16D,	// OutDGMA_Gamma_6  
0xB282,	// OutDGMA_Gamma_7  
0xB392,	// OutDGMA_Gamma_8  
0xB4A2, 		// OutDGMA_Gamma_9  
0xB5BC,	// OutDGMA_Gamma_10 
0xB6D0,	// OutDGMA_Gamma_11 
0xB7E2, 		// OutDGMA_Gamma_12 
0xB8EA, 		// OutDGMA_Gamma_13 
0xB9F2, 		// OutDGMA_Gamma_14 
0xBAF9,	// OutDGMA_Gamma_15 
0xBBFF, 		// OutDGMA_Gamma_16 
       
//Suppression              
0x1D62,	// Th_SUP	        
0x3960,		// Min_suppression
0x5780,		// Max_suppression

//=================================//						
// ADF Update						           //
//=================================//						
0xCE01,	// ADF_Refresh

//=================================//						
// Saturation		           //
//=================================//
0x8F00,		// Color Hue 						
0x9140,		// Color Saturation	
       
//===================================
// Flip
//===================================
0xFFD0,
0x0300,	// B[1] : Y, B[0] : X

//===================================
// DDC & GDC
//===================================
0xFF85,
0x10C5,	// Manual_ADF_Di_En
0x110F,	// 0~1 Enable

0x1FA0,	// YOff0_DDC Addr
0x2064,

0x2131, // ADF_Di_0_Th
0x2200,	// DDC Dark
0x230F,	// DDC Normal


0x25A1,	// YOff0_DDC Addr
0x26B0,

0x2878,	// STE CW
0x296E,	// STE CW

//===================================
// For 5614 Setting
//===================================
0xFFB0,
//0x102A,  // MIPI DATA TYPE Addr
0x101E,  // MIPI DATA TYPE Addr


//===================================
// clock off Enable  
//===================================
0xFFD1,
0x0400,  // clock off

//===================================
// Preview Command (VGA)
//===================================
0xFFC0,
0x1002,


0xFFFF,

0xE70F, // 150ms	 
/* Self-Cam END of Initial*/

};

const regs_t db8v61m_fps_auto_normal_regs_60hz[] =
{
0xFF81,
0x8F01,  // AE Mode

//15-8fps start
0xDF03,  // MinFrame 15fps
0xE021,  //
0xE10F,  // TimeMax60Hz
0xE20A,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE40C,  // TimeMax50Hz
0xE508,  // Time2Lut50Hz
0xE603,  // Time1Lut50Hz    
              
0xFF82,
0x0802,	// FrmMin60Hz High
0x09F4,	// FrmMin60Hz Low
0x0A03,  // FrmMin50Hz High
0x0B8B,	// FrmMin50Hz Low

0x3200,	// Indoor Lux Threshold
0x3304,    	// 

0xFF84,        
0x15A4,  // NSF
0x1651,  // CNF
0x18A4,  // EDE
0x19A4,  // GDC
0x1A41,  // GAM
0x1B41,  // BGT
0x1C43,  // CNT
0x1D62,  // SUP
0x0503,  // AP

0x2C10,  // NSF_Th1

0xFF85,
0x2131,  // ADF_Di_0_Th
              
              
0xFF81,
0x903D,  // AE Ctrl

0xFFFF,

0xE728, /*Wait  150*/

};

const regs_t db8v61m_fps_auto_Dark_regs_60hz[] =
{
//ADD


};
//==========================================================
//FPS()
//==========================================================
const regs_t db8v61m_fps_5_regs_60hz[] = 
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF01,  // MinFrame 5fps
0xE0F5,  //
0xE118,  // TimeMax60Hz
0xE20C,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE414,  // TimeMax50Hz
0xE50A,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x080D,  // FrmMin60Hz High
0x0930,  // FrmMin60Hz Low
0x0A0D,  // FrmMin50Hz High
0x0B30,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x3304,    	// 

0xFF84,        
0x15A4,  // NSF
0x1651,  // CNF
0x18A4,  // EDE
0x19A4,  // GDC
0x1A41,  // GAM
0x1B41,  // BGT
0x1C43,  // CNT
0x1D62,  // SUP
0x0503,  // AP

0x2C10,  // NSF_Th1

0xFF85,
0x2131,  // ADF_Di_0_Th
 
0xFF81,
0x903D,  // AE Ctrl		  

0xFFFF,

0xE728, /*Wait  150*/

};
const regs_t db8v61m_fps_7_regs_60hz[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF02,  // MinFrame 5fps
0xE0BD,  //
0xE111,  // TimeMax60Hz
0xE20C,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE40E,  // TimeMax50Hz
0xE50A,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x0809,  // FrmMin60Hz High
0x0957,  // FrmMin60Hz Low
0x0A09,  // FrmMin50Hz High
0x0B3B,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x3304,    	// 

0xFF84,        
0x15A4,  // NSF
0x1651,  // CNF
0x18A4,  // EDE
0x19A4,  // GDC
0x1A41,  // GAM
0x1B41,  // BGT
0x1C43,  // CNT
0x1D62,  // SUP
0x0503,  // AP

0x2C10,  // NSF_Th1              

0xFF85,
0x2131,  // ADF_Di_0_Th
 
0xFF81,
0x903D,  // AE Ctrl	

0xFFFF,

0xE728, /*Wait  150*/
};




const regs_t db8v61m_fps_10_regs_60hz[] = 
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF03,  // MinFrame 5fps
0xE0E9,  //
0xE10C,  // TimeMax60Hz
0xE20A,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE40A,  // TimeMax50Hz
0xE508,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x0806,  // FrmMin60Hz High
0x0998,  // FrmMin60Hz Low
0x0A06,  // FrmMin50Hz High
0x0B98,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
 
0xFF81,
0x903D,  // AE Ctrl	   

0xFFFF,

0xE728, /*Wait  150*/
};

const regs_t db8v61m_fps_15_regs_60hz[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF05,  // MinFrame 5fps
0xE0DD,  //
0xE108,  // TimeMax60Hz
0xE206,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE406,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0804,  // FrmMin60Hz High
0x0966,  // FrmMin60Hz Low
0x0A03,  // FrmMin50Hz High
0x0BF5,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1695,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
 
0xFF81,
0x903D,  // AE Ctrl	 

0xFFFF,

0xE728, /*Wait  150*/

};

const regs_t db8v61m_fps_20_regs_60hz[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF07,  // MinFrame 5fps
0xE0D1,  //
0xE106,  // TimeMax60Hz
0xE204,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE405,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0803,  // FrmMin60Hz High
0x094C,  // FrmMin60Hz Low
0x0A03,  // FrmMin50Hz High
0x0B4C,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
 
0xFF81,
0x903D,  // AE Ctrl		 

0xFFFF,

0xE728, /*Wait  150*/
};
const regs_t db8v61m_fps_25_regs_60hz[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF09,  // MinFrame 5fps
0xE061,  //
0xE104,  // TimeMax60Hz
0xE204,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE404,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0802,  // FrmMin60Hz High
0x0976,  // FrmMin60Hz Low
0x0A02,  // FrmMin50Hz High
0x0B76,  // FrmMin50Hz Low

0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th

0xFF81,
0x903D,  // AE Ctrl

0xFFFF,

0xE728, /*Wait  150*/
};

const regs_t db8v61m_fps_30_regs_60hz[] =
{
0xFF81,
0x8F02,  // AE Mode

//15-8fps start
0xDF0B,  // MinFrame 5fps
0xE0B9,  //
0xE104,  // TimeMax60Hz
0xE204,  // Time2Lut60Hz
0xE304,  // Time1Lux60Hz
0xE404,  // TimeMax50Hz
0xE504,  // Time2Lut50Hz
0xE604,  // Time1Lut50Hz    
              
0xFF82,
0x0801,  // FrmMin60Hz High
0x09F8,  // FrmMin60Hz Low
0x0A01,  // FrmMin50Hz High
0x0BF8,  // FrmMin50Hz Low
              
0x3200,	// Indoor Lux Threshold
0x330A,    	// 

0xFF84,
0x1595,  // NSF
0x1685,  // CNF
0x1895,  // EDE
0x1995,  // GDC
0x1A41,  // GAM
0x1B95,  // BGT
0x1C95,  // CNT
0x1D95,  // SUP
0x0505,  // AP

0x2C15,  // NSF_Th1

0xFF85,
0x2175,  // ADF_Di_0_Th
              
0xFF81,
0x903D,  // AE Ctrl

0xFFFF,

0xE728, /*Wait  150*/
};

// Frame Fixed
const regs_t db8v61m_vt_mode_regs_60hz[] = 
{
/*
 Command Preview Fixed 8fps
*/
//===================================
// For Analog Setting
//===================================
0xFFD0,
0x1108,  // ChrgPmpBypass
0x17E1,  // AMP_CDS
0x295B,  // FallScanTx
0x5814,  // Rise Tran
0x5A16,  // Fall Tran
0x5F70,  // ABlkCtrlRsrv
0x6907,  // CDS_Ctrl

//==================================//
// ADF Anlog                        //
//==================================//
0xFF84,
0x0503,  // APthreshold
0x060E,  // APClmpthreshold

0x9300,  //Min NCP Range
0x9403,  //Min GC
0x9503,  //Min rstcds
0x971D,  //Min FallIntTx
0x9C08,  //Min ClmpCtrl

0x9D00,  //Max NCP Range
0x9E03,  //Max GC
0x9F03,  //Max rstcds
0xA11D,    //Max FallIntTx
0xA608,  //Max ClmpCtrl
              
0xFF85,
0x0602,  //Min rstl
0x0906,  //Min Amp_Intege
0x143C,  //Min Analog ADF En0 RISE QT_SIG 
0x187D,  //Min Analog ADF EN1 FALL QSIG
              
0x0702,  //Max rstl
0x0A06,  //Max Amp_Intege
0x1543,  //Max Analog ADF EN0 RISE QT_SIG
0x198B,  //Max Analog ADF EN1 FALL QSIG
              
0x1085,  //Analog ADF En0, En1
0x1344,  //Analog Address Low ADF En0
0x1735,  //Analog Address Low ADF En1      

// UR Analog
0xFF83,
0xBf01,  //pixel_bias

//==================================//
// PMS/OD                              //
//==================================//
0xFFD0,
0x6F01,
0x700F,
0x7100,
0x7704,

//==================================//
// AE                               //
//==================================//
0xFFA1,
0x9100,  // Point A
0x9200,  
0x933A,  // Point B
0x9424,  
0x9566,  // Point C
0x9654,  
0x97A0,  // Point D
0x9878,  

0xFF81,
0x8F02,  // AE Mode
0x901D,  // AE Ctrl
              
0x9322,  // AE Weight (Left / Top)
0x942C,  // AE Weight (Right / Center)
0x9532,  // AE Weight (Factor / Bottom)
0x9606,  // AE Speed
0x9702,  // AeLockBnd
0x9806,  // AeHoldBnd
0x9908,  // Analog gain max
              
0xA33A,  // Outdoor Target
0xA43A,  // Indoor Target

0xBD28,  // LowLevelIndex_0
0xBE16,  // LowLevelIndex_1
0xBF02,  // LowLevelIndex_2
              
0xD505, //05	// PLL 27MHz
0xD614, //46	
              
0xDA00,  // AE Gain Max 
0xDBA0,  //
0xDC70,  // Gain2Lut
0xDD28,  // Gain1Lut
0xDE20,  // GainMin

//15-8fps start
0xDF03,  // MinFrame 15fps
0xE021,  //
0xE10F,  // TimeMax60Hz
0xE20C,  // Time2Lut60Hz
0xE308,  // Time1Lux60Hz
0xE40C,  // TimeMax50Hz
0xE50A,  // Time2Lut50Hz
0xE606,  // Time1Lut50Hz    
              
0xFF82,
0x0803,	// FrmMin60Hz High
0x09F0,	// FrmMin60Hz Low
0x0A03,	// FrmMin50Hz High
0x0BFD,	// FrmMin50Hz Low
              
0xFF81,
0x903D,  // AE Ctrl

//==================================//
// AWB STE                          //
//==================================//
0xFFA1,
0x9F01,  // AWBZone0LTx   // Flash
0xA001,  // AWBZone0LTy
0xA102,  // AWBZone0RBx
0xA202,  // AWBZone0RBy
0xA373,  // AWBZone1LTx   // Cloudy
0xA45C,  // AWBZone1LTy
0xA584,  // AWBZone1RBx
0xA642,  // AWBZone1RBy
0xA75C,  // AWBZone2LTx   // Daylight
0xA864,  // AWBZone2LTy
0xA97B,  // AWBZone2RBx
0xAA44,  // AWBZone2RBy
0xAB56,  // AWBZone3LTx   // Fluorescent
0xAC72,  // AWBZone3LTy
0xAD6E,  // AWBZone3RBx
0xAE65,  // AWBZone3RBy
0xAF44,  // AWBZone4LTx   // CoolWhite
0xB06E,  // AWBZone4LTy
0xB161,  // AWBZone4RBx
0xB24C,  // AWBZone4RBy
0xB33F,  // AWBZone5LTx   // TL84
0xB484,  // AWBZone5LTy
0xB555,  // AWBZone5RBx
0xB666,  // AWBZone5RBy
0xB739,  // AWBZone6LTx   // A
0xB89C,  // AWBZone6LTy
0xB94C,  // AWBZone6RBx
0xBA85,  // AWBZone6RBy
0xBB34,  // AWBZone7LTx   // Horizon
0xBCB4,  // AWBZone7LTy
0xBD46,  // AWBZone7RBx
0xBE9C,  // AWBZone7RBy
          
//==================================//
// AWB                              //
//==================================//
0xFF82,
0x1DA3,  // SwitchFlag [7]:Special RB Gain
0x3200,  // Indoor Lux Threshold
0x3303,  // 
0x3401,  // Outdoor Lux Threshold
0x3500,  // 
                   
0x3610,  // AWB_Weight_General_0
0x3710,  // AWB_Weight_General_1
0x3810,  // AWB_Weight_General_2
0x3910,  // AWB_Weight_General_3
0x3A20,  // AWB_Weight_General_4
0x3B18,  // AWB_Weight_General_5
0x3C10,  // AWB_Weight_General_6
0x3D18,  // AWB_Weight_General_7
0x3E10,  // AWB_Weight_Indoor_0
0x3F10,  // AWB_Weight_Indoor_1
0x4010,  // AWB_Weight_Indoor_2
0x4120,  // AWB_Weight_Indoor_3
0x4210,  // AWB_Weight_Indoor_4
0x4310,  // AWB_Weight_Indoor_5
0x4400,  // AWB_Weight_Indoor_6
0x4500,  // AWB_Weight_Indoor_7
0x4600,  // AWB_Weight_Outdoor_0
0x4720,  // AWB_Weight_Outdoor_1
0x4820,  // AWB_Weight_Outdoor_2
0x4900,  // AWB_Weight_Outdoor_3
0x4A20,  // AWB_Weight_Outdoor_4
0x4B00,  // AWB_Weight_Outdoor_5
0x4C00,  // AWB_Weight_Outdoor_6
0x4D00,  // AWB_Weight_Outdoor_7
              
0x5100,  // AWB_unicolorzone
0x5A00,  // Min Gray Count
0x5B96,  //

// Min-Max R B Color Gain 0
0x8406,  // LSValue0 Under
0x8507,  // LSValue1  Upper
              
0x7403,  // Min R Gain 0
0x75A4,  // 
0x760C,  // Max R Gain 0
0x7700,  // 
0x7800,  // Min B Gain 0
0x7920,  //   
0x7A07,  // Max B Gain 0
0x7BC8,  //   
                 
0x7C03,  // Min R Gain 1
0x7DA8,  //
0x7E04,  // Max R Gain 1
0x7F00,  // 
0x8003,  // Min B Gain 1
0x8160,  //   
0x8207,  // Max B Gain 1
0x8370,  //

//==================================//
// CCM D65                          //
//==================================//
0x9D00,  // CrcMtx11_Addr1 
0x9E76,  // CrcMtx11_Addr0 
0x9FFF,  // CrcMtx12_Addr1                           
0xA0C8,  // CrcMtx12_Addr0         
0xA100,  // CrcMtx13_Addr1 
0xA202,  // CrcMtx13_Addr0
0xA3FF,  // CrcMtx21_Addr1 
0xA4F4,  // CrcMtx21_Addr0 
0xA500,  // CrcMtx22_Addr1 
0xA659,  // CrcMtx22_Addr0 
0xA7FF,  // CrcMtx23_Addr1 
0xA8F0,  // CrcMtx23_Addr0 
0xA900,  // CrcMtx31_Addr1 
0xAA02,  // CrcMtx31_Addr0 
0xABFF,  // CrcMtx32_Addr1 
0xACCA,  // CrcMtx32_Addr0 
0xAD00,  // CrcMtx33_Addr1 
0xAE74,  // CrcMtx33_Addr0

//==================================//
// CCM Coolwhite                    //
//==================================//
0xAF00,  // CrcMtx11_Addr1 
0xB060,  // CrcMtx11_Addr0 
0xB1FF,  // CrcMtx12_Addr1 
0xB2D8,  // CrcMtx12_Addr0 
0xB300,  // CrcMtx13_Addr1 
0xB408,  // CrcMtx13_Addr0 
0xB5FF,  // CrcMtx21_Addr1 
0xB6F3,  // CrcMtx21_Addr0 
0xB700,  // CrcMtx22_Addr1 
0xB841,  // CrcMtx22_Addr0 
0xB900,  // CrcMtx23_Addr1 
0xBA0C,  // CrcMtx23_Addr0 
0xBB00,  // CrcMtx31_Addr1 
0xBC00,  // CrcMtx31_Addr0 
0xBDFF,  // CrcMtx32_Addr1 
0xBEC8,  // CrcMtx32_Addr0 
0xBF00,  // CrcMtx33_Addr1 
0xC078,  // CrcMtx33_Addr0
 
//==================================//
// CCM A                            //
//==================================//
0xC100,  // CrcMtx11_Addr1 
0xC262,  // CrcMtx11_Addr0 
0xC3FF,  // CrcMtx12_Addr1 
0xC4E0,  // CrcMtx12_Addr0 
0xC5FF,  // CrcMtx13_Addr1 
0xC6FE,  // CrcMtx13_Addr0 
0xC7FF,  // CrcMtx21_Addr1 
0xC8F5,  // CrcMtx21_Addr0 
0xC900,  // CrcMtx22_Addr1 
0xCA5A,  // CrcMtx22_Addr0 
0xCBFF,  // CrcMtx23_Addr1 
0xCCF0,  // CrcMtx23_Addr0 
0xCDFF,  // CrcMtx31_Addr1 
0xCEFB,  // CrcMtx31_Addr0 
0xCFFF,  // CrcMtx32_Addr1 
0xD0B8,  // CrcMtx32_Addr0 
0xD100,  // CrcMtx33_Addr1 
0xD28E,  // CrcMtx33_Addr0

//==================================//
// CCM Outdoor                      //
//==================================//
0xD301,  // OutCCM&GMA_Threshold
0xD400,

0xD500,  // CrcMtx11_Addr1 
0xD676,  // CrcMtx11_Addr0 
0xD7FF,  // CrcMtx12_Addr1 
0xD8C8,  // CrcMtx12_Addr0 
0xD900,  // CrcMtx13_Addr1 
0xDA02,  // CrcMtx13_Addr0 
0xDBFF,  // CrcMtx21_Addr1 
0xDCEE,  // CrcMtx21_Addr0 
0xDD00,  // CrcMtx22_Addr1 
0xDE61,  // CrcMtx22_Addr0 
0xDFFF,  // CrcMtx23_Addr1 
0xE0F0,  // CrcMtx23_Addr0 
0xE100,  // CrcMtx31_Addr1 
0xE202,  // CrcMtx31_Addr0 
0xE3FF,  // CrcMtx32_Addr1 
0xE4CA,  // CrcMtx32_Addr0 
0xE500,  // CrcMtx33_Addr1 
0xE674,  // CrcMtx33_Addr0

//==================================//
// ADF                              //
//==================================//
0xFF84,
0x00FF,  // FuncCtrl1
0x01FF,  // FuncCtrl2
0x02E7,  // FuncCtrl3
0x0338,  // Flag [7]:EnSUPRowSumOne [6]:EnYcFunc [5]:CB [4]:RowSumOne
              
//BGT         
0x1B32,  // Th_BGT  
0x3024,  // Min_BGT  
0x4E00,  // Max_BGT  
              
//CNT         
0x1C61,  // Th_CNT  
0x3100,  // Min_CON  
0x4F00,  // Max_CON  
 
//================================//
// ADF - LSC                      //
//================================//       
0x12A3,  // ThrLevel_LVLSC
0x13E0,  // ThrLevel_LSLSC

//Min Shading
0x1FF0,  // Min_LVLSC
0x20F0,  // Min_RRp0Gain
0x216A,  // Min_RRp1Gain
0x220A,  // Min_RRp2Gain  
0x2307,  // Min_RRp3Gain  
0x2490,  // Min_BBp0Gain
0x2568,  // Min_BBp1Gain
0x260B,  // Min_BBp2Gain
0x2707,  // Min_BBp3Gain
0x2898,  // Min_GGp0Gain
0x2958,  // Min_GGp1Gain
0x2A04,  // Min_GGp2Gain
0x2B00,  // Min_GGp3Gain

//Max Shading
0x3DF0,  // Max_LVLSC
0x3ED0,  // Max_RRp0Gain  
0x3F48,  // Max_RRp1Gain  
0x4003,  // Max_RRp2Gain  
0x4100,  // Max_RRp3Gain  
0x4286,  // Max_BBp0Gain
0x4350,  // Max_BBp1Gain
0x4406,  // Max_BBp2Gain
0x4504,  // Max_BBp3Gain
0x4688,  // Max_GGp0Gain
0x4746,  // Max_GGp1Gain
0x4802,  // Max_GGp2Gain
0x4900,  // Max_GGp3Gain

//================================//
// ADF - NSF                      //
//================================//
0x1594,  // ThrLevel_NSF
0xED40,  // ADF_STVal_NSF_TH1
0xEEA0,  // ADF_STVal_NSF_TH2
0x2C16,  // Min_NSFTh1
0x2D50,  // Min_NSFTh2
0x4A10,  // Max_NSFTh1
0x4B38,  // Max_NSFTh2
0xEF10,  // ADF_EndVal_NSF_TH1
0xF028,  // ADF_EndVal_NSF_TH2  

//================================//
// ADF - CNF                      //
//================================//
// ADF - CNFTh1 
0x1703,  // ThrLevel_CNFTh1
0x2EB3,  // Min_CNFTh1
0x4CB3,  // Max_CNFTh1

// ADF - CNFTh2 
0x1661,  // ThrLevel_CNFTh2
0x2F08,  // Min_CNFTh2
0x4D06,  // Max_CNFTh2

// ADF - CNFTh3, 4 
0xF100,  // CNFTh3 - cloudy, daylight, flourscent
0xF400,  // CNFTh4 - cloudy, daylight, flourscent
0xF202,  // CNFTh3 - CWF, TL84
0xF502,  // CNFTh4 - CWF, TL84
0xF300,  // CNFTh3 - A, Horizon
0xF600,  // CNFTh4 - A, Horizon

0xFFA1,
0x460A,  // CNFTh5

// ADF - Color Booster
0xFF84,
0x1EA4,  // ThrLevel_CLB
0x3A04,  // Min CLBTh
0x3B40,  // Min CLB Cb Slope 
0x3C40,  // Min CLB Cr Slope
0x5804,  // Max CLBTh
0x5940,  // Max CLB Cb Slope
0x5A40,  // Max CLB Cr Slope      

0xFFA1,
0x4A00,  // CLB_SecEnb

//================================//
// ADF - EDE new                  //
//================================//
0xFF84,
0x1894,  // Th_Edge  
0x3205,  // Min_Coring  
0x3305,  // Min_Edge_Slope1  
0x3408,  // Min_Edge_Slope2  
0x3500,  // Min_Edge_SmallOffset  
0x3622,  // Min_Edge_Slope
0x5003,  // Max_Coring  
0x5107,  // Max_Edge_Slope1  
0x5208,  // Max_Edge_Slope2  
0x5300,  // Max_Edge_SmallOffset  
0x5432,  // Max_Edge_Slope

0xDF40,  // DEDE_Th_Lux1 [ Middle 1 , Low ]
0xE0FA,  // DEDE_Th_Lux2 [ High , Middle 2 ]
              
0xE105,  // DEDE_Start_SL1
0xE208,  // DEDE_Mid1_SL1
0xE309,  // DEDE_Mid2_SL1
0xE409,  // DEDE_End_SL1
              
0xE500,  //
0xE620,  // DEDE_Start_Xp1
//E700,  //
0xE820,  // DEDE_Mid1_Xp1
0xE900,  //
0xEA20,  // DEDE_Mid2_Xp1
0xEB00,  //
0xEC20,  // DEDE_End_Xp1
              
0xF9FA,  // EdgeOP_Th
0xFB20,  // Out_EdOP
0xFC20,  // In_EdOP
0xFE00,  // Out_SmThrd_Val

0xFF85,
0x0000,  // In_SmThrd_Val

0x0102,  // Min_Small_Edge_Gain
0x0202,  // Max_Small_Edge_Gain

//================================//
// ADF Gamma                      //
//================================//
0xFF84,
0xBC01,  // DarkGMA Threshold
0x1A32,  // Gamma Threshold
0xA900,  // ADF_OutDGMAHys
0xAA00,  //
         
0x5B01,  // Min_Gamma_0 
0x5C0C,  // Min_Gamma_1 
0x5D1C,  // Min_Gamma_2 
0x5E3B,  // Min_Gamma_3 
0x5F51,  // Min_Gamma_4 
0x6062,  // Min_Gamma_5 
0x617E,  // Min_Gamma_6 
0x6296,  // Min_Gamma_7 
0x63A5,  // Min_Gamma_8 
0x64B2,  // Min_Gamma_9 
0x65C8,  // Min_Gamma_10
0x66DA,  // Min_Gamma_11
0x67E8,  // Min_Gamma_12
0x68EE,  // Min_Gamma_13
0x69F4,  // Min_Gamma_14
0x6AFA,  // Min_Gamma_15
0x6BFF,  // Min_Gamma_16

0x6C00,  // Max_Gamma_0  
0x6D02,  // Max_Gamma_1  
0x6E0E,  // Max_Gamma_2  
0x6F30,  // Max_Gamma_3  
0x704E,  // Max_Gamma_4  
0x7162,  // Max_Gamma_5  
0x727A,  // Max_Gamma_6  
0x738D,  // Max_Gamma_7  
0x749A,  // Max_Gamma_8  
0x75A7,  // Max_Gamma_9  
0x76C0,  // Max_Gamma_10 
0x77D4,  // Max_Gamma_11 
0x78E7,  // Max_Gamma_12 
0x79EF,  // Max_Gamma_13 
0x7AF5,  // Max_Gamma_14 
0x7BFA,  // Max_Gamma_15 
0x7CFF,  // Max_Gamma_16 

0xAB00,  // OutDGMA_Gamma_0  
0xAC04,  // OutDGMA_Gamma_1  
0xAD18,  // OutDGMA_Gamma_2  
0xAE30,  // OutDGMA_Gamma_3  
0xAF42,  // OutDGMA_Gamma_4  
0xB052,  // OutDGMA_Gamma_5  
0xB16C,  // OutDGMA_Gamma_6  
0xB280,  // OutDGMA_Gamma_7  
0xB392,  // OutDGMA_Gamma_8  
0xB4A2,  // OutDGMA_Gamma_9  
0xB5BC,  // OutDGMA_Gamma_10 
0xB6D0,  // OutDGMA_Gamma_11 
0xB7E2,  // OutDGMA_Gamma_12 
0xB8EA,  // OutDGMA_Gamma_13 
0xB9F2,  // OutDGMA_Gamma_14 
0xBAF9,  // OutDGMA_Gamma_15 
0xBBFF,  // OutDGMA_Gamma_16             
       
//Suppression              
0x1D62,  // Th_SUP          
0x3980,  // Min_suppression
0x5780,  // Max_suppression  

//=================================//            
// ADF Update                       //
//=================================//            
0xCE01,  // ADF_Refresh

//=================================//            
// Saturation                       //
//=================================//            
0x8F00,  // Color Hue 
0x9140,  // Color Saturation  

//===================================
// Flip
//===================================
0xFFD0,
0x0303,  // B[1] : Y, B[0] : X

//===================================
// For 5614 Setting
//===================================
0xFFB0,
//0x102A,  // MIPI DATA TYPE Addr
0x101E,  // MIPI DATA TYPE Addr

//===================================
// clock off Enable  
//===================================
0xFFD1,
0x0400,  // clock off

//===================================
// Preview Command (VGA)
//===================================
0xFFC0,
0x1002,
0xFFFF,
0xE70F, /*Wait  150*/

};

const regs_t db8v61m_init_regs_smart_stay_60hz[] = {
//ADD
};

#endif /* __CAMDRV_SS_db8v61m_H__ */

