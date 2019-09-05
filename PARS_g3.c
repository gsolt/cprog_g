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
sT[0].sCP[0].sCPR[58].nDCStart =254;     sT[0].sCP[0].sCPR[58].nDCNum = 4;    sT[0].sCP[0].sCPR[58].nSCStart =258;    sT[0].sCP[0].sCPR[58].nAckStart =0;	  sT[0].sCP[0].sCPR[58].nAckNum =0;   sT[0].sCP[0].sCPR[58].nSPOffsetCS =1128;  sT[0].sCP[0].sCPR[58].nSPOffsetLek =1129;
sT[0].sCP[0].sCPR[59].nDCStart =259;     sT[0].sCP[0].sCPR[59].nDCNum = 4;    sT[0].sCP[0].sCPR[59].nSCStart =263;    sT[0].sCP[0].sCPR[59].nAckStart =0;	  sT[0].sCP[0].sCPR[59].nAckNum =0;   sT[0].sCP[0].sCPR[59].nSPOffsetCS =1150;  sT[0].sCP[0].sCPR[59].nSPOffsetLek =1151;
sT[0].sCP[0].sCPR[60].nDCStart =264;     sT[0].sCP[0].sCPR[60].nDCNum = 8;    sT[0].sCP[0].sCPR[60].nSCStart =272;    sT[0].sCP[0].sCPR[60].nAckStart =0;	  sT[0].sCP[0].sCPR[60].nAckNum =0;   sT[0].sCP[0].sCPR[60].nSPOffsetCS =1178;  sT[0].sCP[0].sCPR[60].nSPOffsetLek =1179;
sT[0].sCP[0].sCPR[61].nDCStart =273;     sT[0].sCP[0].sCPR[61].nDCNum = 4;    sT[0].sCP[0].sCPR[61].nSCStart =277;    sT[0].sCP[0].sCPR[61].nAckStart =0;	  sT[0].sCP[0].sCPR[61].nAckNum =0;   sT[0].sCP[0].sCPR[61].nSPOffsetCS =1196;  sT[0].sCP[0].sCPR[61].nSPOffsetLek =1197;
sT[0].sCP[0].sCPR[62].nDCStart =278;     sT[0].sCP[0].sCPR[62].nDCNum = 4;    sT[0].sCP[0].sCPR[62].nSCStart =282;    sT[0].sCP[0].sCPR[62].nAckStart =0;	  sT[0].sCP[0].sCPR[62].nAckNum =0;   sT[0].sCP[0].sCPR[62].nSPOffsetCS =1214;  sT[0].sCP[0].sCPR[62].nSPOffsetLek =1215;
sT[0].sCP[0].sCPR[63].nDCStart =283;     sT[0].sCP[0].sCPR[63].nDCNum = 4;    sT[0].sCP[0].sCPR[63].nSCStart =287;    sT[0].sCP[0].sCPR[63].nAckStart =0;	  sT[0].sCP[0].sCPR[63].nAckNum =0;   sT[0].sCP[0].sCPR[63].nSPOffsetCS =1232;  sT[0].sCP[0].sCPR[63].nSPOffsetLek =1233;

sT[0].sCP[0].sCPR[64].nDCStart =288;     sT[0].sCP[0].sCPR[64].nDCNum = 4;    sT[0].sCP[0].sCPR[64].nSCStart =292;    sT[0].sCP[0].sCPR[64].nAckStart =0;	  sT[0].sCP[0].sCPR[64].nAckNum =0;   sT[0].sCP[0].sCPR[64].nSPOffsetCS =1254;  sT[0].sCP[0].sCPR[64].nSPOffsetLek =1255;
sT[0].sCP[0].sCPR[65].nDCStart =293;     sT[0].sCP[0].sCPR[65].nDCNum = 4;    sT[0].sCP[0].sCPR[65].nSCStart =297;    sT[0].sCP[0].sCPR[65].nAckStart =0;	  sT[0].sCP[0].sCPR[65].nAckNum =0;   sT[0].sCP[0].sCPR[65].nSPOffsetCS =1276;  sT[0].sCP[0].sCPR[65].nSPOffsetLek =1277;
sT[0].sCP[0].sCPR[66].nDCStart =298;     sT[0].sCP[0].sCPR[66].nDCNum = 4;    sT[0].sCP[0].sCPR[66].nSCStart =302;    sT[0].sCP[0].sCPR[66].nAckStart =0;	  sT[0].sCP[0].sCPR[66].nAckNum =0;   sT[0].sCP[0].sCPR[66].nSPOffsetCS =1294;  sT[0].sCP[0].sCPR[66].nSPOffsetLek =1295;
sT[0].sCP[0].sCPR[67].nDCStart =303;     sT[0].sCP[0].sCPR[67].nDCNum = 4;    sT[0].sCP[0].sCPR[67].nSCStart =307;    sT[0].sCP[0].sCPR[67].nAckStart =0;	  sT[0].sCP[0].sCPR[67].nAckNum =0;   sT[0].sCP[0].sCPR[67].nSPOffsetCS =1312;  sT[0].sCP[0].sCPR[67].nSPOffsetLek =1313;

