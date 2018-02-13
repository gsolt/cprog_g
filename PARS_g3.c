/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2007.05.02	Gergely Zsolt		21-13 NPS						*


****************************************************************************
* NAME           :  PARS_G3.c                                                 *
* DESCRIPTION    :                                         *
* PROCESS        : 
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

extern void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat},  	
   {0      , 0 }
};*/
/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}*/


/****************************************************************************/
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
	
	
	
sT[0].sCP[0].sCPR[0].nDCStart  = 10;    sT[0].sCP[0].sCPR[0].nDCNum  = 1;    sT[0].sCP[0].sCPR[0].nSCStart  = 11;    sT[0].sCP[0].sCPR[0].nAckStart  =12;     sT[0].sCP[0].sCPR[0].nAckNum  =1;   sT[0].sCP[0].sCPR[0].nSPOffsetCS  = 24;   sT[0].sCP[0].sCPR[0].nSPOffsetLek  = 25; 	
sT[0].sCP[0].sCPR[1].nDCStart  = 13;    sT[0].sCP[0].sCPR[1].nDCNum  = 1;    sT[0].sCP[0].sCPR[1].nSCStart  = 14;    sT[0].sCP[0].sCPR[1].nAckStart  =15;     sT[0].sCP[0].sCPR[1].nAckNum  =1;   sT[0].sCP[0].sCPR[1].nSPOffsetCS  = 135;  sT[0].sCP[0].sCPR[1].nSPOffsetLek  = 136;
sT[0].sCP[0].sCPR[2].nDCStart  = 19;    sT[0].sCP[0].sCPR[2].nDCNum  = 1;    sT[0].sCP[0].sCPR[2].nSCStart  = 20;    sT[0].sCP[0].sCPR[2].nAckStart  =21;     sT[0].sCP[0].sCPR[2].nAckNum  =1;   sT[0].sCP[0].sCPR[2].nSPOffsetCS  = 71;   sT[0].sCP[0].sCPR[2].nSPOffsetLek  = 72;
sT[0].sCP[0].sCPR[3].nDCStart  = 22;    sT[0].sCP[0].sCPR[3].nDCNum  = 1;    sT[0].sCP[0].sCPR[3].nSCStart  = 23;    sT[0].sCP[0].sCPR[3].nAckStart  =24;     sT[0].sCP[0].sCPR[3].nAckNum  =1;   sT[0].sCP[0].sCPR[3].nSPOffsetCS  = 87;   sT[0].sCP[0].sCPR[3].nSPOffsetLek  = 88;
sT[0].sCP[0].sCPR[4].nDCStart  = 25;    sT[0].sCP[0].sCPR[4].nDCNum  = 1;    sT[0].sCP[0].sCPR[4].nSCStart  = 26;    sT[0].sCP[0].sCPR[4].nAckStart  =27;     sT[0].sCP[0].sCPR[4].nAckNum  =1;   sT[0].sCP[0].sCPR[4].nSPOffsetCS  = 103;  sT[0].sCP[0].sCPR[4].nSPOffsetLek  = 104;
sT[0].sCP[0].sCPR[5].nDCStart  = 28;    sT[0].sCP[0].sCPR[5].nDCNum  = 1;    sT[0].sCP[0].sCPR[5].nSCStart  = 29;    sT[0].sCP[0].sCPR[5].nAckStart  =30;     sT[0].sCP[0].sCPR[5].nAckNum  =1;   sT[0].sCP[0].sCPR[5].nSPOffsetCS  = 119;  sT[0].sCP[0].sCPR[5].nSPOffsetLek  = 120;
sT[0].sCP[0].sCPR[6].nDCStart  = 16;    sT[0].sCP[0].sCPR[6].nDCNum  = 1;    sT[0].sCP[0].sCPR[6].nSCStart  = 17;    sT[0].sCP[0].sCPR[6].nAckStart  =18;     sT[0].sCP[0].sCPR[6].nAckNum  =1;   sT[0].sCP[0].sCPR[6].nSPOffsetCS  = 55;   sT[0].sCP[0].sCPR[6].nSPOffsetLek  = 56;
sT[0].sCP[0].sCPR[7].nDCStart  = 31;    sT[0].sCP[0].sCPR[7].nDCNum  = 1;    sT[0].sCP[0].sCPR[7].nSCStart  = 32;    sT[0].sCP[0].sCPR[7].nAckStart  =33;     sT[0].sCP[0].sCPR[7].nAckNum  =1;   sT[0].sCP[0].sCPR[7].nSPOffsetCS  = 151;  sT[0].sCP[0].sCPR[7].nSPOffsetLek  = 152;
sT[0].sCP[0].sCPR[8].nDCStart  = 34;    sT[0].sCP[0].sCPR[8].nDCNum  = 1;    sT[0].sCP[0].sCPR[8].nSCStart  = 35;    sT[0].sCP[0].sCPR[8].nAckStart  =36;     sT[0].sCP[0].sCPR[8].nAckNum  =1;   sT[0].sCP[0].sCPR[8].nSPOffsetCS  = 167;  sT[0].sCP[0].sCPR[8].nSPOffsetLek  = 168;
sT[0].sCP[0].sCPR[9].nDCStart  = 37;    sT[0].sCP[0].sCPR[9].nDCNum  = 1;    sT[0].sCP[0].sCPR[9].nSCStart  = 38;    sT[0].sCP[0].sCPR[9].nAckStart  =39;     sT[0].sCP[0].sCPR[9].nAckNum  =1;   sT[0].sCP[0].sCPR[9].nSPOffsetCS  = 183;  sT[0].sCP[0].sCPR[9].nSPOffsetLek  = 184;
sT[0].sCP[0].sCPR[10].nDCStart = 40;    sT[0].sCP[0].sCPR[10].nDCNum = 4;    sT[0].sCP[0].sCPR[10].nSCStart = 44;    sT[0].sCP[0].sCPR[10].nAckStart = 0;     sT[0].sCP[0].sCPR[10].nAckNum =0;   sT[0].sCP[0].sCPR[10].nSPOffsetCS = 199;  sT[0].sCP[0].sCPR[10].nSPOffsetLek = 200;
sT[0].sCP[0].sCPR[11].nDCStart = 45;    sT[0].sCP[0].sCPR[11].nDCNum = 1;    sT[0].sCP[0].sCPR[11].nSCStart = 46;    sT[0].sCP[0].sCPR[11].nAckStart =47;     sT[0].sCP[0].sCPR[11].nAckNum =1;   sT[0].sCP[0].sCPR[11].nSPOffsetCS = 215;  sT[0].sCP[0].sCPR[11].nSPOffsetLek = 216;
sT[0].sCP[0].sCPR[12].nDCStart = 48;    sT[0].sCP[0].sCPR[12].nDCNum = 1;    sT[0].sCP[0].sCPR[12].nSCStart = 49;    sT[0].sCP[0].sCPR[12].nAckStart =50;     sT[0].sCP[0].sCPR[12].nAckNum =1;   sT[0].sCP[0].sCPR[12].nSPOffsetCS = 231;  sT[0].sCP[0].sCPR[12].nSPOffsetLek = 232;
sT[0].sCP[0].sCPR[13].nDCStart = 51;    sT[0].sCP[0].sCPR[13].nDCNum = 1;    sT[0].sCP[0].sCPR[13].nSCStart = 52;    sT[0].sCP[0].sCPR[13].nAckStart =53;     sT[0].sCP[0].sCPR[13].nAckNum =1;   sT[0].sCP[0].sCPR[13].nSPOffsetCS = 247;  sT[0].sCP[0].sCPR[13].nSPOffsetLek = 248;
sT[0].sCP[0].sCPR[14].nDCStart = 54;    sT[0].sCP[0].sCPR[14].nDCNum = 1;    sT[0].sCP[0].sCPR[14].nSCStart = 55;    sT[0].sCP[0].sCPR[14].nAckStart = 0;     sT[0].sCP[0].sCPR[14].nAckNum =0;   sT[0].sCP[0].sCPR[14].nSPOffsetCS = 263;  sT[0].sCP[0].sCPR[14].nSPOffsetLek = 264;
sT[0].sCP[0].sCPR[15].nDCStart = 57;    sT[0].sCP[0].sCPR[15].nDCNum = 1;    sT[0].sCP[0].sCPR[15].nSCStart = 58;    sT[0].sCP[0].sCPR[15].nAckStart =59;     sT[0].sCP[0].sCPR[15].nAckNum =1;   sT[0].sCP[0].sCPR[15].nSPOffsetCS = 279;  sT[0].sCP[0].sCPR[15].nSPOffsetLek = 280;
sT[0].sCP[0].sCPR[16].nDCStart = 60;    sT[0].sCP[0].sCPR[16].nDCNum = 1;    sT[0].sCP[0].sCPR[16].nSCStart = 61;    sT[0].sCP[0].sCPR[16].nAckStart = 0;     sT[0].sCP[0].sCPR[16].nAckNum =0;   sT[0].sCP[0].sCPR[16].nSPOffsetCS = 295;  sT[0].sCP[0].sCPR[16].nSPOffsetLek = 296;
sT[0].sCP[0].sCPR[17].nDCStart =  0;    sT[0].sCP[0].sCPR[17].nDCNum = 0;    sT[0].sCP[0].sCPR[17].nSCStart = 63;    sT[0].sCP[0].sCPR[17].nAckStart = 0;     sT[0].sCP[0].sCPR[17].nAckNum =0;   sT[0].sCP[0].sCPR[17].nSPOffsetCS = 302;  sT[0].sCP[0].sCPR[17].nSPOffsetLek = 303;
sT[0].sCP[0].sCPR[18].nDCStart = 64;    sT[0].sCP[0].sCPR[18].nDCNum = 4;    sT[0].sCP[0].sCPR[18].nSCStart = 68;    sT[0].sCP[0].sCPR[18].nAckStart = 0;     sT[0].sCP[0].sCPR[18].nAckNum =0;   sT[0].sCP[0].sCPR[18].nSPOffsetCS = 320;  sT[0].sCP[0].sCPR[18].nSPOffsetLek = 321;
sT[0].sCP[0].sCPR[19].nDCStart = 69;    sT[0].sCP[0].sCPR[19].nDCNum = 4;    sT[0].sCP[0].sCPR[19].nSCStart = 73;    sT[0].sCP[0].sCPR[19].nAckStart = 0;     sT[0].sCP[0].sCPR[19].nAckNum =0;   sT[0].sCP[0].sCPR[19].nSPOffsetCS = 357;  sT[0].sCP[0].sCPR[19].nSPOffsetLek = 358;
sT[0].sCP[0].sCPR[20].nDCStart = 74;    sT[0].sCP[0].sCPR[20].nDCNum = 4;    sT[0].sCP[0].sCPR[20].nSCStart = 78;    sT[0].sCP[0].sCPR[20].nAckStart = 0;     sT[0].sCP[0].sCPR[20].nAckNum =0;   sT[0].sCP[0].sCPR[20].nSPOffsetCS = 394;  sT[0].sCP[0].sCPR[20].nSPOffsetLek = 395;
sT[0].sCP[0].sCPR[21].nDCStart = 79;    sT[0].sCP[0].sCPR[21].nDCNum = 4;    sT[0].sCP[0].sCPR[21].nSCStart = 83;    sT[0].sCP[0].sCPR[21].nAckStart = 0;     sT[0].sCP[0].sCPR[21].nAckNum =0;   sT[0].sCP[0].sCPR[21].nSPOffsetCS = 431;  sT[0].sCP[0].sCPR[21].nSPOffsetLek = 432;
sT[0].sCP[0].sCPR[22].nDCStart = 84;    sT[0].sCP[0].sCPR[22].nDCNum = 1;    sT[0].sCP[0].sCPR[22].nSCStart = 85;    sT[0].sCP[0].sCPR[22].nAckStart =86;     sT[0].sCP[0].sCPR[22].nAckNum =1;   sT[0].sCP[0].sCPR[22].nSPOffsetCS = 447;  sT[0].sCP[0].sCPR[22].nSPOffsetLek = 448;
sT[0].sCP[0].sCPR[23].nDCStart = 87;    sT[0].sCP[0].sCPR[23].nDCNum = 1;    sT[0].sCP[0].sCPR[23].nSCStart = 88;    sT[0].sCP[0].sCPR[23].nAckStart =89;     sT[0].sCP[0].sCPR[23].nAckNum =1;   sT[0].sCP[0].sCPR[23].nSPOffsetCS = 463;  sT[0].sCP[0].sCPR[23].nSPOffsetLek = 464;
sT[0].sCP[0].sCPR[24].nDCStart = 90;    sT[0].sCP[0].sCPR[24].nDCNum = 1;    sT[0].sCP[0].sCPR[24].nSCStart = 91;    sT[0].sCP[0].sCPR[24].nAckStart =92;     sT[0].sCP[0].sCPR[24].nAckNum =1;   sT[0].sCP[0].sCPR[24].nSPOffsetCS = 479;  sT[0].sCP[0].sCPR[24].nSPOffsetLek = 480;
sT[0].sCP[0].sCPR[25].nDCStart = 93;    sT[0].sCP[0].sCPR[25].nDCNum = 1;    sT[0].sCP[0].sCPR[25].nSCStart = 94;    sT[0].sCP[0].sCPR[25].nAckStart =95;     sT[0].sCP[0].sCPR[25].nAckNum =1;   sT[0].sCP[0].sCPR[25].nSPOffsetCS = 495;  sT[0].sCP[0].sCPR[25].nSPOffsetLek = 496;
sT[0].sCP[0].sCPR[26].nDCStart = 96;    sT[0].sCP[0].sCPR[26].nDCNum = 1;    sT[0].sCP[0].sCPR[26].nSCStart = 97;    sT[0].sCP[0].sCPR[26].nAckStart = 0;     sT[0].sCP[0].sCPR[26].nAckNum =0;   sT[0].sCP[0].sCPR[26].nSPOffsetCS = 511;  sT[0].sCP[0].sCPR[26].nSPOffsetLek = 512;
sT[0].sCP[0].sCPR[27].nDCStart = 99;    sT[0].sCP[0].sCPR[27].nDCNum = 1;    sT[0].sCP[0].sCPR[27].nSCStart =100;    sT[0].sCP[0].sCPR[27].nAckStart =101;    sT[0].sCP[0].sCPR[27].nAckNum =1;   sT[0].sCP[0].sCPR[27].nSPOffsetCS = 527;  sT[0].sCP[0].sCPR[27].nSPOffsetLek = 528;
sT[0].sCP[0].sCPR[28].nDCStart =102;    sT[0].sCP[0].sCPR[28].nDCNum = 1;    sT[0].sCP[0].sCPR[28].nSCStart =103;    sT[0].sCP[0].sCPR[28].nAckStart =104;    sT[0].sCP[0].sCPR[28].nAckNum =1;   sT[0].sCP[0].sCPR[28].nSPOffsetCS = 543;  sT[0].sCP[0].sCPR[28].nSPOffsetLek = 544;
sT[0].sCP[0].sCPR[29].nDCStart =105;    sT[0].sCP[0].sCPR[29].nDCNum = 1;    sT[0].sCP[0].sCPR[29].nSCStart =106;    sT[0].sCP[0].sCPR[29].nAckStart =107;    sT[0].sCP[0].sCPR[29].nAckNum =1;   sT[0].sCP[0].sCPR[29].nSPOffsetCS = 559;  sT[0].sCP[0].sCPR[29].nSPOffsetLek = 560;
sT[0].sCP[0].sCPR[30].nDCStart =108;    sT[0].sCP[0].sCPR[30].nDCNum = 4;    sT[0].sCP[0].sCPR[30].nSCStart =112;    sT[0].sCP[0].sCPR[30].nAckStart = 0;	  sT[0].sCP[0].sCPR[30].nAckNum =0;   sT[0].sCP[0].sCPR[30].nSPOffsetCS = 600;  sT[0].sCP[0].sCPR[30].nSPOffsetLek = 601;
sT[0].sCP[0].sCPR[31].nDCStart =113;    sT[0].sCP[0].sCPR[31].nDCNum = 4;    sT[0].sCP[0].sCPR[31].nSCStart =117;    sT[0].sCP[0].sCPR[31].nAckStart = 0;	  sT[0].sCP[0].sCPR[31].nAckNum =0;   sT[0].sCP[0].sCPR[31].nSPOffsetCS = 637;  sT[0].sCP[0].sCPR[31].nSPOffsetLek = 638;
sT[0].sCP[0].sCPR[32].nDCStart =118;    sT[0].sCP[0].sCPR[32].nDCNum = 4;    sT[0].sCP[0].sCPR[32].nSCStart =122;    sT[0].sCP[0].sCPR[32].nAckStart = 0;	  sT[0].sCP[0].sCPR[32].nAckNum =0;   sT[0].sCP[0].sCPR[32].nSPOffsetCS = 674;  sT[0].sCP[0].sCPR[32].nSPOffsetLek = 675;
sT[0].sCP[0].sCPR[33].nDCStart =123;    sT[0].sCP[0].sCPR[33].nDCNum = 4;    sT[0].sCP[0].sCPR[33].nSCStart =127;    sT[0].sCP[0].sCPR[33].nAckStart = 0;	  sT[0].sCP[0].sCPR[33].nAckNum =0;   sT[0].sCP[0].sCPR[33].nSPOffsetCS = 711;  sT[0].sCP[0].sCPR[33].nSPOffsetLek = 712;
sT[0].sCP[0].sCPR[34].nDCStart =128;    sT[0].sCP[0].sCPR[34].nDCNum = 4;    sT[0].sCP[0].sCPR[34].nSCStart =132;    sT[0].sCP[0].sCPR[34].nAckStart = 0;	  sT[0].sCP[0].sCPR[34].nAckNum =0;   sT[0].sCP[0].sCPR[34].nSPOffsetCS = 747;  sT[0].sCP[0].sCPR[34].nSPOffsetLek = 748;
sT[0].sCP[0].sCPR[35].nDCStart =133;    sT[0].sCP[0].sCPR[35].nDCNum = 1;    sT[0].sCP[0].sCPR[35].nSCStart =134;    sT[0].sCP[0].sCPR[35].nAckStart =135;	  sT[0].sCP[0].sCPR[35].nAckNum =1;   sT[0].sCP[0].sCPR[35].nSPOffsetCS = 764;  sT[0].sCP[0].sCPR[35].nSPOffsetLek = 765;