sT[0].sCP[0].sCPR[68].nDCStart =308;     sT[0].sCP[0].sCPR[68].nDCNum = 4;    sT[0].sCP[0].sCPR[68].nSCStart =312;    sT[0].sCP[0].sCPR[68].nAckStart =0;	  sT[0].sCP[0].sCPR[68].nAckNum =0;   sT[0].sCP[0].sCPR[68].nSPOffsetCS =1330;  sT[0].sCP[0].sCPR[68].nSPOffsetLek =1331;
sT[0].sCP[0].sCPR[69].nDCStart =313;     sT[0].sCP[0].sCPR[69].nDCNum = 4;    sT[0].sCP[0].sCPR[69].nSCStart =317;    sT[0].sCP[0].sCPR[69].nAckStart =0;	  sT[0].sCP[0].sCPR[69].nAckNum =0;   sT[0].sCP[0].sCPR[69].nSPOffsetCS =1348;  sT[0].sCP[0].sCPR[69].nSPOffsetLek =1349;
sT[0].sCP[0].sCPR[70].nDCStart =332;     sT[0].sCP[0].sCPR[70].nDCNum = 1;    sT[0].sCP[0].sCPR[70].nSCStart =333;    sT[0].sCP[0].sCPR[70].nAckStart =0;	  sT[0].sCP[0].sCPR[70].nAckNum =0;   sT[0].sCP[0].sCPR[70].nSPOffsetCS =1432;  sT[0].sCP[0].sCPR[70].nSPOffsetLek =1433;
sT[0].sCP[0].sCPR[71].nDCStart =335;     sT[0].sCP[0].sCPR[71].nDCNum = 4;    sT[0].sCP[0].sCPR[71].nSCStart =339;    sT[0].sCP[0].sCPR[71].nAckStart =0;	  sT[0].sCP[0].sCPR[71].nAckNum =0;   sT[0].sCP[0].sCPR[71].nSPOffsetCS =1454;  sT[0].sCP[0].sCPR[71].nSPOffsetLek =1455;
sT[0].sCP[0].sCPR[72].nDCStart =340;     sT[0].sCP[0].sCPR[72].nDCNum = 4;    sT[0].sCP[0].sCPR[72].nSCStart =344;    sT[0].sCP[0].sCPR[72].nAckStart =0;	  sT[0].sCP[0].sCPR[72].nAckNum =0;   sT[0].sCP[0].sCPR[72].nSPOffsetCS =1472;  sT[0].sCP[0].sCPR[72].nSPOffsetLek =1473;
sT[0].sCP[0].sCPR[73].nDCStart =345;     sT[0].sCP[0].sCPR[73].nDCNum = 4;    sT[0].sCP[0].sCPR[73].nSCStart =349;    sT[0].sCP[0].sCPR[73].nAckStart =0;   sT[0].sCP[0].sCPR[73].nAckNum =0;   sT[0].sCP[0].sCPR[73].nSPOffsetCS =1509;  sT[0].sCP[0].sCPR[73].nSPOffsetLek =1510;
sT[0].sCP[0].sCPR[74].nDCStart =350;     sT[0].sCP[0].sCPR[74].nDCNum = 1;    sT[0].sCP[0].sCPR[74].nSCStart =351;    sT[0].sCP[0].sCPR[74].nAckStart =0;	  sT[0].sCP[0].sCPR[74].nAckNum =0;   sT[0].sCP[0].sCPR[74].nSPOffsetCS =1525;  sT[0].sCP[0].sCPR[74].nSPOffsetLek =1526;
sT[0].sCP[0].sCPR[75].nDCStart =353;     sT[0].sCP[0].sCPR[75].nDCNum = 1;    sT[0].sCP[0].sCPR[75].nSCStart =354;    sT[0].sCP[0].sCPR[75].nAckStart =0;	  sT[0].sCP[0].sCPR[75].nAckNum =0;   sT[0].sCP[0].sCPR[75].nSPOffsetCS =1541;  sT[0].sCP[0].sCPR[75].nSPOffsetLek =1542;
sT[0].sCP[0].sCPR[76].nDCStart =356;     sT[0].sCP[0].sCPR[76].nDCNum = 1;    sT[0].sCP[0].sCPR[76].nSCStart =357;    sT[0].sCP[0].sCPR[76].nAckStart =0;	  sT[0].sCP[0].sCPR[76].nAckNum =0;   sT[0].sCP[0].sCPR[76].nSPOffsetCS =1557;  sT[0].sCP[0].sCPR[76].nSPOffsetLek =1558;
sT[0].sCP[0].sCPR[77].nDCStart =359;     sT[0].sCP[0].sCPR[77].nDCNum = 1;    sT[0].sCP[0].sCPR[77].nSCStart =360;    sT[0].sCP[0].sCPR[77].nAckStart =0;	  sT[0].sCP[0].sCPR[77].nAckNum =0;   sT[0].sCP[0].sCPR[77].nSPOffsetCS =1573;  sT[0].sCP[0].sCPR[77].nSPOffsetLek =1574;
sT[0].sCP[0].sCPR[78].nDCStart =362;     sT[0].sCP[0].sCPR[78].nDCNum = 4;    sT[0].sCP[0].sCPR[78].nSCStart =366;    sT[0].sCP[0].sCPR[78].nAckStart =0;	  sT[0].sCP[0].sCPR[78].nAckNum =0;   sT[0].sCP[0].sCPR[78].nSPOffsetCS =1591;  sT[0].sCP[0].sCPR[78].nSPOffsetLek =1592;
sT[0].sCP[0].sCPR[79].nDCStart =367;     sT[0].sCP[0].sCPR[79].nDCNum = 4;    sT[0].sCP[0].sCPR[79].nSCStart =371;    sT[0].sCP[0].sCPR[79].nAckStart =0;	  sT[0].sCP[0].sCPR[79].nAckNum =0;   sT[0].sCP[0].sCPR[79].nSPOffsetCS =1613;  sT[0].sCP[0].sCPR[79].nSPOffsetLek =1614;
sT[0].sCP[0].sCPR[80].nDCStart =372;     sT[0].sCP[0].sCPR[80].nDCNum = 4;    sT[0].sCP[0].sCPR[80].nSCStart =376;    sT[0].sCP[0].sCPR[80].nAckStart =0;	  sT[0].sCP[0].sCPR[80].nAckNum =0;   sT[0].sCP[0].sCPR[80].nSPOffsetCS =1631;  sT[0].sCP[0].sCPR[80].nSPOffsetLek =1632;
sT[0].sCP[0].sCPR[81].nDCStart =377;     sT[0].sCP[0].sCPR[81].nDCNum = 4;    sT[0].sCP[0].sCPR[81].nSCStart =381;    sT[0].sCP[0].sCPR[81].nAckStart =0;	  sT[0].sCP[0].sCPR[81].nAckNum =0;   sT[0].sCP[0].sCPR[81].nSPOffsetCS =1649;  sT[0].sCP[0].sCPR[81].nSPOffsetLek =1650;
sT[0].sCP[0].sCPR[82].nDCStart =382;     sT[0].sCP[0].sCPR[82].nDCNum = 4;    sT[0].sCP[0].sCPR[82].nSCStart =386;    sT[0].sCP[0].sCPR[82].nAckStart =0;	  sT[0].sCP[0].sCPR[82].nAckNum =0;   sT[0].sCP[0].sCPR[82].nSPOffsetCS =1667;  sT[0].sCP[0].sCPR[82].nSPOffsetLek =1668;
sT[0].sCP[0].sCPR[83].nDCStart =387;     sT[0].sCP[0].sCPR[83].nDCNum = 4;    sT[0].sCP[0].sCPR[83].nSCStart =391;    sT[0].sCP[0].sCPR[83].nAckStart =0;	  sT[0].sCP[0].sCPR[83].nAckNum =0;   sT[0].sCP[0].sCPR[83].nSPOffsetCS =1706;  sT[0].sCP[0].sCPR[83].nSPOffsetLek =1707;
sT[0].sCP[0].sCPR[84].nDCStart =392;     sT[0].sCP[0].sCPR[84].nDCNum = 4;    sT[0].sCP[0].sCPR[84].nSCStart =396;    sT[0].sCP[0].sCPR[84].nAckStart =0;	  sT[0].sCP[0].sCPR[84].nAckNum =0;   sT[0].sCP[0].sCPR[84].nSPOffsetCS =1724;  sT[0].sCP[0].sCPR[84].nSPOffsetLek =1725;
sT[0].sCP[0].sCPR[85].nDCStart =397;     sT[0].sCP[0].sCPR[85].nDCNum = 4;    sT[0].sCP[0].sCPR[85].nSCStart =401;    sT[0].sCP[0].sCPR[85].nAckStart =0;	  sT[0].sCP[0].sCPR[85].nAckNum =0;   sT[0].sCP[0].sCPR[85].nSPOffsetCS =1748;  sT[0].sCP[0].sCPR[85].nSPOffsetLek =1749;
sT[0].sCP[0].sCPR[86].nDCStart =402;     sT[0].sCP[0].sCPR[86].nDCNum = 4;    sT[0].sCP[0].sCPR[86].nSCStart =406;    sT[0].sCP[0].sCPR[86].nAckStart =0;	  sT[0].sCP[0].sCPR[86].nAckNum =0;   sT[0].sCP[0].sCPR[86].nSPOffsetCS =1772;  sT[0].sCP[0].sCPR[86].nSPOffsetLek =1773;
sT[0].sCP[0].sCPR[87].nDCStart =407;     sT[0].sCP[0].sCPR[87].nDCNum = 4;    sT[0].sCP[0].sCPR[87].nSCStart =411;    sT[0].sCP[0].sCPR[87].nAckStart =0;	  sT[0].sCP[0].sCPR[87].nAckNum =0;   sT[0].sCP[0].sCPR[87].nSPOffsetCS =1796;  sT[0].sCP[0].sCPR[87].nSPOffsetLek =1797;
sT[0].sCP[0].sCPR[88].nDCStart =412;     sT[0].sCP[0].sCPR[88].nDCNum = 1;    sT[0].sCP[0].sCPR[88].nSCStart =413;    sT[0].sCP[0].sCPR[88].nAckStart =0;	  sT[0].sCP[0].sCPR[88].nAckNum =0;   sT[0].sCP[0].sCPR[88].nSPOffsetCS =1812;  sT[0].sCP[0].sCPR[88].nSPOffsetLek =1813;
sT[0].sCP[0].sCPR[89].nDCStart =415;     sT[0].sCP[0].sCPR[89].nDCNum = 4;    sT[0].sCP[0].sCPR[89].nSCStart =419;    sT[0].sCP[0].sCPR[89].nAckStart =0;	  sT[0].sCP[0].sCPR[89].nAckNum =0;   sT[0].sCP[0].sCPR[89].nSPOffsetCS =1830;  sT[0].sCP[0].sCPR[89].nSPOffsetLek =1831;
sT[0].sCP[0].sCPR[90].nDCStart =420;     sT[0].sCP[0].sCPR[90].nDCNum = 4;    sT[0].sCP[0].sCPR[90].nSCStart =424;    sT[0].sCP[0].sCPR[90].nAckStart =0;	  sT[0].sCP[0].sCPR[90].nAckNum =0;   sT[0].sCP[0].sCPR[90].nSPOffsetCS =1848;  sT[0].sCP[0].sCPR[90].nSPOffsetLek =1849;
sT[0].sCP[0].sCPR[91].nDCStart =425;     sT[0].sCP[0].sCPR[91].nDCNum = 4;    sT[0].sCP[0].sCPR[91].nSCStart =429;    sT[0].sCP[0].sCPR[91].nAckStart =0;	  sT[0].sCP[0].sCPR[91].nAckNum =0;   sT[0].sCP[0].sCPR[91].nSPOffsetCS =1866;  sT[0].sCP[0].sCPR[91].nSPOffsetLek =1867;
sT[0].sCP[0].sCPR[92].nDCStart =430;     sT[0].sCP[0].sCPR[92].nDCNum = 4;    sT[0].sCP[0].sCPR[92].nSCStart =434;    sT[0].sCP[0].sCPR[92].nAckStart =0;	  sT[0].sCP[0].sCPR[92].nAckNum =0;   sT[0].sCP[0].sCPR[92].nSPOffsetCS =1884;  sT[0].sCP[0].sCPR[92].nSPOffsetLek =1885;

sT[0].sCP[0].sCPR[93].nDCStart =435;     sT[0].sCP[0].sCPR[93].nDCNum = 4;    sT[0].sCP[0].sCPR[93].nSCStart =439;    sT[0].sCP[0].sCPR[93].nAckStart =0;	  sT[0].sCP[0].sCPR[93].nAckNum =0;   sT[0].sCP[0].sCPR[93].nSPOffsetCS =1902;  sT[0].sCP[0].sCPR[93].nSPOffsetLek =1903;
sT[0].sCP[0].sCPR[94].nDCStart =440;     sT[0].sCP[0].sCPR[94].nDCNum = 4;    sT[0].sCP[0].sCPR[94].nSCStart =444;    sT[0].sCP[0].sCPR[94].nAckStart =0;	  sT[0].sCP[0].sCPR[94].nAckNum =0;   sT[0].sCP[0].sCPR[94].nSPOffsetCS =1920;  sT[0].sCP[0].sCPR[94].nSPOffsetLek =1921;
sT[0].sCP[0].sCPR[95].nDCStart =445;     sT[0].sCP[0].sCPR[95].nDCNum =10;    sT[0].sCP[0].sCPR[95].nSCStart =455;    sT[0].sCP[0].sCPR[95].nAckStart =0;	  sT[0].sCP[0].sCPR[95].nAckNum =0;   sT[0].sCP[0].sCPR[95].nSPOffsetCS =1986;  sT[0].sCP[0].sCPR[95].nSPOffsetLek =1987;
sT[0].sCP[0].sCPR[96].nDCStart =456;     sT[0].sCP[0].sCPR[96].nDCNum = 4;    sT[0].sCP[0].sCPR[96].nSCStart =460;    sT[0].sCP[0].sCPR[96].nAckStart =0;	  sT[0].sCP[0].sCPR[96].nAckNum =0;   sT[0].sCP[0].sCPR[96].nSPOffsetCS =2004;  sT[0].sCP[0].sCPR[96].nSPOffsetLek =2005;
sT[0].sCP[0].sCPR[97].nDCStart =461;     sT[0].sCP[0].sCPR[97].nDCNum = 8;    sT[0].sCP[0].sCPR[97].nSCStart =469;    sT[0].sCP[0].sCPR[97].nAckStart =0;	  sT[0].sCP[0].sCPR[97].nAckNum =0;   sT[0].sCP[0].sCPR[97].nSPOffsetCS =2073;  sT[0].sCP[0].sCPR[97].nSPOffsetLek =2074;