sT[0].sCP[0].sCPR[36].nDCStart =136;    sT[0].sCP[0].sCPR[36].nDCNum = 1;    sT[0].sCP[0].sCPR[36].nSCStart =137;    sT[0].sCP[0].sCPR[36].nAckStart =0;	  sT[0].sCP[0].sCPR[36].nAckNum =0;   sT[0].sCP[0].sCPR[36].nSPOffsetCS = 780;  sT[0].sCP[0].sCPR[36].nSPOffsetLek = 781;
sT[0].sCP[0].sCPR[37].nDCStart =139;    sT[0].sCP[0].sCPR[37].nDCNum = 1;    sT[0].sCP[0].sCPR[37].nSCStart =140;    sT[0].sCP[0].sCPR[37].nAckStart =0;	  sT[0].sCP[0].sCPR[37].nAckNum =0;   sT[0].sCP[0].sCPR[37].nSPOffsetCS = 796;  sT[0].sCP[0].sCPR[37].nSPOffsetLek = 797;
sT[0].sCP[0].sCPR[38].nDCStart =142;    sT[0].sCP[0].sCPR[38].nDCNum = 1;    sT[0].sCP[0].sCPR[38].nSCStart =143;    sT[0].sCP[0].sCPR[38].nAckStart =144;	  sT[0].sCP[0].sCPR[38].nAckNum =1;   sT[0].sCP[0].sCPR[38].nSPOffsetCS = 812;  sT[0].sCP[0].sCPR[38].nSPOffsetLek = 813;
sT[0].sCP[0].sCPR[39].nDCStart =145;    sT[0].sCP[0].sCPR[39].nDCNum = 1;    sT[0].sCP[0].sCPR[39].nSCStart =146;    sT[0].sCP[0].sCPR[39].nAckStart =147;	  sT[0].sCP[0].sCPR[39].nAckNum =1;   sT[0].sCP[0].sCPR[39].nSPOffsetCS = 828;  sT[0].sCP[0].sCPR[39].nSPOffsetLek = 829;
sT[0].sCP[0].sCPR[40].nDCStart =148;    sT[0].sCP[0].sCPR[40].nDCNum = 1;    sT[0].sCP[0].sCPR[40].nSCStart =149;    sT[0].sCP[0].sCPR[40].nAckStart =150;	  sT[0].sCP[0].sCPR[40].nAckNum =1;   sT[0].sCP[0].sCPR[40].nSPOffsetCS = 844;  sT[0].sCP[0].sCPR[40].nSPOffsetLek = 845;
sT[0].sCP[0].sCPR[41].nDCStart =151;    sT[0].sCP[0].sCPR[41].nDCNum = 1;    sT[0].sCP[0].sCPR[41].nSCStart =152;    sT[0].sCP[0].sCPR[41].nAckStart =0;	  sT[0].sCP[0].sCPR[41].nAckNum =0;   sT[0].sCP[0].sCPR[41].nSPOffsetCS = 860;  sT[0].sCP[0].sCPR[41].nSPOffsetLek = 861;
sT[0].sCP[0].sCPR[42].nDCStart =154;    sT[0].sCP[0].sCPR[42].nDCNum = 1;    sT[0].sCP[0].sCPR[42].nSCStart =155;    sT[0].sCP[0].sCPR[42].nAckStart =0;	  sT[0].sCP[0].sCPR[42].nAckNum =0;   sT[0].sCP[0].sCPR[42].nSPOffsetCS = 876;  sT[0].sCP[0].sCPR[42].nSPOffsetLek = 877;
sT[0].sCP[0].sCPR[43].nDCStart =157;    sT[0].sCP[0].sCPR[43].nDCNum = 1;    sT[0].sCP[0].sCPR[43].nSCStart =158;    sT[0].sCP[0].sCPR[43].nAckStart =0;	  sT[0].sCP[0].sCPR[43].nAckNum =0;   sT[0].sCP[0].sCPR[43].nSPOffsetCS = 892;  sT[0].sCP[0].sCPR[43].nSPOffsetLek = 893;
sT[0].sCP[0].sCPR[44].nDCStart =160;    sT[0].sCP[0].sCPR[44].nDCNum = 1;    sT[0].sCP[0].sCPR[44].nSCStart =161;    sT[0].sCP[0].sCPR[44].nAckStart =0;	  sT[0].sCP[0].sCPR[44].nAckNum =0;   sT[0].sCP[0].sCPR[44].nSPOffsetCS = 908;  sT[0].sCP[0].sCPR[44].nSPOffsetLek = 909;
sT[0].sCP[0].sCPR[45].nDCStart =163;    sT[0].sCP[0].sCPR[45].nDCNum = 1;    sT[0].sCP[0].sCPR[45].nSCStart =164;    sT[0].sCP[0].sCPR[45].nAckStart =0;	  sT[0].sCP[0].sCPR[45].nAckNum =0;   sT[0].sCP[0].sCPR[45].nSPOffsetCS = 924;  sT[0].sCP[0].sCPR[45].nSPOffsetLek = 925;
sT[0].sCP[0].sCPR[46].nDCStart =166;    sT[0].sCP[0].sCPR[46].nDCNum = 1;    sT[0].sCP[0].sCPR[46].nSCStart =167;    sT[0].sCP[0].sCPR[46].nAckStart =0;	  sT[0].sCP[0].sCPR[46].nAckNum =0;   sT[0].sCP[0].sCPR[46].nSPOffsetCS = 940;  sT[0].sCP[0].sCPR[46].nSPOffsetLek = 941;
sT[0].sCP[0].sCPR[47].nDCStart =169;    sT[0].sCP[0].sCPR[47].nDCNum = 1;    sT[0].sCP[0].sCPR[47].nSCStart =170;    sT[0].sCP[0].sCPR[47].nAckStart =0;	  sT[0].sCP[0].sCPR[47].nAckNum =0;   sT[0].sCP[0].sCPR[47].nSPOffsetCS = 956;  sT[0].sCP[0].sCPR[47].nSPOffsetLek = 957;
sT[0].sCP[0].sCPR[48].nDCStart =172;    sT[0].sCP[0].sCPR[48].nDCNum = 1;    sT[0].sCP[0].sCPR[48].nSCStart =173;    sT[0].sCP[0].sCPR[48].nAckStart =0;	  sT[0].sCP[0].sCPR[48].nAckNum =0;   sT[0].sCP[0].sCPR[48].nSPOffsetCS = 972;  sT[0].sCP[0].sCPR[48].nSPOffsetLek = 973;