sT[0].sCP[0].sCPR[98].nDCStart =470;     sT[0].sCP[0].sCPR[98].nDCNum = 4;    sT[0].sCP[0].sCPR[98].nSCStart =474;    sT[0].sCP[0].sCPR[98].nAckStart =0;	  sT[0].sCP[0].sCPR[98].nAckNum =0;   sT[0].sCP[0].sCPR[98].nSPOffsetCS =2097;  sT[0].sCP[0].sCPR[98].nSPOffsetLek =2098;
sT[0].sCP[0].sCPR[99].nDCStart =475;     sT[0].sCP[0].sCPR[99].nDCNum = 4;    sT[0].sCP[0].sCPR[99].nSCStart =479;    sT[0].sCP[0].sCPR[99].nAckStart =0;	  sT[0].sCP[0].sCPR[99].nAckNum =0;   sT[0].sCP[0].sCPR[99].nSPOffsetCS =2115;  sT[0].sCP[0].sCPR[99].nSPOffsetLek =2116;
sT[0].sCP[0].sCPR[100].nDCStart=480;     sT[0].sCP[0].sCPR[100].nDCNum= 4;    sT[0].sCP[0].sCPR[100].nSCStart=484;    sT[0].sCP[0].sCPR[100].nAckStart=0;	  sT[0].sCP[0].sCPR[100].nAckNum=0;   sT[0].sCP[0].sCPR[100].nSPOffsetCS=2133;  sT[0].sCP[0].sCPR[100].nSPOffsetLek=2134;
sT[0].sCP[0].sCPR[101].nDCStart=485;     sT[0].sCP[0].sCPR[101].nDCNum= 4;    sT[0].sCP[0].sCPR[101].nSCStart=489;    sT[0].sCP[0].sCPR[101].nAckStart=0;	  sT[0].sCP[0].sCPR[101].nAckNum=0;   sT[0].sCP[0].sCPR[101].nSPOffsetCS=2155;  sT[0].sCP[0].sCPR[101].nSPOffsetLek=2156;
sT[0].sCP[0].sCPR[102].nDCStart=490;     sT[0].sCP[0].sCPR[102].nDCNum= 8;    sT[0].sCP[0].sCPR[102].nSCStart=498;    sT[0].sCP[0].sCPR[102].nAckStart=0;	  sT[0].sCP[0].sCPR[102].nAckNum=0;   sT[0].sCP[0].sCPR[102].nSPOffsetCS=2183;  sT[0].sCP[0].sCPR[102].nSPOffsetLek=2184; 
sT[0].sCP[0].sCPR[103].nDCStart=499;     sT[0].sCP[0].sCPR[103].nDCNum= 4;    sT[0].sCP[0].sCPR[103].nSCStart=503;    sT[0].sCP[0].sCPR[103].nAckStart=0;	  sT[0].sCP[0].sCPR[103].nAckNum=0;   sT[0].sCP[0].sCPR[103].nSPOffsetCS=2201;  sT[0].sCP[0].sCPR[103].nSPOffsetLek=2202; 
sT[0].sCP[0].sCPR[104].nDCStart=504;     sT[0].sCP[0].sCPR[104].nDCNum= 8;    sT[0].sCP[0].sCPR[104].nSCStart=512;    sT[0].sCP[0].sCPR[104].nAckStart=0;	  sT[0].sCP[0].sCPR[104].nAckNum=0;   sT[0].sCP[0].sCPR[104].nSPOffsetCS=2270;  sT[0].sCP[0].sCPR[104].nSPOffsetLek=2271;
sT[0].sCP[0].sCPR[105].nDCStart=513;     sT[0].sCP[0].sCPR[105].nDCNum= 4;    sT[0].sCP[0].sCPR[105].nSCStart=517;    sT[0].sCP[0].sCPR[105].nAckStart=0;	  sT[0].sCP[0].sCPR[105].nAckNum=0;   sT[0].sCP[0].sCPR[105].nSPOffsetCS=2288;  sT[0].sCP[0].sCPR[105].nSPOffsetLek=2289;
sT[0].sCP[0].sCPR[106].nDCStart=518;     sT[0].sCP[0].sCPR[106].nDCNum= 1;    sT[0].sCP[0].sCPR[106].nSCStart=519;    sT[0].sCP[0].sCPR[106].nAckStart=0;	  sT[0].sCP[0].sCPR[106].nAckNum=0;   sT[0].sCP[0].sCPR[106].nSPOffsetCS=2304;  sT[0].sCP[0].sCPR[106].nSPOffsetLek=2305;
sT[0].sCP[0].sCPR[107].nDCStart=521;     sT[0].sCP[0].sCPR[107].nDCNum= 1;    sT[0].sCP[0].sCPR[107].nSCStart=522;    sT[0].sCP[0].sCPR[107].nAckStart=0;	  sT[0].sCP[0].sCPR[107].nAckNum=0;   sT[0].sCP[0].sCPR[107].nSPOffsetCS=2320;  sT[0].sCP[0].sCPR[107].nSPOffsetLek=2321;
sT[0].sCP[0].sCPR[108].nDCStart=524;     sT[0].sCP[0].sCPR[108].nDCNum= 4;    sT[0].sCP[0].sCPR[108].nSCStart=528;    sT[0].sCP[0].sCPR[108].nAckStart=0;	  sT[0].sCP[0].sCPR[108].nAckNum=0;   sT[0].sCP[0].sCPR[108].nSPOffsetCS=2338;  sT[0].sCP[0].sCPR[108].nSPOffsetLek=2339;
sT[0].sCP[0].sCPR[109].nDCStart=529;     sT[0].sCP[0].sCPR[109].nDCNum= 4;    sT[0].sCP[0].sCPR[109].nSCStart=533;    sT[0].sCP[0].sCPR[109].nAckStart=0;	  sT[0].sCP[0].sCPR[109].nAckNum=0;   sT[0].sCP[0].sCPR[109].nSPOffsetCS=2356;  sT[0].sCP[0].sCPR[109].nSPOffsetLek=2357;
sT[0].sCP[0].sCPR[110].nDCStart=534;     sT[0].sCP[0].sCPR[110].nDCNum= 4;    sT[0].sCP[0].sCPR[110].nSCStart=538;    sT[0].sCP[0].sCPR[110].nAckStart=0;	  sT[0].sCP[0].sCPR[110].nAckNum=0;   sT[0].sCP[0].sCPR[110].nSPOffsetCS=2374;  sT[0].sCP[0].sCPR[110].nSPOffsetLek=2375;
sT[0].sCP[0].sCPR[111].nDCStart=539;     sT[0].sCP[0].sCPR[111].nDCNum= 4;    sT[0].sCP[0].sCPR[111].nSCStart=543;    sT[0].sCP[0].sCPR[111].nAckStart=0;	  sT[0].sCP[0].sCPR[111].nAckNum=0;   sT[0].sCP[0].sCPR[111].nSPOffsetCS=2392;  sT[0].sCP[0].sCPR[111].nSPOffsetLek=2393;
sT[0].sCP[0].sCPR[112].nDCStart=544;     sT[0].sCP[0].sCPR[112].nDCNum= 4;    sT[0].sCP[0].sCPR[112].nSCStart=548;    sT[0].sCP[0].sCPR[112].nAckStart=0;	  sT[0].sCP[0].sCPR[112].nAckNum=0;   sT[0].sCP[0].sCPR[112].nSPOffsetCS=2410;  sT[0].sCP[0].sCPR[112].nSPOffsetLek=2411;
sT[0].sCP[0].sCPR[113].nDCStart=549;     sT[0].sCP[0].sCPR[113].nDCNum= 8;    sT[0].sCP[0].sCPR[113].nSCStart=557;    sT[0].sCP[0].sCPR[113].nAckStart=0;	  sT[0].sCP[0].sCPR[113].nAckNum=0;   sT[0].sCP[0].sCPR[113].nSPOffsetCS=2438;  sT[0].sCP[0].sCPR[113].nSPOffsetLek=2439;
sT[0].sCP[0].sCPR[114].nDCStart =0;    	 sT[0].sCP[0].sCPR[114].nDCNum= 0;    sT[0].sCP[0].sCPR[114].nSCStart=558;    sT[0].sCP[0].sCPR[114].nAckStart=0;	  sT[0].sCP[0].sCPR[114].nAckNum=0;   sT[0].sCP[0].sCPR[114].nSPOffsetCS=2447;  sT[0].sCP[0].sCPR[114].nSPOffsetLek=2448;
sT[0].sCP[0].sCPR[115].nDCStart=559;     sT[0].sCP[0].sCPR[115].nDCNum= 1;    sT[0].sCP[0].sCPR[115].nSCStart=560;    sT[0].sCP[0].sCPR[115].nAckStart=0;	  sT[0].sCP[0].sCPR[115].nAckNum=0;   sT[0].sCP[0].sCPR[115].nSPOffsetCS=2463;  sT[0].sCP[0].sCPR[115].nSPOffsetLek=2464;
sT[0].sCP[0].sCPR[116].nDCStart=562;     sT[0].sCP[0].sCPR[116].nDCNum= 4;    sT[0].sCP[0].sCPR[116].nSCStart=566;    sT[0].sCP[0].sCPR[116].nAckStart=0;	  sT[0].sCP[0].sCPR[116].nAckNum=0;   sT[0].sCP[0].sCPR[116].nSPOffsetCS=2502;  sT[0].sCP[0].sCPR[116].nSPOffsetLek=2503;
sT[0].sCP[0].sCPR[117].nDCStart=567;     sT[0].sCP[0].sCPR[117].nDCNum= 8;    sT[0].sCP[0].sCPR[117].nSCStart=575;    sT[0].sCP[0].sCPR[117].nAckStart=0;	  sT[0].sCP[0].sCPR[117].nAckNum=0;   sT[0].sCP[0].sCPR[117].nSPOffsetCS=2524;  sT[0].sCP[0].sCPR[117].nSPOffsetLek=2525;
sT[0].sCP[0].sCPR[118].nDCStart=576;     sT[0].sCP[0].sCPR[118].nDCNum= 1;    sT[0].sCP[0].sCPR[118].nSCStart=577;    sT[0].sCP[0].sCPR[118].nAckStart=0;	  sT[0].sCP[0].sCPR[118].nAckNum=0;   sT[0].sCP[0].sCPR[118].nSPOffsetCS=2540;  sT[0].sCP[0].sCPR[118].nSPOffsetLek=2541;



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
   	sT[0].sTAL[19].nSP_EXTRA_OFFSET		= 2440;
    sT[0].sTAL[19].nSP_EXTRA_NUM		= 2;

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
	sT[0].sMOT[26].nIEC_NM				= 181;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[26].nNMNum				  = 4;		/* Analóg mérések száma*/

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
	sT[0].sMOT[36].nIEC_NM				= 448;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[36].nNMNum      			= 4;


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