sT[0].sCP[0].sCPR[53].nDCStart =0;    	 sT[0].sCP[0].sCPR[53].nDCNum = 0;    sT[0].sCP[0].sCPR[53].nSCStart =175;    sT[0].sCP[0].sCPR[53].nAckStart =0;	  sT[0].sCP[0].sCPR[53].nAckNum =0;   sT[0].sCP[0].sCPR[53].nSPOffsetCS = 979;  sT[0].sCP[0].sCPR[53].nSPOffsetLek = 980;
sT[0].sCP[0].sCPR[54].nDCStart =230;     sT[0].sCP[0].sCPR[54].nDCNum = 4;    sT[0].sCP[0].sCPR[54].nSCStart =234;    sT[0].sCP[0].sCPR[54].nAckStart =0;   sT[0].sCP[0].sCPR[54].nAckNum =0;   sT[0].sCP[0].sCPR[54].nSPOffsetCS =1001;  sT[0].sCP[0].sCPR[54].nSPOffsetLek =1002;
sT[0].sCP[0].sCPR[55].nDCStart =235;     sT[0].sCP[0].sCPR[55].nDCNum = 4;    sT[0].sCP[0].sCPR[55].nSCStart =239;    sT[0].sCP[0].sCPR[55].nAckStart =0;   sT[0].sCP[0].sCPR[55].nAckNum =0;   sT[0].sCP[0].sCPR[55].nSPOffsetCS =1023;  sT[0].sCP[0].sCPR[55].nSPOffsetLek =1024;
sT[0].sCP[0].sCPR[56].nDCStart =240;     sT[0].sCP[0].sCPR[56].nDCNum = 8;    sT[0].sCP[0].sCPR[56].nSCStart =248;    sT[0].sCP[0].sCPR[56].nAckStart =0;   sT[0].sCP[0].sCPR[56].nAckNum =0;   sT[0].sCP[0].sCPR[56].nSPOffsetCS =1092;  sT[0].sCP[0].sCPR[56].nSPOffsetLek =1093;
sT[0].sCP[0].sCPR[57].nDCStart =249;     sT[0].sCP[0].sCPR[57].nDCNum = 4;    sT[0].sCP[0].sCPR[57].nSCStart =253;    sT[0].sCP[0].sCPR[57].nAckStart =0;	  sT[0].sCP[0].sCPR[57].nAckNum =0;   sT[0].sCP[0].sCPR[57].nSPOffsetCS =1110;  sT[0].sCP[0].sCPR[57].nSPOffsetLek =1111;





/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}	
}


/* 79-047  -----------------------------------------------------------*/	
sT[0].sTI[0].nType = TYP_TMOK;

	sT[0].sMOT[0].nIEC_SP				= 10;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* Mérések IEC kezdõcíme */

/* 54-78  -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 121;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* Mérések IEC kezdõcíme */

/* 71-70  -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 57;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP				= 13;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_NM				= 19;		/* Mérések IEC kezdõcíme */

/* 72-89  -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 73;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_DP				= 14;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_NM				= 197;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[3].nNMNum      			= 4;

/* 72-97  -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 89;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_DP				= 15;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_NM				= 25;		/* Mérések IEC kezdõcíme */


/* 74-30  -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 105;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_DP				= 16;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_NM				= 28;		/* Mérések IEC kezdõcíme */

/* 72-56  -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 41;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_DP				= 12;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_NM				= 16;		/* Mérések IEC kezdõcíme */

/* 73-06  -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 137;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_NM				= 31;		/* Mérések IEC kezdõcíme */

/* 72-57  -----------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 153;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* Mérések IEC kezdõcíme */

/* 74-36  -----------------------------------------------------------*/	
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 169;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_DP				= 19;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_NM				= 37;		/* Mérések IEC kezdõcíme */



/* Csetény, kapcsolóállomás  ----------------------------------------------------------------*/
sT[0].sTI[10].nType = TYP_MOT;

	sT[0].sMOT[10].nIEC_SP				= 185;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[10].nIEC_DP				= 20;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[10].nIEC_NM				= 40;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[10].nNMNum				= 3;		/* Analóg mérések száma*/