/* Székesfehérvár, Kazánház  ----------------------------------------------------------------*/
sT[0].sTI[58].nType = TYP_MOT;

	sT[0].sMOT[58].nIEC_SP				= 1112;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[58].nIEC_DP				= 222;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[58].nIEC_NM				= 254;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[58].nNMNum				= 6;		/* Analóg mérések száma*/

/* Szombathely, Magyar u.  ----------------------------------------------------------------*/
sT[0].sTI[59].nType = TYP_MOT;

	sT[0].sMOT[59].nIEC_SP				= 1130;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[59].nIEC_DP				= 230;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[59].nIEC_NM				= 260;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[59].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kõszegdoroszló, PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[60].nType = TYP_MOT;

	sT[0].sMOT[60].nIEC_SP				= 1152;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_SP_NUM			= 26;		/* Egybites értékek száma*/
	sT[0].sMOT[60].nIEC_DP				= 238;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_DP_NUM			= 16;   		/* Két bites értékek száma*/
	sT[0].sMOT[60].nIEC_NM				= 269;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[60].nNMNum				= 13;		/* Analóg mérések száma*/

/* Kincsesbánya, PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[61].nType = TYP_MOT;

	sT[0].sMOT[61].nIEC_SP				= 1180;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[61].nIEC_DP				= 254;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[61].nIEC_NM				= 282;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[61].nNMNum				= 11;		/* Analóg mérések száma*/

/* Sárvár, Spar  ----------------------------------------------------------------*/
sT[0].sTI[62].nType = TYP_MOT;

	sT[0].sMOT[62].nIEC_SP				= 1198;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[62].nIEC_DP				= 262;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[62].nIEC_NM				= 293;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[62].nNMNum				= 6;		/* Analóg mérések száma*/

/* Sárvár, SZéchenyi III.  ----------------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_MOT;

	sT[0].sMOT[63].nIEC_SP				= 1216;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[63].nIEC_DP				= 270;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[63].nIEC_NM				= 299;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[63].nNMNum				= 6;		/* Analóg mérések száma*/

/* Tata, Bartók ----------------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_MOT;

	sT[0].sMOT[64].nIEC_SP				= 1234;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[64].nIEC_DP				= 278;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[64].nIEC_NM				= 305;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[64].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kisbér, Komáromi ----------------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_MOT;

	sT[0].sMOT[65].nIEC_SP				= 1256;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[65].nIEC_DP				= 286;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[65].nIEC_NM				= 314;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[65].nNMNum				= 12;		/* Analóg mérések száma*/

/* Velence, Nautis ----------------------------------------------------------------*/
sT[0].sTI[66].nType = TYP_MOT;

	sT[0].sMOT[66].nIEC_SP				= 1278;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[66].nIEC_DP				= 294;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[66].nIEC_NM				= 326;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[66].nNMNum				= 6;		/* Analóg mérések száma*/

/* Velence, ABC Wickenburg ----------------------------------------------------------------*/
sT[0].sTI[67].nType = TYP_MOT;

	sT[0].sMOT[67].nIEC_SP				= 1296;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[67].nIEC_DP				= 302;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[67].nIEC_NM				= 332;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[67].nNMNum				= 6;		/* Analóg mérések száma*/

/* Sárvár, Alkotmány I. ----------------------------------------------------------------*/
sT[0].sTI[68].nType = TYP_MOT;

	sT[0].sMOT[68].nIEC_SP				= 1314;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[68].nIEC_DP				= 310;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[68].nIEC_NM				= 338;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[68].nNMNum				= 6;		/* Analóg mérések száma*/

/* Kõszeg, Spar ----------------------------------------------------------------*/
sT[0].sTI[69].nType = TYP_MOT;

	sT[0].sMOT[69].nIEC_SP				= 1332;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[69].nIEC_DP				= 318;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[69].nIEC_NM				= 344;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[69].nNMNum				= 6;		/* Analóg mérések száma*/

/* 34-37  -----------------------------------------------------------*/	
sT[0].sTI[70].nType = TYP_TMOK;

	sT[0].sMOT[70].nIEC_SP				= 1418;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_DP				= 350;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[70].nIEC_NM				= 365;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[70].nNMNum      			= 4;

/* Sárvár, Szatmár I. ----------------------------------------------------------------*/
sT[0].sTI[71].nType = TYP_MOT;

	sT[0].sMOT[71].nIEC_SP				= 1434;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[71].nIEC_DP				= 351;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[71].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[71].nIEC_NM				= 369;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[71].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kincsesbánya, 03-100 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[72].nType = TYP_MOT;

	sT[0].sMOT[72].nIEC_SP				= 1456;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[72].nIEC_DP				= 359;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[72].nIEC_NM				= 378;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[72].nNMNum				= 9;		/* Analóg mérések száma*/


/* Mosonmagyaróvár 739-8 PV erõmû ----------------------------------------------*/
  sT[0].sTI[73].nType = TYP_TAL;
  
	sT[0].sTAL[73].nIEC_SP       		= 1474;
	sT[0].sTAL[73].nIEC_OsszevontHiba	= 1506;
	sT[0].sTAL[73].nIEC_MT_KommHiba	= 1507;
	sT[0].sTAL[73].nKommStatusNum		= 2;	
	sT[0].sTAL[73].nIEC_DP       		= 367;
	sT[0].sTAL[73].nIEC_DP_FSZ1  		= 371;
	sT[0].sTAL[73].nIEC_NM				= 387;
	sT[0].sTAL[73].nNMNum		  		= 9;
    
 	sT[0].sTAL[73].nIEC_DP_2BIT1 		= 375;
	sT[0].sTAL[73].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[73].nIEC_DP_2BIT_BENT1	= 912;

  
  sT[0].sTAL[73].nIEC_DP_12BIT2		= 376;
	sT[0].sTAL[73].nIEC_DP_2BIT_BK2	= 920;

/* 32607  -----------------------------------------------------------*/	
sT[0].sTI[74].nType = TYP_TMOK;

	sT[0].sMOT[74].nIEC_SP				= 1511;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_DP				= 377;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[74].nIEC_NM				= 396;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[74].nNMNum      			= 4;

/* 32608  -----------------------------------------------------------*/	
sT[0].sTI[75].nType = TYP_TMOK;

	sT[0].sMOT[75].nIEC_SP				= 1527;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_DP				= 378;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_NM				= 400;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[75].nNMNum      			= 4;

/* 32609  -----------------------------------------------------------*/	
sT[0].sTI[76].nType = TYP_TMOK;

	sT[0].sMOT[76].nIEC_SP				= 1543;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_DP				= 379;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_NM				= 404;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[76].nNMNum      			= 4;

/* 30-94  -----------------------------------------------------------*/	
sT[0].sTI[77].nType = TYP_TMOK;

	sT[0].sMOT[77].nIEC_SP				= 1559;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_DP				= 380;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_NM				= 408;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[77].nNMNum      			= 4;

/* Celldömölk, 2912/17 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[78].nType = TYP_MOT;

	sT[0].sMOT[78].nIEC_SP				= 1575;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[78].nIEC_DP				= 381;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[78].nIEC_NM				= 412;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[78].nNMNum				= 9;		/* Analóg mérések száma*/

/* Tata, Kristály ----------------------------------------------------------------*/
sT[0].sTI[79].nType = TYP_MOT;

	sT[0].sMOT[79].nIEC_SP				= 1593;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[79].nIEC_DP				= 389;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[79].nIEC_NM				= 421;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[79].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kenéz 062-9 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[80].nType = TYP_MOT;

	sT[0].sMOT[80].nIEC_SP				= 1615;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[80].nIEC_DP				= 397;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[80].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[80].nIEC_NM				= 430;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[80].nNMNum				= 9;		/* Analóg mérések száma*/

/* Oroszlány 4700-9 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[81].nType = TYP_MOT;

	sT[0].sMOT[81].nIEC_SP				= 1633;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[81].nIEC_DP				= 405;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[81].nIEC_NM				= 439;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[81].nNMNum				= 9;		/* Analóg mérések száma*/

/* Szombathely Claudius ----------------------------------------------------------------*/
sT[0].sTI[82].nType = TYP_MOT;

	sT[0].sMOT[82].nIEC_SP				= 1651;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[82].nIEC_DP				= 413;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[82].nIEC_NM				= 452;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[82].nNMNum				= 6;		/* Analóg mérések száma*/

/* Jánosháza, 033_3 PV erõmû ----------------------------------------------------------------*/
  sT[0].sTI[83].nType = TYP_TAL;
  
	sT[0].sTAL[83].nIEC_SP       		= 1669;
	sT[0].sTAL[83].nIEC_OsszevontHiba	= 1701;
	sT[0].sTAL[83].nIEC_MT_KommHiba	= 1702;
	sT[0].sTAL[83].nKommStatusNum		= 2;	
	sT[0].sTAL[83].nIEC_DP       		= 421;
	sT[0].sTAL[83].nIEC_DP_FSZ1  		= 425;
	sT[0].sTAL[83].nIEC_NM				= 458;
	sT[0].sTAL[83].nNMNum		  		= 9;
  
  sT[0].sTAL[83].nSP_EXTRA_OFFSET		= 1704;
	sT[0].sTAL[83].nSP_EXTRA_NUM		= 2;
    