/* 70-09  -----------------------------------------------------------*/	
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 201;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_DP				= 28;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_NM				= 43;		/* Mérések IEC kezdõcíme */

/* 70-24  -----------------------------------------------------------*/	
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 217;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_DP				= 29;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_NM				= 46;		/* Mérések IEC kezdõcíme */

/* 71-04  -----------------------------------------------------------*/	
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 233;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_DP				= 30;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_NM				= 49;		/* Mérések IEC kezdõcíme */

/* 71-28  -----------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 249;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_DP				= 31;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_NM				= 52;		/* Mérések IEC kezdõcíme */

/* 72-99  -----------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 265;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_DP				= 32;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_NM				= 55;		/* Mérések IEC kezdõcíme */

/* 71-58  -----------------------------------------------------------*/	
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 281;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_DP				= 33;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_NM				= 58;		/* Mérések IEC kezdõcíme */

/* Csepreg DAC  -----------------------------------------------------------*/	
sT[0].sTI[17].nType = TYP_MOT;

	sT[0].sMOT[17].nIEC_SP				= 297;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[17].nIEC_DP_NUM			= 0;
	sT[0].sMOT[17].nNMNum      			= 0;

/* Komárom, Csillag ltp.  ----------------------------------------------------------------*/
sT[0].sTI[18].nType = TYP_MOT;

	sT[0].sMOT[18].nIEC_SP				= 304;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[18].nIEC_DP				= 34;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[18].nIEC_NM				= 61;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[18].nNMNum				= 3;		/* Analóg mérések száma*/