/* Tatabánya Unio ltp. ----------------------------------------------------------------*/
sT[0].sTI[84].nType = TYP_MOT;

	sT[0].sMOT[84].nIEC_SP				= 1708;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[84].nIEC_DP				= 429;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[84].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[84].nIEC_NM				= 467;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[84].nNMNum				= 6;		/* Analóg mérések száma*/


/* Gyõrvár, 03/15 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[85].nType = TYP_MOT;

	sT[0].sMOT[85].nIEC_SP				= 1726;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_SP_NUM			= 22;		/* Egybites értékek száma*/
	sT[0].sMOT[85].nIEC_DP				= 437;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[85].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[85].nIEC_NM				= 473;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[85].nNMNum				= 9;		/* Analóg mérések száma*/

/* Gyõrvár, 05/1 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[86].nType = TYP_MOT;

	sT[0].sMOT[86].nIEC_SP				= 1750;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_SP_NUM			= 22;		/* Egybites értékek száma*/
	sT[0].sMOT[86].nIEC_DP				= 445;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[86].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[86].nIEC_NM				= 482;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[86].nNMNum				= 9;		/* Analóg mérések száma*/

/* Bodajk 0207/10 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[87].nType = TYP_MOT;

	sT[0].sMOT[87].nIEC_SP				= 1774;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_SP_NUM			= 22;		/* Egybites értékek száma*/
	sT[0].sMOT[87].nIEC_DP				= 453;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[87].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[87].nIEC_NM				= 491;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[87].nNMNum				= 9;		/* Analóg mérések száma*/

/* 36601  -----------------------------------------------------------*/	
sT[0].sTI[88].nType = TYP_TMOK;

	sT[0].sMOT[88].nIEC_SP				= 1798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_DP				= 461;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[88].nIEC_NM				= 500;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[88].nNMNum      			= 4;

/* Annavölgy 0276/15 ----------------------------------------------------------------*/
sT[0].sTI[89].nType = TYP_MOT;

	sT[0].sMOT[89].nIEC_SP				= 1814;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[89].nIEC_DP				= 462;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[89].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[89].nIEC_NM				= 504;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[89].nNMNum				= 9;		/* Analóg mérések száma*/

/* Székesfehérvár, Albacomp ----------------------------------------------------------------*/
sT[0].sTI[90].nType = TYP_MOT;

	sT[0].sMOT[90].nIEC_SP				= 1832;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[90].nIEC_DP				= 470;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[90].nIEC_NM				= 513;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[90].nNMNum				= 6;		/* Analóg mérések száma*/

/* Tatabánya, közmûvelõdás háza ----------------------------------------------------------------*/
sT[0].sTI[91].nType = TYP_MOT;

	sT[0].sMOT[91].nIEC_SP				= 1850;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[91].nIEC_DP				= 478;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[91].nIEC_NM				= 519;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[91].nNMNum				= 6;		/* Analóg mérések száma*/

/* Zalaegerszeg Olai bisztró ----------------------------------------------------------------*/
sT[0].sTI[92].nType = TYP_MOT;

	sT[0].sMOT[92].nIEC_SP				= 1868;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[92].nIEC_DP				= 486;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[92].nIEC_NM				= 525;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[92].nNMNum				= 6;		/* Analóg mérések száma*/

/* Tác 0346/1-1 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[93].nType = TYP_MOT;

	sT[0].sMOT[93].nIEC_SP				= 1886;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[93].nIEC_DP				= 500;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[93].nIEC_NM				= 531;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[93].nNMNum				= 9;		/* Analóg mérések száma*/

/* Tác 0346/1-2 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[94].nType = TYP_MOT;

	sT[0].sMOT[94].nIEC_SP				= 1904;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[94].nIEC_DP				= 508;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[94].nIEC_NM				= 540;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[94].nNMNum				= 9;		/* Analóg mérések száma*/

/* Almásfüztitõ PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[95].nType = TYP_MOT;

	sT[0].sMOT[95].nIEC_SP				= 1922;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_SP_NUM			= 64;		/* Egybites értékek száma*/
	sT[0].sMOT[95].nIEC_DP				= 516;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[95].nIEC_DP_NUM			=40;   		/* Két bites értékek száma*/
	sT[0].sMOT[95].nIEC_NM				= 549;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[95].nNMNum				= 9;		/* Analóg mérések száma*/

/* Tata, Moowa PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[96].nType = TYP_MOT;

	sT[0].sMOT[96].nIEC_SP				= 1988;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[96].nIEC_DP				= 556;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[96].nIEC_DP_NUM			=4;   		/* Két bites értékek száma*/
	sT[0].sMOT[96].nIEC_NM				= 558;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[96].nNMNum				= 5;		/* Analóg mérések száma*/

  /* Komárom, CTP TALUS 8 csatornas !!! ----------------------------------------------*/
  sT[0].sTI[97].nType = TYP_TAL;
  
	sT[0].sTAL[97].nIEC_SP       		= 2006;
	sT[0].sTAL[97].nIEC_OsszevontHiba	= 2070;
	sT[0].sTAL[97].nIEC_MT_KommHiba	= 2071;
	sT[0].sTAL[97].nKommStatusNum		= 2;
	sT[0].sTAL[97].nLeagNum			= 8;

	sT[0].sTAL[97].nIEC_DP       		= 560;
	sT[0].sTAL[97].nIEC_DP_FSZ1  		= 568;
	sT[0].sTAL[97].nIEC_NM				= 563;
	sT[0].sTAL[97].nNMNum		  		= 8;
    
/* Zalaegerszeg, 0779/ PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[98].nType = TYP_MOT;

	sT[0].sMOT[98].nIEC_SP				= 2075;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_SP_NUM			= 22;		/* Egybites értékek száma*/
	sT[0].sMOT[98].nIEC_DP				= 576;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[98].nIEC_NM				= 571;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[98].nNMNum				= 9;		/* Analóg mérések száma*/

/* Komárom 1782/233 PV erõmû ----------------------------------------------------------------*/
sT[0].sTI[99].nType = TYP_MOT;

	sT[0].sMOT[99].nIEC_SP				= 2099;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[99].nIEC_DP				= 584;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[99].nIEC_NM				= 580;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[99].nNMNum				= 9;		/* Analóg mérések száma*/

/* Tata, LIDL PV  ----------------------------------------------------------------*/
sT[0].sTI[100].nType = TYP_MOT;

	sT[0].sMOT[100].nIEC_SP				= 2117;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[100].nIEC_DP				= 592;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[100].nIEC_NM				= 589;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[100].nNMNum				= 6;		/* Analóg mérések száma*/