/* Söréd, naperõmû -----------------------------------------------------------*/
sT[0].sTI[19].nType = TYP_TAL;

		sT[0].sTAL[19].nIEC_SP       		= 322;
		sT[0].sTAL[19].nIEC_OsszevontHiba	= 354;
		sT[0].sTAL[19].nIEC_MT_KommHiba		= 355;
		sT[0].sTAL[19].nIEC_DP       		= 42;
		sT[0].sTAL[19].nIEC_DP_FSZ1  		= 46;
		sT[0].sTAL[19].nIEC_NM				= 65;
		sT[0].sTAL[19].nNMNum		  		= 11;
		sT[0].sTAL[19].nKommStatusNum		= 2;

/* Dunakiliti I., naperõmû -----------------------------------------------------------*/
sT[0].sTI[20].nType = TYP_TAL;

		sT[0].sTAL[20].nIEC_SP       		= 359;
		sT[0].sTAL[20].nIEC_OsszevontHiba	= 391;
		sT[0].sTAL[20].nIEC_MT_KommHiba		= 392;
		sT[0].sTAL[20].nIEC_DP       		= 50;
		sT[0].sTAL[20].nIEC_DP_FSZ1  		= 54;
		sT[0].sTAL[20].nIEC_NM				= 76;
		sT[0].sTAL[20].nNMNum		  		= 11;
		sT[0].sTAL[20].nKommStatusNum		= 2;

/* Dunakiliti II., naperõmû -----------------------------------------------------------*/
sT[0].sTI[21].nType = TYP_TAL;

		sT[0].sTAL[21].nIEC_SP       		= 396;
		sT[0].sTAL[21].nIEC_OsszevontHiba	= 428;
		sT[0].sTAL[21].nIEC_MT_KommHiba		= 429;
		sT[0].sTAL[21].nIEC_DP       		= 58;
		sT[0].sTAL[21].nIEC_DP_FSZ1  		= 62;
		sT[0].sTAL[21].nIEC_NM				= 87;
		sT[0].sTAL[21].nNMNum		  		= 11;
		sT[0].sTAL[21].nKommStatusNum		= 2;

/* 42-14  -----------------------------------------------------------*/	
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 433;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_DP				= 66;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_NM				= 98;		/* Mérések IEC kezdõcíme */

/* 42-43  -----------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 449;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_DP				= 67;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_NM				= 101;		/* Mérések IEC kezdõcíme */

/* 42-44  -----------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 465;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_DP				= 68;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_NM				= 104;		/* Mérések IEC kezdõcíme */

/* 60-40  -----------------------------------------------------------*/	
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 481;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_DP				= 69;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_NM				= 107;		/* Mérések IEC kezdõcíme */

/* 64-84  -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 497;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_DP				= 70;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_NM				= 110;		/* Mérések IEC kezdõcíme */

/* 60-41  -----------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 513;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP				= 71;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_NM				= 113;		/* Mérések IEC kezdõcíme */

/* 60-43  -----------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 529;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_DP				= 72;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_NM				= 116;		/* Mérések IEC kezdõcíme */

/* 60-45  -----------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 545;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP				= 73;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_NM				= 119;		/* Mérések IEC kezdõcíme */


/* Komárom, Alumetál -----------------------------------------------------------*/
sT[0].sTI[30].nType = TYP_TAL;

		sT[0].sTAL[30].nIEC_SP       		= 561;
		sT[0].sTAL[30].nIEC_OsszevontHiba	= 593;
		sT[0].sTAL[30].nIEC_MT_KommHiba		= 594;
		sT[0].sTAL[30].nIEC_DP       		= 74;
		sT[0].sTAL[30].nIEC_DP_FSZ1  		= 78;
		sT[0].sTAL[30].nIEC_NM				= 122;
		sT[0].sTAL[30].nNMNum		  		= 4;
		sT[0].sTAL[30].nKommStatusNum		= 4;

/* Tata, boierõmû -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_TAL;

		sT[0].sTAL[31].nIEC_SP       		= 602;
		sT[0].sTAL[31].nIEC_OsszevontHiba	= 634;
		sT[0].sTAL[31].nIEC_MT_KommHiba		= 635;
		sT[0].sTAL[31].nIEC_DP       		= 82;
		sT[0].sTAL[31].nIEC_DP_FSZ1  		= 86;
		sT[0].sTAL[31].nIEC_NM				= 126;
		sT[0].sTAL[31].nNMNum		  		= 11;
		sT[0].sTAL[31].nKommStatusNum		= 2;

		
/* Szombathely, városháza -----------------------------------------------------------*/
sT[0].sTI[32].nType = TYP_TAL;

		sT[0].sTAL[32].nIEC_SP       		= 639;
		sT[0].sTAL[32].nIEC_OsszevontHiba	= 671;
		sT[0].sTAL[32].nIEC_MT_KommHiba		= 672;
		sT[0].sTAL[32].nIEC_DP       		= 90;
		sT[0].sTAL[32].nIEC_DP_FSZ1  		= 94;
		sT[0].sTAL[32].nIEC_NM				= 137;
		sT[0].sTAL[32].nNMNum		  		= 4;
		sT[0].sTAL[32].nKommStatusNum		= 2;
		sT[0].sTAL[32].nIEC_DP_2BIT1 		= 98;
		sT[0].sTAL[32].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[32].nIEC_DP_2BIT_BENT1	= 913;

/* Fehérvárcsurgó, naperõmû  -----------------------------------------------------------*/
sT[0].sTI[33].nType = TYP_TAL;

		sT[0].sTAL[33].nIEC_SP       		= 676;
		sT[0].sTAL[33].nIEC_OsszevontHiba	= 708;
		sT[0].sTAL[33].nIEC_MT_KommHiba		= 709;
		sT[0].sTAL[33].nIEC_DP       		= 99;
		sT[0].sTAL[33].nIEC_DP_FSZ1  		= 103;
		sT[0].sTAL[33].nIEC_NM				= 141;
		sT[0].sTAL[33].nNMNum		  		= 11;
		sT[0].sTAL[33].nKommStatusNum		= 2;

/* Tata, napelempark  -----------------------------------------------------------*/
sT[0].sTI[34].nType = TYP_TAL;

		sT[0].sTAL[34].nIEC_SP       		= 713;
		sT[0].sTAL[34].nIEC_OsszevontHiba	= 749;
		sT[0].sTAL[34].nIEC_MT_KommHiba		= 745;
		sT[0].sTAL[34].nIEC_DP       		= 82;
		sT[0].sTAL[34].nIEC_DP_FSZ1  		= 86;
		sT[0].sTAL[34].nIEC_NM				= 152;
		sT[0].sTAL[34].nNMNum		  		= 11;
		sT[0].sTAL[34].nKommStatusNum		= 2;