/* Tata, Köjál ----------------------------------------------------------------*/
sT[0].sTI[101].nType = TYP_MOT;

	sT[0].sMOT[101].nIEC_SP				= 2135;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[101].nIEC_DP				= 600;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[101].nIEC_NM				= 595;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[101].nNMNum				= 9;		/* Analóg mérések száma*/


/* Gyöngyösfalu, PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[102].nType = TYP_MOT;

	sT[0].sMOT[102].nIEC_SP				= 2157;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_SP_NUM			= 26;		/* Egybites értékek száma*/
	sT[0].sMOT[102].nIEC_DP				= 608;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_DP_NUM			= 16;   		/* Két bites értékek száma*/
	sT[0].sMOT[102].nIEC_NM				= 604;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[102].nNMNum				= 18;		/* Analóg mérések száma*/

/* Nova 2037/2, PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[103].nType = TYP_MOT;

	sT[0].sMOT[103].nIEC_SP				= 2185;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[103].nIEC_DP				= 624;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[103].nIEC_NM				= 622;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[103].nNMNum				= 9;		/* Analóg mérések száma*/

  /* Lenti 0236 PV erõmû,  TALUS 8 csatornas !!! ----------------------------------------------*/
  sT[0].sTI[104].nType = TYP_TAL;
  
	sT[0].sTAL[104].nIEC_SP       		= 2203;
	sT[0].sTAL[104].nIEC_OsszevontHiba	= 2267;
	sT[0].sTAL[104].nIEC_MT_KommHiba	= 2268;
	sT[0].sTAL[104].nKommStatusNum		= 2;
	sT[0].sTAL[104].nLeagNum			= 8;

	sT[0].sTAL[104].nIEC_DP       		= 632;
	sT[0].sTAL[104].nIEC_DP_FSZ1  		= 640;
	sT[0].sTAL[104].nIEC_NM				= 631;
	sT[0].sTAL[104].nNMNum		  		= 18;
    
/* Videoton 3523/34, PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[105].nType = TYP_MOT;

	sT[0].sMOT[105].nIEC_SP				= 2272;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[105].nIEC_DP				= 649;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[105].nIEC_NM				= 649;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[105].nNMNum				= 9;		/* Analóg mérések száma*/

/* 31-81  -----------------------------------------------------------*/	
sT[0].sTI[106].nType = TYP_TMOK;

	sT[0].sMOT[106].nIEC_SP				= 2290;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_DP				= 657;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_NM				= 658;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[106].nNMNum      	= 4;

/* 34-82  -----------------------------------------------------------*/	
sT[0].sTI[107].nType = TYP_TMOK;

	sT[0].sMOT[107].nIEC_SP				= 2306;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_DP				= 658;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_NM				= 662;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[107].nNMNum      	= 4;

/* Csókakõ 070/2 MVM OVIT PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[108].nType = TYP_MOT;

	sT[0].sMOT[108].nIEC_SP				= 2322;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[108].nIEC_DP				= 659;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[108].nIEC_NM				= 666;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[108].nNMNum				= 9;		/* Analóg mérések száma*/

/* Celldömölk  1873/28 PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[109].nType = TYP_MOT;

	sT[0].sMOT[109].nIEC_SP				= 2340;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[109].nIEC_DP				= 667;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[109].nIEC_NM				= 675;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[109].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kõszeg 0117 PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[110].nType = TYP_MOT;

	sT[0].sMOT[110].nIEC_SP				= 2358;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[110].nIEC_DP				= 675;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[110].nIEC_NM				= 684;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[110].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kisbér 0129 PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[111].nType = TYP_MOT;

	sT[0].sMOT[111].nIEC_SP				= 2376;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[111].nIEC_DP				= 683;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[111].nIEC_NM				= 693;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[111].nNMNum				= 9;		/* Analóg mérések száma*/

/* Kisbér Iskola utca  ----------------------------------------------------------------*/
sT[0].sTI[112].nType = TYP_MOT;

	sT[0].sMOT[112].nIEC_SP				= 2394;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[112].nIEC_DP				= 691;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[112].nIEC_NM				= 702;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[112].nNMNum				= 6;		/* Analóg mérések száma*/

/* Ács 0421/17 PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[113].nType = TYP_MOT;

	sT[0].sMOT[113].nIEC_SP				= 2412;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_SP_NUM			= 26;		/* Egybites értékek száma*/
	sT[0].sMOT[113].nIEC_DP				= 699;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_DP_NUM			=16;   		/* Két bites értékek száma*/
	sT[0].sMOT[113].nIEC_NM				= 708;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[113].nNMNum				= 18;		/* Analóg mérések száma*/

  /* Komárom DAC  -----------------------------------------------------------*/	
sT[0].sTI[114].nType = TYP_MOT;

	sT[0].sMOT[114].nIEC_SP				= 2442;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_SP_NUM			= 5;		/* Egybites értékek száma*/
	sT[0].sMOT[114].nIEC_DP_NUM			= 0;
	sT[0].sMOT[114].nNMNum      		= 0;

/* 30-19  -----------------------------------------------------------*/	
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 2449;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_DP				= 715;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_NM				= 726;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[115].nNMNum      	= 4;

/* Celldömölk 0355/18 PV erõmû ----------------------------------------------------------------*/
  sT[0].sTI[116].nType = TYP_TAL;
  
	sT[0].sTAL[116].nIEC_SP       		= 2465;
	sT[0].sTAL[116].nIEC_OsszevontHiba	= 2497;
	sT[0].sTAL[116].nIEC_MT_KommHiba	= 2498;
	sT[0].sTAL[116].nKommStatusNum		= 2;	
	sT[0].sTAL[116].nIEC_DP       		= 716;
	sT[0].sTAL[116].nIEC_DP_FSZ1  		= 720;
	sT[0].sTAL[116].nIEC_NM				= 730;
	sT[0].sTAL[116].nNMNum		  		= 9;
  
  sT[0].sTAL[116].nSP_EXTRA_OFFSET		= 2500;
	sT[0].sTAL[116].nSP_EXTRA_NUM		= 2;

/* Környe 0337/9  PV erõmû  ----------------------------------------------------------------*/
sT[0].sTI[117].nType = TYP_MOT;

	sT[0].sMOT[117].nIEC_SP				= 2504;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_SP_NUM			= 20;		/* Egybites értékek száma*/
	sT[0].sMOT[117].nIEC_DP				= 724;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_DP_NUM			=16;   		/* Két bites értékek száma*/
	sT[0].sMOT[117].nIEC_NM				= 739;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[117].nNMNum				= 9;		/* Analóg mérések száma*/

/* 82-01  -----------------------------------------------------------*/	
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2526;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_DP				= 740;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_NM				= 748;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[118].nNMNum      	= 4;



} /* end fnSetDataPar()*/