/* 72-15  -----------------------------------------------------------*/	
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 750;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_DP				= 115;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_NM				= 163;		/* Mérések IEC kezdõcíme */

/* 34-02  -----------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 766;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_DP				= 116;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_NM				= 166;		/* Mérések IEC kezdõcíme */

/* 80-87  -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 782;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_DP				= 117;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_NM				= 169;		/* Mérések IEC kezdõcíme */

/* 87-29  -----------------------------------------------------------*/	
sT[0].sTI[38].nType = TYP_TMOK;

	sT[0].sMOT[38].nIEC_SP				= 798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_DP				= 118;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_NM				= 172;		/* Mérések IEC kezdõcíme */


/* 87-33  -----------------------------------------------------------*/	
sT[0].sTI[39].nType = TYP_TMOK;

	sT[0].sMOT[39].nIEC_SP				= 814;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_DP				= 119;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_NM				= 175;		/* Mérések IEC kezdõcíme */

/* 31-64  -----------------------------------------------------------*/	
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 830;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_DP				= 120;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_NM				= 178;		/* Mérések IEC kezdõcíme */

/* 31-58  -----------------------------------------------------------*/	
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 846;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP				= 121;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_NM				= 185;		/* Mérések IEC kezdõcíme */

/* 31-63  -----------------------------------------------------------*/	
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 862;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP				= 122;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_NM				= 188;		/* Mérések IEC kezdõcíme */
	
/* 41-87  -----------------------------------------------------------*/	
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 878;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_DP				= 123;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_NM				= 191;		/* Mérések IEC kezdõcíme */	
	
/* 41-62  -----------------------------------------------------------*/	
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 894;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_DP				= 124;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_NM				= 194;		/* Mérések IEC kezdõcíme */	
	
/* 91-18  -----------------------------------------------------------*/	
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 910;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP				= 125;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_NM				= 201;		/* Mérések IEC kezdõcíme */	
	
/* 12-75  -----------------------------------------------------------*/	
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 926;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP				= 126;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_NM				= 204;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[46].nNMNum      			= 4;


/* 14-03  -----------------------------------------------------------*/	
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 942;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_DP				= 127;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_NM				= 208;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[47].nNMNum      			= 4;

/* 48642  -----------------------------------------------------------*/	
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 958;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP				= 128;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_NM				= 212;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[48].nNMNum      			= 4;

/* Front end A -----------------------------------------------------------*/
sT[0].sTI[49].nType = TYP_FRONTEND;

/* Front end C -----------------------------------------------------------*/
sT[0].sTI[50].nType = TYP_FRONTEND;

/* Front end G -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_FRONTEND;

/* Redundancia A -----------------------------------------------------------*/
sT[0].sTI[52].nType = TYP_FRONTEND;


/* Komárom DAC  -----------------------------------------------------------*/	
sT[0].sTI[53].nType = TYP_MOT;

	sT[0].sMOT[53].nIEC_SP				= 974;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[53].nIEC_DP_NUM			= 0;
	sT[0].sMOT[53].nNMNum      			= 0;


/* Mosonmagyaróvár, Óvoda  ----------------------------------------------------------------*/
sT[0].sTI[54].nType = TYP_MOT;

	sT[0].sMOT[54].nIEC_SP				= 981;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[54].nIEC_DP				= 180;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[54].nIEC_NM				= 216;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[54].nNMNum				= 12;		/* Analóg mérések száma*/

/* Mosonmagyaróvár, Vásártér Gimnázium  ----------------------------------------------------------------*/
sT[0].sTI[55].nType = TYP_MOT;

	sT[0].sMOT[55].nIEC_SP				= 1003;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[55].nIEC_DP				= 188;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[55].nIEC_NM				= 228;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[55].nNMNum				= 12;		/* Analóg mérések száma*/

/* Szekesfehervar, Sóstói stadion 8 csatornas !!! ----------------------------------------------*/
  sT[0].sTI[56].nType = TYP_TAL;
  
	sT[0].sTAL[56].nIEC_SP       		= 1025;
	sT[0].sTAL[56].nIEC_OsszevontHiba	= 1089;
	sT[0].sTAL[56].nIEC_MT_KommHiba	= 1090;
	sT[0].sTAL[56].nKommStatusNum		= 2;
	sT[0].sTAL[56].nLeagNum			= 8;
	

	sT[0].sTAL[56].nIEC_DP       		= 196;
	sT[0].sTAL[56].nIEC_DP_FSZ1  		= 204;
	sT[0].sTAL[56].nIEC_NM				= 240;
	sT[0].sTAL[56].nNMNum		  		= 8;
  
  
  sT[0].sTAL[56].nIEC_DP_12BIT1		= 212;
	sT[0].sTAL[56].nIEC_DP_2BIT_BK1	= 913;
  
  sT[0].sTAL[56].nIEC_DP_12BIT2		= 213;
	sT[0].sTAL[56].nIEC_DP_2BIT_BK2	= 925;
  
/* Székesfehérvár, Ételbár  ----------------------------------------------------------------*/
sT[0].sTI[57].nType = TYP_MOT;

	sT[0].sMOT[57].nIEC_SP				= 1094;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[57].nIEC_DP				= 214;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[57].nIEC_NM				= 248;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[57].nNMNum				= 6;		/* Analóg mérések száma*/



} /* end fnSetDataPar()*/

