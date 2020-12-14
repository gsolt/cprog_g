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

/* Single command inicializ�l�sa ciklusban */	
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
sT[0].sCP[0].sCPR[119].nDCStart=579;     sT[0].sCP[0].sCPR[119].nDCNum= 4;    sT[0].sCP[0].sCPR[119].nSCStart=583;    sT[0].sCP[0].sCPR[119].nAckStart=0;	  sT[0].sCP[0].sCPR[119].nAckNum=0;   sT[0].sCP[0].sCPR[119].nSPOffsetCS=2562;  sT[0].sCP[0].sCPR[119].nSPOffsetLek=2563;
sT[0].sCP[0].sCPR[120].nDCStart=584;     sT[0].sCP[0].sCPR[120].nDCNum= 8;    sT[0].sCP[0].sCPR[120].nSCStart=592;    sT[0].sCP[0].sCPR[120].nAckStart=0;	  sT[0].sCP[0].sCPR[120].nAckNum=0;   sT[0].sCP[0].sCPR[120].nSPOffsetCS=2590;  sT[0].sCP[0].sCPR[120].nSPOffsetLek=2591;
sT[0].sCP[0].sCPR[121].nDCStart=593;     sT[0].sCP[0].sCPR[121].nDCNum= 8;    sT[0].sCP[0].sCPR[121].nSCStart=601;    sT[0].sCP[0].sCPR[121].nAckStart=0;	  sT[0].sCP[0].sCPR[121].nAckNum=0;   sT[0].sCP[0].sCPR[121].nSPOffsetCS=2618;  sT[0].sCP[0].sCPR[121].nSPOffsetLek=2619;
sT[0].sCP[0].sCPR[122].nDCStart=602;     sT[0].sCP[0].sCPR[122].nDCNum= 4;    sT[0].sCP[0].sCPR[122].nSCStart=606;    sT[0].sCP[0].sCPR[122].nAckStart=0;	  sT[0].sCP[0].sCPR[122].nAckNum=0;   sT[0].sCP[0].sCPR[122].nSPOffsetCS=2636;  sT[0].sCP[0].sCPR[122].nSPOffsetLek=2637;
sT[0].sCP[0].sCPR[123].nDCStart=607;     sT[0].sCP[0].sCPR[123].nDCNum= 4;    sT[0].sCP[0].sCPR[123].nSCStart=611;    sT[0].sCP[0].sCPR[123].nAckStart=0;	  sT[0].sCP[0].sCPR[123].nAckNum=0;   sT[0].sCP[0].sCPR[123].nSPOffsetCS=2654;  sT[0].sCP[0].sCPR[123].nSPOffsetLek=2655;
sT[0].sCP[0].sCPR[124].nDCStart=612;     sT[0].sCP[0].sCPR[124].nDCNum= 4;    sT[0].sCP[0].sCPR[124].nSCStart=616;    sT[0].sCP[0].sCPR[124].nAckStart=0;	  sT[0].sCP[0].sCPR[124].nAckNum=0;   sT[0].sCP[0].sCPR[124].nSPOffsetCS=2693;  sT[0].sCP[0].sCPR[124].nSPOffsetLek=2694;
sT[0].sCP[0].sCPR[125].nDCStart=617;     sT[0].sCP[0].sCPR[125].nDCNum= 4;    sT[0].sCP[0].sCPR[125].nSCStart=621;    sT[0].sCP[0].sCPR[125].nAckStart=0;	  sT[0].sCP[0].sCPR[125].nAckNum=0;   sT[0].sCP[0].sCPR[125].nSPOffsetCS=2732;  sT[0].sCP[0].sCPR[125].nSPOffsetLek=2733;
sT[0].sCP[0].sCPR[126].nDCStart=622;     sT[0].sCP[0].sCPR[126].nDCNum= 4;    sT[0].sCP[0].sCPR[126].nSCStart=626;    sT[0].sCP[0].sCPR[126].nAckStart=0;	  sT[0].sCP[0].sCPR[126].nAckNum=0;   sT[0].sCP[0].sCPR[126].nSPOffsetCS=2771;  sT[0].sCP[0].sCPR[126].nSPOffsetLek=2772;
sT[0].sCP[0].sCPR[127].nDCStart=627;     sT[0].sCP[0].sCPR[127].nDCNum= 4;    sT[0].sCP[0].sCPR[127].nSCStart=631;    sT[0].sCP[0].sCPR[127].nAckStart=0;	  sT[0].sCP[0].sCPR[127].nAckNum=0;   sT[0].sCP[0].sCPR[127].nSPOffsetCS=2810;  sT[0].sCP[0].sCPR[127].nSPOffsetLek=2811;
sT[0].sCP[0].sCPR[128].nDCStart=632;     sT[0].sCP[0].sCPR[128].nDCNum= 1;    sT[0].sCP[0].sCPR[128].nSCStart=633;    sT[0].sCP[0].sCPR[128].nAckStart=0;	  sT[0].sCP[0].sCPR[128].nAckNum=0;   sT[0].sCP[0].sCPR[128].nSPOffsetCS=2826;  sT[0].sCP[0].sCPR[128].nSPOffsetLek=2827;
sT[0].sCP[0].sCPR[129].nDCStart=  0;     sT[0].sCP[0].sCPR[129].nDCNum= 0;    sT[0].sCP[0].sCPR[129].nSCStart=635;    sT[0].sCP[0].sCPR[129].nAckStart=0;	  sT[0].sCP[0].sCPR[129].nAckNum=0;   sT[0].sCP[0].sCPR[129].nSPOffsetCS=2833;  sT[0].sCP[0].sCPR[129].nSPOffsetLek=2834;
sT[0].sCP[0].sCPR[130].nDCStart=636;     sT[0].sCP[0].sCPR[130].nDCNum= 1;    sT[0].sCP[0].sCPR[130].nSCStart=637;    sT[0].sCP[0].sCPR[130].nAckStart=0;	  sT[0].sCP[0].sCPR[130].nAckNum=0;   sT[0].sCP[0].sCPR[130].nSPOffsetCS=2849;  sT[0].sCP[0].sCPR[130].nSPOffsetLek=2850;
sT[0].sCP[0].sCPR[131].nDCStart=639;     sT[0].sCP[0].sCPR[131].nDCNum= 1;    sT[0].sCP[0].sCPR[131].nSCStart=640;    sT[0].sCP[0].sCPR[131].nAckStart=641;	sT[0].sCP[0].sCPR[131].nAckNum=1;   sT[0].sCP[0].sCPR[131].nSPOffsetCS=2865;  sT[0].sCP[0].sCPR[131].nSPOffsetLek=2866;
sT[0].sCP[0].sCPR[132].nDCStart=642;     sT[0].sCP[0].sCPR[132].nDCNum= 4;    sT[0].sCP[0].sCPR[132].nSCStart=646;    sT[0].sCP[0].sCPR[132].nAckStart=0;	  sT[0].sCP[0].sCPR[132].nAckNum=0;   sT[0].sCP[0].sCPR[132].nSPOffsetCS=2902;  sT[0].sCP[0].sCPR[132].nSPOffsetLek=2903;
sT[0].sCP[0].sCPR[133].nDCStart=647;     sT[0].sCP[0].sCPR[133].nDCNum= 4;    sT[0].sCP[0].sCPR[133].nSCStart=651;    sT[0].sCP[0].sCPR[133].nAckStart=0;	  sT[0].sCP[0].sCPR[133].nAckNum=0;   sT[0].sCP[0].sCPR[133].nSPOffsetCS=2941;  sT[0].sCP[0].sCPR[133].nSPOffsetLek=2942;
sT[0].sCP[0].sCPR[134].nDCStart=652;     sT[0].sCP[0].sCPR[134].nDCNum= 4;    sT[0].sCP[0].sCPR[134].nSCStart=656;    sT[0].sCP[0].sCPR[134].nAckStart=0;	  sT[0].sCP[0].sCPR[134].nAckNum=0;   sT[0].sCP[0].sCPR[134].nSPOffsetCS=2980;  sT[0].sCP[0].sCPR[134].nSPOffsetLek=2981;
sT[0].sCP[0].sCPR[135].nDCStart=657;     sT[0].sCP[0].sCPR[135].nDCNum= 4;    sT[0].sCP[0].sCPR[135].nSCStart=661;    sT[0].sCP[0].sCPR[135].nAckStart=0;	  sT[0].sCP[0].sCPR[135].nAckNum=0;   sT[0].sCP[0].sCPR[135].nSPOffsetCS=3019;  sT[0].sCP[0].sCPR[135].nSPOffsetLek=3020;
sT[0].sCP[0].sCPR[136].nDCStart=662;     sT[0].sCP[0].sCPR[136].nDCNum= 4;    sT[0].sCP[0].sCPR[136].nSCStart=666;    sT[0].sCP[0].sCPR[136].nAckStart=0;	  sT[0].sCP[0].sCPR[136].nAckNum=0;   sT[0].sCP[0].sCPR[136].nSPOffsetCS=3058;  sT[0].sCP[0].sCPR[136].nSPOffsetLek=3059;
sT[0].sCP[0].sCPR[137].nDCStart=667;     sT[0].sCP[0].sCPR[137].nDCNum= 4;    sT[0].sCP[0].sCPR[137].nSCStart=671;    sT[0].sCP[0].sCPR[137].nAckStart=0;	  sT[0].sCP[0].sCPR[137].nAckNum=0;   sT[0].sCP[0].sCPR[137].nSPOffsetCS=3095;  sT[0].sCP[0].sCPR[137].nSPOffsetLek=3096;
sT[0].sCP[0].sCPR[138].nDCStart=672;     sT[0].sCP[0].sCPR[138].nDCNum= 4;    sT[0].sCP[0].sCPR[138].nSCStart=676;    sT[0].sCP[0].sCPR[138].nAckStart=0;	  sT[0].sCP[0].sCPR[138].nAckNum=0;   sT[0].sCP[0].sCPR[138].nSPOffsetCS=3113;  sT[0].sCP[0].sCPR[138].nSPOffsetLek=3114;
sT[0].sCP[0].sCPR[139].nDCStart=677;     sT[0].sCP[0].sCPR[139].nDCNum= 8;    sT[0].sCP[0].sCPR[139].nSCStart=685;    sT[0].sCP[0].sCPR[139].nAckStart=0;	  sT[0].sCP[0].sCPR[139].nAckNum=0;   sT[0].sCP[0].sCPR[139].nSPOffsetCS=3141;  sT[0].sCP[0].sCPR[139].nSPOffsetLek=3142;
sT[0].sCP[0].sCPR[140].nDCStart=686;     sT[0].sCP[0].sCPR[140].nDCNum= 12;   sT[0].sCP[0].sCPR[140].nSCStart=698;    sT[0].sCP[0].sCPR[140].nAckStart=0;	  sT[0].sCP[0].sCPR[140].nAckNum=0;   sT[0].sCP[0].sCPR[140].nSPOffsetCS=3183;  sT[0].sCP[0].sCPR[140].nSPOffsetLek=3184;
sT[0].sCP[0].sCPR[141].nDCStart=699;     sT[0].sCP[0].sCPR[141].nDCNum= 4;    sT[0].sCP[0].sCPR[141].nSCStart=703;    sT[0].sCP[0].sCPR[141].nAckStart=0;	  sT[0].sCP[0].sCPR[141].nAckNum=0;   sT[0].sCP[0].sCPR[141].nSPOffsetCS=3201;  sT[0].sCP[0].sCPR[141].nSPOffsetLek=3202;
sT[0].sCP[0].sCPR[142].nDCStart=704;     sT[0].sCP[0].sCPR[142].nDCNum= 4;    sT[0].sCP[0].sCPR[142].nSCStart=708;    sT[0].sCP[0].sCPR[142].nAckStart=0;	  sT[0].sCP[0].sCPR[142].nAckNum=0;   sT[0].sCP[0].sCPR[142].nSPOffsetCS=3219;  sT[0].sCP[0].sCPR[142].nSPOffsetLek=3220;
sT[0].sCP[0].sCPR[143].nDCStart=709;     sT[0].sCP[0].sCPR[143].nDCNum= 1;    sT[0].sCP[0].sCPR[143].nSCStart=710;    sT[0].sCP[0].sCPR[143].nAckStart=711;	sT[0].sCP[0].sCPR[143].nAckNum=1;   sT[0].sCP[0].sCPR[143].nSPOffsetCS=3235;  sT[0].sCP[0].sCPR[143].nSPOffsetLek=3236;
sT[0].sCP[0].sCPR[144].nDCStart=712;     sT[0].sCP[0].sCPR[144].nDCNum=11;    sT[0].sCP[0].sCPR[144].nSCStart=723;    sT[0].sCP[0].sCPR[144].nAckStart= 0;	sT[0].sCP[0].sCPR[144].nAckNum=0;   sT[0].sCP[0].sCPR[144].nSPOffsetCS=3253;  sT[0].sCP[0].sCPR[144].nSPOffsetLek=3254;
sT[0].sCP[0].sCPR[145].nDCStart=724;     sT[0].sCP[0].sCPR[145].nDCNum= 9;    sT[0].sCP[0].sCPR[145].nSCStart=733;    sT[0].sCP[0].sCPR[145].nAckStart= 0;	sT[0].sCP[0].sCPR[145].nAckNum=0;   sT[0].sCP[0].sCPR[145].nSPOffsetCS=3271;  sT[0].sCP[0].sCPR[145].nSPOffsetLek=3272;
sT[0].sCP[0].sCPR[146].nDCStart=734;     sT[0].sCP[0].sCPR[146].nDCNum=17;    sT[0].sCP[0].sCPR[146].nSCStart=751;    sT[0].sCP[0].sCPR[146].nAckStart= 0;	sT[0].sCP[0].sCPR[146].nAckNum=0;   sT[0].sCP[0].sCPR[146].nSPOffsetCS=3291;  sT[0].sCP[0].sCPR[146].nSPOffsetLek=3292;
sT[0].sCP[0].sCPR[147].nDCStart=752;     sT[0].sCP[0].sCPR[147].nDCNum=12;    sT[0].sCP[0].sCPR[147].nSCStart=764;    sT[0].sCP[0].sCPR[147].nAckStart= 0;	sT[0].sCP[0].sCPR[147].nAckNum=0;   sT[0].sCP[0].sCPR[147].nSPOffsetCS=3309;  sT[0].sCP[0].sCPR[147].nSPOffsetLek=3310;
sT[0].sCP[0].sCPR[148].nDCStart=765;     sT[0].sCP[0].sCPR[148].nDCNum= 9;    sT[0].sCP[0].sCPR[148].nSCStart=774;    sT[0].sCP[0].sCPR[148].nAckStart= 0;	sT[0].sCP[0].sCPR[148].nAckNum=0;   sT[0].sCP[0].sCPR[148].nSPOffsetCS=3341;  sT[0].sCP[0].sCPR[148].nSPOffsetLek=3342;
sT[0].sCP[0].sCPR[149].nDCStart=318;     sT[0].sCP[0].sCPR[149].nDCNum= 5;    sT[0].sCP[0].sCPR[149].nSCStart=323;    sT[0].sCP[0].sCPR[149].nAckStart= 0;	sT[0].sCP[0].sCPR[149].nAckNum=0;   sT[0].sCP[0].sCPR[149].nSPOffsetCS=1370;  sT[0].sCP[0].sCPR[149].nSPOffsetLek=1371;
sT[0].sCP[0].sCPR[150].nDCStart=324;     sT[0].sCP[0].sCPR[150].nDCNum= 7;    sT[0].sCP[0].sCPR[150].nSCStart=331;    sT[0].sCP[0].sCPR[150].nAckStart= 0;	sT[0].sCP[0].sCPR[150].nAckNum=0;   sT[0].sCP[0].sCPR[150].nSPOffsetCS=1416;  sT[0].sCP[0].sCPR[150].nSPOffsetLek=1417;
sT[0].sCP[0].sCPR[151].nDCStart=775;     sT[0].sCP[0].sCPR[151].nDCNum= 4;    sT[0].sCP[0].sCPR[151].nSCStart=779;    sT[0].sCP[0].sCPR[151].nAckStart= 0;	sT[0].sCP[0].sCPR[151].nAckNum=0;   sT[0].sCP[0].sCPR[151].nSPOffsetCS=3359;  sT[0].sCP[0].sCPR[151].nSPOffsetLek=3360;
sT[0].sCP[0].sCPR[152].nDCStart=780;     sT[0].sCP[0].sCPR[152].nDCNum= 8;    sT[0].sCP[0].sCPR[152].nSCStart=788;    sT[0].sCP[0].sCPR[152].nAckStart=0;	  sT[0].sCP[0].sCPR[152].nAckNum=0;   sT[0].sCP[0].sCPR[152].nSPOffsetCS=3428;  sT[0].sCP[0].sCPR[152].nSPOffsetLek=3429;
sT[0].sCP[0].sCPR[153].nDCStart=789;     sT[0].sCP[0].sCPR[153].nDCNum= 5;    sT[0].sCP[0].sCPR[153].nSCStart=794;    sT[0].sCP[0].sCPR[153].nAckStart=0;	  sT[0].sCP[0].sCPR[153].nAckNum=0;   sT[0].sCP[0].sCPR[153].nSPOffsetCS=3454;  sT[0].sCP[0].sCPR[153].nSPOffsetLek=3455;
sT[0].sCP[0].sCPR[154].nDCStart=795;     sT[0].sCP[0].sCPR[154].nDCNum= 4;    sT[0].sCP[0].sCPR[154].nSCStart=799;    sT[0].sCP[0].sCPR[154].nAckStart=0;	  sT[0].sCP[0].sCPR[154].nAckNum=0;   sT[0].sCP[0].sCPR[154].nSPOffsetCS=3472;  sT[0].sCP[0].sCPR[154].nSPOffsetLek=3473;
sT[0].sCP[0].sCPR[155].nDCStart=800;     sT[0].sCP[0].sCPR[155].nDCNum= 4;    sT[0].sCP[0].sCPR[155].nSCStart=804;    sT[0].sCP[0].sCPR[155].nAckStart=0;	  sT[0].sCP[0].sCPR[155].nAckNum=0;   sT[0].sCP[0].sCPR[155].nSPOffsetCS=3490;  sT[0].sCP[0].sCPR[155].nSPOffsetLek=3491;
sT[0].sCP[0].sCPR[156].nDCStart=805;     sT[0].sCP[0].sCPR[156].nDCNum= 4;    sT[0].sCP[0].sCPR[156].nSCStart=809;    sT[0].sCP[0].sCPR[156].nAckStart=0;	  sT[0].sCP[0].sCPR[156].nAckNum=0;   sT[0].sCP[0].sCPR[156].nSPOffsetCS=3508;  sT[0].sCP[0].sCPR[156].nSPOffsetLek=3509;
sT[0].sCP[0].sCPR[157].nDCStart=810;     sT[0].sCP[0].sCPR[157].nDCNum= 4;    sT[0].sCP[0].sCPR[157].nSCStart=814;    sT[0].sCP[0].sCPR[157].nAckStart=0;	  sT[0].sCP[0].sCPR[157].nAckNum=0;   sT[0].sCP[0].sCPR[157].nSPOffsetCS=3526;  sT[0].sCP[0].sCPR[157].nSPOffsetLek=3527;
sT[0].sCP[0].sCPR[158].nDCStart=815;     sT[0].sCP[0].sCPR[158].nDCNum= 4;    sT[0].sCP[0].sCPR[158].nSCStart=819;    sT[0].sCP[0].sCPR[158].nAckStart=0;	  sT[0].sCP[0].sCPR[158].nAckNum=0;   sT[0].sCP[0].sCPR[158].nSPOffsetCS=3544;  sT[0].sCP[0].sCPR[158].nSPOffsetLek=3545;
sT[0].sCP[0].sCPR[159].nDCStart=820;     sT[0].sCP[0].sCPR[159].nDCNum= 4;    sT[0].sCP[0].sCPR[159].nSCStart=824;    sT[0].sCP[0].sCPR[159].nAckStart=0;	  sT[0].sCP[0].sCPR[159].nAckNum=0;   sT[0].sCP[0].sCPR[159].nSPOffsetCS=3583;  sT[0].sCP[0].sCPR[159].nSPOffsetLek=3584;
sT[0].sCP[0].sCPR[160].nDCStart=825;     sT[0].sCP[0].sCPR[160].nDCNum= 4;    sT[0].sCP[0].sCPR[160].nSCStart=829;    sT[0].sCP[0].sCPR[160].nAckStart=0;	  sT[0].sCP[0].sCPR[160].nAckNum=0;   sT[0].sCP[0].sCPR[160].nSPOffsetCS=3622;  sT[0].sCP[0].sCPR[160].nSPOffsetLek=3623;
sT[0].sCP[0].sCPR[161].nDCStart=830;     sT[0].sCP[0].sCPR[161].nDCNum= 4;    sT[0].sCP[0].sCPR[161].nSCStart=834;    sT[0].sCP[0].sCPR[161].nAckStart=0;	  sT[0].sCP[0].sCPR[161].nAckNum=0;   sT[0].sCP[0].sCPR[161].nSPOffsetCS=3661;  sT[0].sCP[0].sCPR[161].nSPOffsetLek=3662;
sT[0].sCP[0].sCPR[162].nDCStart = 0;     sT[0].sCP[0].sCPR[162].nDCNum= 0;    sT[0].sCP[0].sCPR[162].nSCStart=835;    sT[0].sCP[0].sCPR[162].nAckStart=0;   sT[0].sCP[0].sCPR[162].nAckNum=0;   sT[0].sCP[0].sCPR[162].nSPOffsetCS=3668;  sT[0].sCP[0].sCPR[162].nSPOffsetLek=3669;
sT[0].sCP[0].sCPR[163].nDCStart=836;     sT[0].sCP[0].sCPR[163].nDCNum= 4;    sT[0].sCP[0].sCPR[163].nSCStart=840;    sT[0].sCP[0].sCPR[163].nAckStart=0;	  sT[0].sCP[0].sCPR[163].nAckNum=0;   sT[0].sCP[0].sCPR[163].nSPOffsetCS=3686;  sT[0].sCP[0].sCPR[163].nSPOffsetLek=3687;
sT[0].sCP[0].sCPR[164].nDCStart=841;     sT[0].sCP[0].sCPR[164].nDCNum= 4;    sT[0].sCP[0].sCPR[164].nSCStart=845;    sT[0].sCP[0].sCPR[164].nAckStart=0;	  sT[0].sCP[0].sCPR[164].nAckNum=0;   sT[0].sCP[0].sCPR[164].nSPOffsetCS=3723;  sT[0].sCP[0].sCPR[164].nSPOffsetLek=3724;
sT[0].sCP[0].sCPR[165].nDCStart=846;     sT[0].sCP[0].sCPR[165].nDCNum= 1;    sT[0].sCP[0].sCPR[165].nSCStart=847;    sT[0].sCP[0].sCPR[165].nAckStart=848;	sT[0].sCP[0].sCPR[165].nAckNum=1;   sT[0].sCP[0].sCPR[165].nSPOffsetCS=3739;  sT[0].sCP[0].sCPR[165].nSPOffsetLek=3740;
sT[0].sCP[0].sCPR[166].nDCStart=849;     sT[0].sCP[0].sCPR[166].nDCNum= 5;    sT[0].sCP[0].sCPR[166].nSCStart=854;    sT[0].sCP[0].sCPR[166].nAckStart=0;	  sT[0].sCP[0].sCPR[166].nAckNum=0;   sT[0].sCP[0].sCPR[166].nSPOffsetCS=3765;  sT[0].sCP[0].sCPR[166].nSPOffsetLek=3766;
sT[0].sCP[0].sCPR[167].nDCStart=855;     sT[0].sCP[0].sCPR[167].nDCNum= 4;    sT[0].sCP[0].sCPR[167].nSCStart=859;    sT[0].sCP[0].sCPR[167].nAckStart=0;	  sT[0].sCP[0].sCPR[167].nAckNum=0;   sT[0].sCP[0].sCPR[167].nSPOffsetCS=3783;  sT[0].sCP[0].sCPR[167].nSPOffsetLek=3784;
sT[0].sCP[0].sCPR[168].nDCStart=860;     sT[0].sCP[0].sCPR[168].nDCNum= 4;    sT[0].sCP[0].sCPR[168].nSCStart=864;    sT[0].sCP[0].sCPR[168].nAckStart=0;	  sT[0].sCP[0].sCPR[168].nAckNum=0;   sT[0].sCP[0].sCPR[168].nSPOffsetCS=3801;  sT[0].sCP[0].sCPR[168].nSPOffsetLek=3802;




/* TMOK jelsz�mok inicializ�l�sa ciklusban */	
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

	sT[0].sMOT[0].nIEC_SP				= 10;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[0].nIEC_DP				= 10;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[0].nIEC_NM				= 10;		/* M�r�sek IEC kezd�c�me */

/* 54-78  -----------------------------------------------------------*/	
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 121;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[1].nIEC_DP				= 11;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[1].nIEC_NM				= 13;		/* M�r�sek IEC kezd�c�me */

/* 71-70  -----------------------------------------------------------*/	
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 57;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[2].nIEC_DP				= 13;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[2].nIEC_NM				= 19;		/* M�r�sek IEC kezd�c�me */

/* 72-89  -----------------------------------------------------------*/	
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 73;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[3].nIEC_DP				= 14;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[3].nIEC_NM				= 197;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[3].nNMNum      			= 4;

/* 72-97  -----------------------------------------------------------*/	
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 89;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[4].nIEC_DP				= 15;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[4].nIEC_NM				= 25;		/* M�r�sek IEC kezd�c�me */


/* 74-30  -----------------------------------------------------------*/	
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 105;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[5].nIEC_DP				= 16;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[5].nIEC_NM				= 28;		/* M�r�sek IEC kezd�c�me */

/* 72-56  -----------------------------------------------------------*/	
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 41;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[6].nIEC_DP				= 12;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[6].nIEC_NM				= 16;		/* M�r�sek IEC kezd�c�me */

/* 73-06  -----------------------------------------------------------*/	
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 137;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[7].nIEC_DP				= 17;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[7].nIEC_NM				= 31;		/* M�r�sek IEC kezd�c�me */

/* 72-57  -----------------------------------------------------------*/	
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 153;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[8].nIEC_DP				= 18;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[8].nIEC_NM				= 34;		/* M�r�sek IEC kezd�c�me */

/* 74-36  -----------------------------------------------------------*/	
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 169;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[9].nIEC_DP				= 19;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[9].nIEC_NM				= 37;		/* M�r�sek IEC kezd�c�me */



/* Cset�ny, kapcsol��llom�s  ----------------------------------------------------------------*/
sT[0].sTI[10].nType = TYP_MOT;

	sT[0].sMOT[10].nIEC_SP				= 185;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[10].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[10].nIEC_DP				= 20;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[10].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[10].nIEC_NM				= 40;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[10].nNMNum				= 3;		/* Anal�g m�r�sek sz�ma*/

/* 70-09  -----------------------------------------------------------*/	
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 201;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[11].nIEC_DP				= 28;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[11].nIEC_NM				= 43;		/* M�r�sek IEC kezd�c�me */

/* 70-24  -----------------------------------------------------------*/	
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 217;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[12].nIEC_DP				= 29;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[12].nIEC_NM				= 46;		/* M�r�sek IEC kezd�c�me */

/* 71-04  -----------------------------------------------------------*/	
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 233;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[13].nIEC_DP				= 30;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[13].nIEC_NM				= 49;		/* M�r�sek IEC kezd�c�me */

/* 71-28  -----------------------------------------------------------*/	
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 249;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[14].nIEC_DP				= 31;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[14].nIEC_NM				= 52;		/* M�r�sek IEC kezd�c�me */

/* 72-99  -----------------------------------------------------------*/	
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 265;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[15].nIEC_DP				= 32;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[15].nIEC_NM				= 55;		/* M�r�sek IEC kezd�c�me */

/* 71-58  -----------------------------------------------------------*/	
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 281;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[16].nIEC_DP				= 33;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[16].nIEC_NM				= 58;		/* M�r�sek IEC kezd�c�me */

/* Csepreg DAC  -----------------------------------------------------------*/	
sT[0].sTI[17].nType = TYP_MOT;

	sT[0].sMOT[17].nIEC_SP				= 297;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[17].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[17].nIEC_DP_NUM			= 0;
	sT[0].sMOT[17].nNMNum      			= 0;

/* Kom�rom, Csillag ltp.  ----------------------------------------------------------------*/
sT[0].sTI[18].nType = TYP_MOT;

	sT[0].sMOT[18].nIEC_SP				= 304;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[18].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[18].nIEC_DP				= 34;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[18].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[18].nIEC_NM				= 61;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[18].nNMNum				= 3;		/* Anal�g m�r�sek sz�ma*/

/* S�r�d, naper�m� -----------------------------------------------------------*/
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

/* Dunakiliti I., naper�m� -----------------------------------------------------------*/
sT[0].sTI[20].nType = TYP_TAL;

		sT[0].sTAL[20].nIEC_SP       		= 359;
		sT[0].sTAL[20].nIEC_OsszevontHiba	= 391;
		sT[0].sTAL[20].nIEC_MT_KommHiba		= 392;
		sT[0].sTAL[20].nIEC_DP       		= 50;
		sT[0].sTAL[20].nIEC_DP_FSZ1  		= 54;
		sT[0].sTAL[20].nIEC_NM				= 76;
		sT[0].sTAL[20].nNMNum		  		= 11;
		sT[0].sTAL[20].nKommStatusNum		= 2;

/* Dunakiliti II., naper�m� -----------------------------------------------------------*/
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

	sT[0].sMOT[22].nIEC_SP				= 433;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[22].nIEC_DP				= 66;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[22].nIEC_NM				= 98;		/* M�r�sek IEC kezd�c�me */

/* 42-43  -----------------------------------------------------------*/	
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 449;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[23].nIEC_DP				= 67;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[23].nIEC_NM				= 101;		/* M�r�sek IEC kezd�c�me */

/* 42-44  -----------------------------------------------------------*/	
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 465;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[24].nIEC_DP				= 68;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[24].nIEC_NM				= 104;		/* M�r�sek IEC kezd�c�me */

/* 60-40  -----------------------------------------------------------*/	
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 481;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[25].nIEC_DP				= 69;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[25].nIEC_NM				= 107;		/* M�r�sek IEC kezd�c�me */

/* 64-84  -----------------------------------------------------------*/	
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 497;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_DP				= 70;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_NM				= 181;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[26].nNMNum				  = 4;		/* Anal�g m�r�sek sz�ma*/

/* 60-41  -----------------------------------------------------------*/	
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 513;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[27].nIEC_DP				= 71;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[27].nIEC_NM				= 113;		/* M�r�sek IEC kezd�c�me */

/* 60-43  -----------------------------------------------------------*/	
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 529;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[28].nIEC_DP				= 72;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[28].nIEC_NM				= 116;		/* M�r�sek IEC kezd�c�me */

/* 60-45  -----------------------------------------------------------*/	
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 545;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[29].nIEC_DP				= 73;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[29].nIEC_NM				= 119;		/* M�r�sek IEC kezd�c�me */


/* Kom�rom, Alumet�l -----------------------------------------------------------*/
sT[0].sTI[30].nType = TYP_TAL;

		sT[0].sTAL[30].nIEC_SP       		= 561;
		sT[0].sTAL[30].nIEC_OsszevontHiba	= 593;
		sT[0].sTAL[30].nIEC_MT_KommHiba		= 594;
		sT[0].sTAL[30].nIEC_DP       		= 74;
		sT[0].sTAL[30].nIEC_DP_FSZ1  		= 78;
		sT[0].sTAL[30].nIEC_NM				= 122;
		sT[0].sTAL[30].nNMNum		  		= 4;
		sT[0].sTAL[30].nKommStatusNum		= 4;

/* Tata, boier�m� -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_TAL;

		sT[0].sTAL[31].nIEC_SP       		= 602;
		sT[0].sTAL[31].nIEC_OsszevontHiba	= 634;
		sT[0].sTAL[31].nIEC_MT_KommHiba		= 635;
		sT[0].sTAL[31].nIEC_DP       		= 82;
		sT[0].sTAL[31].nIEC_DP_FSZ1  		= 86;
		sT[0].sTAL[31].nIEC_NM				= 126;
		sT[0].sTAL[31].nNMNum		  		= 11;
		sT[0].sTAL[31].nKommStatusNum		= 2;

		
/* Szombathely, v�rosh�za -----------------------------------------------------------*/
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

/* Feh�rv�rcsurg�, naper�m�  -----------------------------------------------------------*/
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

	sT[0].sMOT[35].nIEC_SP				= 750;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[35].nIEC_DP				= 115;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[35].nIEC_NM				= 163;		/* M�r�sek IEC kezd�c�me */

/* 34-02  -----------------------------------------------------------*/	
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 766;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[36].nIEC_DP				= 116;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[36].nIEC_NM				= 448;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[36].nNMNum      			= 4;


/* 80-87  -----------------------------------------------------------*/	
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 782;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[37].nIEC_DP				= 117;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[37].nIEC_NM				= 169;		/* M�r�sek IEC kezd�c�me */

/* 87-29  -----------------------------------------------------------*/	
sT[0].sTI[38].nType = TYP_TMOK;

	sT[0].sMOT[38].nIEC_SP				= 798;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[38].nIEC_DP				= 118;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[38].nIEC_NM				= 172;		/* M�r�sek IEC kezd�c�me */


/* 87-33  -----------------------------------------------------------*/	
sT[0].sTI[39].nType = TYP_TMOK;

	sT[0].sMOT[39].nIEC_SP				= 814;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[39].nIEC_DP				= 119;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[39].nIEC_NM				= 175;		/* M�r�sek IEC kezd�c�me */

/* 31-64  -----------------------------------------------------------*/	
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 830;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[40].nIEC_DP				= 120;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[40].nIEC_NM				= 178;		/* M�r�sek IEC kezd�c�me */

/* 31-58  -----------------------------------------------------------*/	
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 846;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[41].nIEC_DP				= 121;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[41].nIEC_NM				= 185;		/* M�r�sek IEC kezd�c�me */

/* 31-63  -----------------------------------------------------------*/	
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 862;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[42].nIEC_DP				= 122;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[42].nIEC_NM				= 188;		/* M�r�sek IEC kezd�c�me */
	
/* 41-87  -----------------------------------------------------------*/	
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 878;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[43].nIEC_DP				= 123;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[43].nIEC_NM				= 191;		/* M�r�sek IEC kezd�c�me */	
	
/* 41-62  -----------------------------------------------------------*/	
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 894;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[44].nIEC_DP				= 124;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[44].nIEC_NM				= 194;		/* M�r�sek IEC kezd�c�me */	
	
/* 91-18  -----------------------------------------------------------*/	
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 910;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[45].nIEC_DP				= 125;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[45].nIEC_NM				= 201;		/* M�r�sek IEC kezd�c�me */	
	
/* 12-75  -----------------------------------------------------------*/	
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 926;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[46].nIEC_DP				= 126;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[46].nIEC_NM				= 204;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[46].nNMNum      			= 4;


/* 14-03  -----------------------------------------------------------*/	
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 942;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[47].nIEC_DP				= 127;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[47].nIEC_NM				= 208;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[47].nNMNum      			= 4;

/* 48642  -----------------------------------------------------------*/	
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 958;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[48].nIEC_DP				= 128;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[48].nIEC_NM				= 212;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[48].nNMNum      			= 4;

/* Front end A -----------------------------------------------------------*/
sT[0].sTI[49].nType = TYP_FRONTEND;

/* Front end C -----------------------------------------------------------*/
sT[0].sTI[50].nType = TYP_FRONTEND;

/* Front end G -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_FRONTEND;

/* Redundancia A -----------------------------------------------------------*/
sT[0].sTI[52].nType = TYP_FRONTEND;


/* Kom�rom DAC  -----------------------------------------------------------*/	
sT[0].sTI[53].nType = TYP_MOT;

	sT[0].sMOT[53].nIEC_SP				= 974;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[53].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[53].nIEC_DP_NUM			= 0;
	sT[0].sMOT[53].nNMNum      			= 0;


/* Mosonmagyar�v�r, �voda  ----------------------------------------------------------------*/
sT[0].sTI[54].nType = TYP_MOT;

	sT[0].sMOT[54].nIEC_SP				= 981;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[54].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[54].nIEC_DP				= 180;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[54].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[54].nIEC_NM				= 216;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[54].nNMNum				= 12;		/* Anal�g m�r�sek sz�ma*/

/* Mosonmagyar�v�r, V�s�rt�r Gimn�zium  ----------------------------------------------------------------*/
sT[0].sTI[55].nType = TYP_MOT;

	sT[0].sMOT[55].nIEC_SP				= 1003;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[55].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[55].nIEC_DP				= 188;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[55].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[55].nIEC_NM				= 228;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[55].nNMNum				= 12;		/* Anal�g m�r�sek sz�ma*/

/* Szekesfehervar, S�st�i stadion 8 csatornas !!! ----------------------------------------------*/
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
  
/* Sz�kesfeh�rv�r, �telb�r  ----------------------------------------------------------------*/
sT[0].sTI[57].nType = TYP_MOT;

	sT[0].sMOT[57].nIEC_SP				= 1094;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[57].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[57].nIEC_DP				= 214;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[57].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[57].nIEC_NM				= 248;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[57].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Sz�kesfeh�rv�r, Kaz�nh�z  ----------------------------------------------------------------*/
sT[0].sTI[58].nType = TYP_MOT;

	sT[0].sMOT[58].nIEC_SP				= 1112;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[58].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[58].nIEC_DP				= 222;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[58].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[58].nIEC_NM				= 254;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[58].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Szombathely, Magyar u.  ----------------------------------------------------------------*/
sT[0].sTI[59].nType = TYP_MOT;

	sT[0].sMOT[59].nIEC_SP				= 1130;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[59].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[59].nIEC_DP				= 230;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[59].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[59].nIEC_NM				= 260;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[59].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* K�szegdoroszl�, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[60].nType = TYP_MOT;

	sT[0].sMOT[60].nIEC_SP				= 1152;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[60].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[60].nIEC_DP				= 238;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[60].nIEC_DP_NUM			= 16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[60].nIEC_NM				= 269;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[60].nNMNum				= 13;		/* Anal�g m�r�sek sz�ma*/

/* Kincsesb�nya, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[61].nType = TYP_MOT;

	sT[0].sMOT[61].nIEC_SP				= 1180;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[61].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[61].nIEC_DP				= 254;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[61].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[61].nIEC_NM				= 282;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[61].nNMNum				= 11;		/* Anal�g m�r�sek sz�ma*/

/* S�rv�r, Spar  ----------------------------------------------------------------*/
sT[0].sTI[62].nType = TYP_MOT;

	sT[0].sMOT[62].nIEC_SP				= 1198;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[62].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[62].nIEC_DP				= 262;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[62].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[62].nIEC_NM				= 293;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[62].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* S�rv�r, SZ�chenyi III.  ----------------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_MOT;

	sT[0].sMOT[63].nIEC_SP				= 1216;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[63].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[63].nIEC_DP				= 270;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[63].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[63].nIEC_NM				= 299;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[63].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Tata, Bart�k ----------------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_MOT;

	sT[0].sMOT[64].nIEC_SP				= 1234;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[64].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[64].nIEC_DP				= 278;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[64].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[64].nIEC_NM				= 305;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[64].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kisb�r, Kom�romi ----------------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_MOT;

	sT[0].sMOT[65].nIEC_SP				= 1256;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[65].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[65].nIEC_DP				= 286;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[65].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[65].nIEC_NM				= 314;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[65].nNMNum				= 12;		/* Anal�g m�r�sek sz�ma*/

/* Velence, Nautis ----------------------------------------------------------------*/
sT[0].sTI[66].nType = TYP_MOT;

	sT[0].sMOT[66].nIEC_SP				= 1278;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[66].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[66].nIEC_DP				= 294;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[66].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[66].nIEC_NM				= 326;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[66].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Velence, ABC Wickenburg ----------------------------------------------------------------*/
sT[0].sTI[67].nType = TYP_MOT;

	sT[0].sMOT[67].nIEC_SP				= 1296;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[67].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[67].nIEC_DP				= 302;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[67].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[67].nIEC_NM				= 332;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[67].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* S�rv�r, Alkotm�ny I. ----------------------------------------------------------------*/
sT[0].sTI[68].nType = TYP_MOT;

	sT[0].sMOT[68].nIEC_SP				= 1314;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[68].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[68].nIEC_DP				= 310;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[68].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[68].nIEC_NM				= 338;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[68].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* K�szeg, Spar ----------------------------------------------------------------*/
sT[0].sTI[69].nType = TYP_MOT;

	sT[0].sMOT[69].nIEC_SP				= 1332;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[69].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[69].nIEC_DP				= 318;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[69].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[69].nIEC_NM				= 344;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[69].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* 34-37  -----------------------------------------------------------*/	
sT[0].sTI[70].nType = TYP_TMOK;

	sT[0].sMOT[70].nIEC_SP				= 1418;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[70].nIEC_DP				= 350;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[70].nIEC_NM				= 365;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[70].nNMNum      			= 4;

/* S�rv�r, Szatm�r I. ----------------------------------------------------------------*/
sT[0].sTI[71].nType = TYP_MOT;

	sT[0].sMOT[71].nIEC_SP				= 1434;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[71].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[71].nIEC_DP				= 351;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[71].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[71].nIEC_NM				= 369;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[71].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kincsesb�nya, 03-100 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[72].nType = TYP_MOT;

	sT[0].sMOT[72].nIEC_SP				= 1456;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[72].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[72].nIEC_DP				= 359;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[72].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[72].nIEC_NM				= 378;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[72].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/


/* Mosonmagyar�v�r 739-8 PV er�m� ----------------------------------------------*/
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

	sT[0].sMOT[74].nIEC_SP				= 1511;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[74].nIEC_DP				= 377;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[74].nIEC_NM				= 396;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[74].nNMNum      			= 4;

/* 32608  -----------------------------------------------------------*/	
sT[0].sTI[75].nType = TYP_TMOK;

	sT[0].sMOT[75].nIEC_SP				= 1527;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[75].nIEC_DP				= 378;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[75].nIEC_NM				= 400;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[75].nNMNum      			= 4;

/* 32609  -----------------------------------------------------------*/	
sT[0].sTI[76].nType = TYP_TMOK;

	sT[0].sMOT[76].nIEC_SP				= 1543;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[76].nIEC_DP				= 379;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[76].nIEC_NM				= 404;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[76].nNMNum      			= 4;

/* 30-94  -----------------------------------------------------------*/	
sT[0].sTI[77].nType = TYP_TMOK;

	sT[0].sMOT[77].nIEC_SP				= 1559;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[77].nIEC_DP				= 380;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[77].nIEC_NM				= 408;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[77].nNMNum      			= 4;

/* Celld�m�lk, 2912/17 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[78].nType = TYP_MOT;

	sT[0].sMOT[78].nIEC_SP				= 1575;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[78].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[78].nIEC_DP				= 381;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[78].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[78].nIEC_NM				= 412;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[78].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Tata, Krist�ly ----------------------------------------------------------------*/
sT[0].sTI[79].nType = TYP_MOT;

	sT[0].sMOT[79].nIEC_SP				= 1593;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[79].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[79].nIEC_DP				= 389;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[79].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[79].nIEC_NM				= 421;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[79].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Ken�z 062-9 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[80].nType = TYP_MOT;

	sT[0].sMOT[80].nIEC_SP				= 1615;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[80].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[80].nIEC_DP				= 397;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[80].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[80].nIEC_NM				= 430;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[80].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny 4700-9 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[81].nType = TYP_MOT;

	sT[0].sMOT[81].nIEC_SP				= 1633;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[81].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[81].nIEC_DP				= 405;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[81].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[81].nIEC_NM				= 439;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[81].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Szombathely Claudius ----------------------------------------------------------------*/
sT[0].sTI[82].nType = TYP_MOT;

	sT[0].sMOT[82].nIEC_SP				= 1651;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[82].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[82].nIEC_DP				= 413;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[82].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[82].nIEC_NM				= 452;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[82].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* J�nosh�za, 033_3 PV er�m� ----------------------------------------------------------------*/
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
    

/* Tatab�nya Unio ltp. ----------------------------------------------------------------*/
sT[0].sTI[84].nType = TYP_MOT;

	sT[0].sMOT[84].nIEC_SP				= 1708;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[84].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[84].nIEC_DP				= 429;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[84].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[84].nIEC_NM				= 467;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[84].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/


/* Gy�rv�r, 03/15 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[85].nType = TYP_MOT;

	sT[0].sMOT[85].nIEC_SP				= 1726;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[85].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[85].nIEC_DP				= 437;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[85].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[85].nIEC_NM				= 473;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[85].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Gy�rv�r, 05/1 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[86].nType = TYP_MOT;

	sT[0].sMOT[86].nIEC_SP				= 1750;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[86].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[86].nIEC_DP				= 445;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[86].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[86].nIEC_NM				= 482;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[86].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Bodajk 0207/10 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[87].nType = TYP_MOT;

	sT[0].sMOT[87].nIEC_SP				= 1774;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[87].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[87].nIEC_DP				= 453;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[87].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[87].nIEC_NM				= 491;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[87].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 36601  -----------------------------------------------------------*/	
sT[0].sTI[88].nType = TYP_TMOK;

	sT[0].sMOT[88].nIEC_SP				= 1798;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[88].nIEC_DP				= 461;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[88].nIEC_NM				= 500;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[88].nNMNum      			= 4;

/* Annav�lgy 0276/15 ----------------------------------------------------------------*/
sT[0].sTI[89].nType = TYP_MOT;

	sT[0].sMOT[89].nIEC_SP				= 1814;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[89].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[89].nIEC_DP				= 462;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[89].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[89].nIEC_NM				= 504;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[89].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Sz�kesfeh�rv�r, Albacomp ----------------------------------------------------------------*/
sT[0].sTI[90].nType = TYP_MOT;

	sT[0].sMOT[90].nIEC_SP				= 1832;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[90].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[90].nIEC_DP				= 470;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[90].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[90].nIEC_NM				= 513;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[90].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Tatab�nya, k�zm�vel�d�s h�za ----------------------------------------------------------------*/
sT[0].sTI[91].nType = TYP_MOT;

	sT[0].sMOT[91].nIEC_SP				= 1850;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[91].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[91].nIEC_DP				= 478;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[91].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[91].nIEC_NM				= 519;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[91].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Zalaegerszeg Olai bisztr� ----------------------------------------------------------------*/
sT[0].sTI[92].nType = TYP_MOT;

	sT[0].sMOT[92].nIEC_SP				= 1868;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[92].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[92].nIEC_DP				= 486;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[92].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[92].nIEC_NM				= 525;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[92].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* T�c 0346/1-1 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[93].nType = TYP_MOT;

	sT[0].sMOT[93].nIEC_SP				= 1886;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[93].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[93].nIEC_DP				= 500;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[93].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[93].nIEC_NM				= 531;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[93].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* T�c 0346/1-2 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[94].nType = TYP_MOT;

	sT[0].sMOT[94].nIEC_SP				= 1904;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[94].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[94].nIEC_DP				= 508;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[94].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[94].nIEC_NM				= 540;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[94].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Alm�sf�ztit� PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[95].nType = TYP_MOT;

	sT[0].sMOT[95].nIEC_SP				= 1922;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[95].nIEC_SP_NUM			= 64;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[95].nIEC_DP				= 516;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[95].nIEC_DP_NUM			=40;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[95].nIEC_NM				= 549;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[95].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Tata, Moowa PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[96].nType = TYP_MOT;

	sT[0].sMOT[96].nIEC_SP				= 1988;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[96].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[96].nIEC_DP				= 556;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[96].nIEC_DP_NUM			=4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[96].nIEC_NM				= 558;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[96].nNMNum				= 5;		/* Anal�g m�r�sek sz�ma*/

  /* Kom�rom, CTP TALUS 8 csatornas !!! ----------------------------------------------*/
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
    
/* Zalaegerszeg, 0779/ PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[98].nType = TYP_MOT;

	sT[0].sMOT[98].nIEC_SP				= 2075;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[98].nIEC_SP_NUM			= 22;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[98].nIEC_DP				= 576;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[98].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[98].nIEC_NM				= 571;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[98].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kom�rom 1782/233 PV er�m� ----------------------------------------------------------------*/
sT[0].sTI[99].nType = TYP_MOT;

	sT[0].sMOT[99].nIEC_SP				= 2099;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[99].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[99].nIEC_DP				= 584;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[99].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[99].nIEC_NM				= 580;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[99].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Tata, LIDL PV  ----------------------------------------------------------------*/
sT[0].sTI[100].nType = TYP_MOT;

	sT[0].sMOT[100].nIEC_SP				= 2117;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[100].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[100].nIEC_DP				= 592;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[100].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[100].nIEC_NM				= 589;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[100].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* Tata, K�j�l ----------------------------------------------------------------*/
sT[0].sTI[101].nType = TYP_MOT;

	sT[0].sMOT[101].nIEC_SP				= 2135;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[101].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[101].nIEC_DP				= 600;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[101].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[101].nIEC_NM				= 595;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[101].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/


/* Gy�ngy�sfalu, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[102].nType = TYP_MOT;

	sT[0].sMOT[102].nIEC_SP				= 2157;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[102].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[102].nIEC_DP				= 608;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[102].nIEC_DP_NUM			= 16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[102].nIEC_NM				= 604;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[102].nNMNum				= 18;		/* Anal�g m�r�sek sz�ma*/

/* Nova 2037/2, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[103].nType = TYP_MOT;

	sT[0].sMOT[103].nIEC_SP				= 2185;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[103].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[103].nIEC_DP				= 624;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[103].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[103].nIEC_NM				= 622;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[103].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

  /* Lenti 0236 PV er�m�,  TALUS 8 csatornas !!! ----------------------------------------------*/
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
    
/* Videoton 3523/34, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[105].nType = TYP_MOT;

	sT[0].sMOT[105].nIEC_SP				= 2272;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[105].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[105].nIEC_DP				= 649;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[105].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[105].nIEC_NM				= 649;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[105].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 31-81  -----------------------------------------------------------*/	
sT[0].sTI[106].nType = TYP_TMOK;

	sT[0].sMOT[106].nIEC_SP				= 2290;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[106].nIEC_DP				= 657;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[106].nIEC_NM				= 658;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[106].nNMNum      	= 4;

/* 34-82  -----------------------------------------------------------*/	
sT[0].sTI[107].nType = TYP_TMOK;

	sT[0].sMOT[107].nIEC_SP				= 2306;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[107].nIEC_DP				= 658;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[107].nIEC_NM				= 662;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[107].nNMNum      	= 4;

/* Cs�kak� 070/2 MVM OVIT PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[108].nType = TYP_MOT;

	sT[0].sMOT[108].nIEC_SP				= 2322;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[108].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[108].nIEC_DP				= 659;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[108].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[108].nIEC_NM				= 666;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[108].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Celld�m�lk  1873/28 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[109].nType = TYP_MOT;

	sT[0].sMOT[109].nIEC_SP				= 2340;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[109].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[109].nIEC_DP				= 667;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[109].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[109].nIEC_NM				= 675;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[109].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* K�szeg 0117 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[110].nType = TYP_MOT;

	sT[0].sMOT[110].nIEC_SP				= 2358;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[110].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[110].nIEC_DP				= 675;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[110].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[110].nIEC_NM				= 684;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[110].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kisb�r 0129 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[111].nType = TYP_MOT;

	sT[0].sMOT[111].nIEC_SP				= 2376;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[111].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[111].nIEC_DP				= 683;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[111].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[111].nIEC_NM				= 693;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[111].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Kisb�r Iskola utca  ----------------------------------------------------------------*/
sT[0].sTI[112].nType = TYP_MOT;

	sT[0].sMOT[112].nIEC_SP				= 2394;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[112].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[112].nIEC_DP				= 691;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[112].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[112].nIEC_NM				= 702;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[112].nNMNum				= 6;		/* Anal�g m�r�sek sz�ma*/

/* �cs 0421/17 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[113].nType = TYP_MOT;

	sT[0].sMOT[113].nIEC_SP				= 2412;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[113].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[113].nIEC_DP				= 699;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[113].nIEC_DP_NUM			=16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[113].nIEC_NM				= 708;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[113].nNMNum				= 18;		/* Anal�g m�r�sek sz�ma*/

  /* Kom�rom DAC  -----------------------------------------------------------*/	
sT[0].sTI[114].nType = TYP_MOT;

	sT[0].sMOT[114].nIEC_SP				= 2442;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[114].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[114].nIEC_DP_NUM			= 0;
	sT[0].sMOT[114].nNMNum      		= 0;

/* 30-19  -----------------------------------------------------------*/	
sT[0].sTI[115].nType = TYP_TMOK;

	sT[0].sMOT[115].nIEC_SP				= 2449;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[115].nIEC_DP				= 715;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[115].nIEC_NM				= 726;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[115].nNMNum      	= 4;

/* Celld�m�lk 0355/18 PV er�m� ----------------------------------------------------------------*/
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

/* K�rnye 0337/9  PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[117].nType = TYP_MOT;

	sT[0].sMOT[117].nIEC_SP				= 2504;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[117].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[117].nIEC_DP				= 724;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[117].nIEC_DP_NUM			=16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[117].nIEC_NM				= 739;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[117].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 82-01  -----------------------------------------------------------*/	
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2526;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[118].nIEC_DP				= 740;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[118].nIEC_NM				= 748;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[118].nNMNum      	= 4;


/*  Zalaegerszeg vash�z ----------------------------------------------------------------*/
sT[0].sTI[119].nType = TYP_MOT;

	sT[0].sMOT[119].nIEC_SP				= 2542;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[119].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[119].nIEC_DP				= 741;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[119].nIEC_DP_NUM			=8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[119].nIEC_NM				= 752;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[119].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* K�ml�d 099/14,16,17  ----------------------------------------------------------------*/
sT[0].sTI[120].nType = TYP_MOT;

	sT[0].sMOT[120].nIEC_SP				= 2564;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[120].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[120].nIEC_DP				= 750;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[120].nIEC_DP_NUM			=16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[120].nIEC_NM				= 761;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[120].nNMNum				= 18;		/* Anal�g m�r�sek sz�ma*/

/* V�n�ck 064/25   ----------------------------------------------------------------*/
sT[0].sTI[121].nType = TYP_MOT;

	sT[0].sMOT[121].nIEC_SP				= 2592;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[121].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[121].nIEC_DP				= 766;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[121].nIEC_DP_NUM			=16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[121].nIEC_NM				= 779;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[121].nNMNum				= 14;		/* Anal�g m�r�sek sz�ma*/

/* Pakod 2144/1_2   ----------------------------------------------------------------*/
sT[0].sTI[122].nType = TYP_MOT;

	sT[0].sMOT[122].nIEC_SP				= 2620;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[122].nIEC_SP_NUM			= 18;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[122].nIEC_DP				= 782;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[122].nIEC_DP_NUM			=8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[122].nIEC_NM				= 793;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[122].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Pakod 2144/2   ----------------------------------------------------------------*/
sT[0].sTI[123].nType = TYP_MOT;

	sT[0].sMOT[123].nIEC_SP				= 2638;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[123].nIEC_SP_NUM			= 18;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[123].nIEC_DP				= 790;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[123].nIEC_DP_NUM			=8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[123].nIEC_NM				= 802;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[123].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Polg�rdi 0155/12 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[124].nType = TYP_TAL;
  
	sT[0].sTAL[124].nIEC_SP       		= 2656;
	sT[0].sTAL[124].nIEC_OsszevontHiba	= 2688;
	sT[0].sTAL[124].nIEC_MT_KommHiba	= 2689;
	sT[0].sTAL[124].nKommStatusNum		= 2;	
	sT[0].sTAL[124].nIEC_DP       		= 798;
	sT[0].sTAL[124].nIEC_DP_FSZ1  		= 802;
	sT[0].sTAL[124].nIEC_NM				= 811;
	sT[0].sTAL[124].nNMNum		  		= 9;
  
  sT[0].sTAL[124].nSP_EXTRA_OFFSET		= 2691;
	sT[0].sTAL[124].nSP_EXTRA_NUM		= 2;

/* Polg�rdi 0155/11 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[125].nType = TYP_TAL;
  
	sT[0].sTAL[125].nIEC_SP       		= 2695;
	sT[0].sTAL[125].nIEC_OsszevontHiba	= 2727;
	sT[0].sTAL[125].nIEC_MT_KommHiba	= 2728;
	sT[0].sTAL[125].nKommStatusNum		= 2;	
	sT[0].sTAL[125].nIEC_DP       		= 806;
	sT[0].sTAL[125].nIEC_DP_FSZ1  		= 810;
	sT[0].sTAL[125].nIEC_NM				= 820;
	sT[0].sTAL[125].nNMNum		  		= 9;
  
  sT[0].sTAL[125].nSP_EXTRA_OFFSET		= 2730;
	sT[0].sTAL[125].nSP_EXTRA_NUM		= 2;

  /* Szombathely 0773/1_2_1 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[126].nType = TYP_TAL;
  
	sT[0].sTAL[126].nIEC_SP       		= 2734;
	sT[0].sTAL[126].nIEC_OsszevontHiba	= 2766;
	sT[0].sTAL[126].nIEC_MT_KommHiba	= 2767;
	sT[0].sTAL[126].nKommStatusNum		= 2;	
	sT[0].sTAL[126].nIEC_DP       		= 814;
	sT[0].sTAL[126].nIEC_DP_FSZ1  		= 818;
	sT[0].sTAL[126].nIEC_NM				= 829;
	sT[0].sTAL[126].nNMNum		  		= 9;
  
  sT[0].sTAL[126].nSP_EXTRA_OFFSET		= 2769;
	sT[0].sTAL[126].nSP_EXTRA_NUM		= 2;

  /* Szombathely 0773/1_2_2 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[127].nType = TYP_TAL;
  
	sT[0].sTAL[127].nIEC_SP       		= 2773;
	sT[0].sTAL[127].nIEC_OsszevontHiba	= 2805;
	sT[0].sTAL[127].nIEC_MT_KommHiba	= 2806;
	sT[0].sTAL[127].nKommStatusNum		= 2;	
	sT[0].sTAL[127].nIEC_DP       		= 822;
	sT[0].sTAL[127].nIEC_DP_FSZ1  		= 826;
	sT[0].sTAL[127].nIEC_NM				= 838;
	sT[0].sTAL[127].nNMNum		  		= 9;
  
  sT[0].sTAL[127].nSP_EXTRA_OFFSET		= 2808;
	sT[0].sTAL[127].nSP_EXTRA_NUM		= 2;

  /* 49777  -----------------------------------------------------------*/	
  sT[0].sTI[128].nType = TYP_TMOK;

	sT[0].sMOT[128].nIEC_SP				= 2812;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[128].nIEC_DP				= 830;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[128].nIEC_NM				= 847;		/* M�r�sek IEC kezd�c�me */	
	sT[0].sMOT[128].nNMNum      	= 4;

  /* Nagyhideghegy ISM  -----------------------------------------------------------*/	
sT[0].sTI[129].nType = TYP_MOT;

	sT[0].sMOT[129].nIEC_SP				= 2828;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[129].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[129].nIEC_DP_NUM			= 0;
	sT[0].sMOT[129].nNMNum      		= 0;

/* 21-63  -----------------------------------------------------------*/	
  sT[0].sTI[130].nType = TYP_TMOK;

	sT[0].sMOT[130].nIEC_SP				= 2835;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[130].nIEC_DP				= 831;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[130].nIEC_NM				= 851;		/* M�r�sek IEC kezd�c�me */	

/* 21-82  -----------------------------------------------------------*/	
  sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2851;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[131].nIEC_DP				= 832;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[131].nIEC_NM				= 854;		/* M�r�sek IEC kezd�c�me */	

  /* Szombathely Markusovszki k�rh�z -----------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_TAL;

		sT[0].sTAL[132].nIEC_SP       		= 2867;
		sT[0].sTAL[132].nIEC_OsszevontHiba	= 2899;
		sT[0].sTAL[132].nIEC_MT_KommHiba		= 2900;
		sT[0].sTAL[132].nIEC_DP       		= 833;
		sT[0].sTAL[132].nIEC_DP_FSZ1  		= 837;
		sT[0].sTAL[132].nIEC_NM				= 857;
		sT[0].sTAL[132].nNMNum		  		= 4;
		sT[0].sTAL[132].nKommStatusNum		= 2;
		
 	sT[0].sTAL[132].nIEC_DP_2BIT1 		= 841;
	sT[0].sTAL[132].nIEC_DP_2BIT_KINT1	= 913;
	sT[0].sTAL[132].nIEC_DP_2BIT_BENT1	= 912;

  /* Szombathely 0773/1_2_3 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[133].nType = TYP_TAL;
  
	sT[0].sTAL[133].nIEC_SP       		= 2904;
	sT[0].sTAL[133].nIEC_OsszevontHiba	= 2936;
	sT[0].sTAL[133].nIEC_MT_KommHiba	= 2937;
	sT[0].sTAL[133].nKommStatusNum		= 2;	
	sT[0].sTAL[133].nIEC_DP       		= 842;
	sT[0].sTAL[133].nIEC_DP_FSZ1  		= 846;
	sT[0].sTAL[133].nIEC_NM				= 861;
	sT[0].sTAL[133].nNMNum		  		= 9;
  
  sT[0].sTAL[133].nSP_EXTRA_OFFSET		= 2939;
	sT[0].sTAL[133].nSP_EXTRA_NUM		= 2;

  /* Szombathely 0773/1_2_4 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[134].nType = TYP_TAL;
  
	sT[0].sTAL[134].nIEC_SP       		= 2943;
	sT[0].sTAL[134].nIEC_OsszevontHiba	= 2975;
	sT[0].sTAL[134].nIEC_MT_KommHiba	= 2976;
	sT[0].sTAL[134].nKommStatusNum		= 2;	
	sT[0].sTAL[134].nIEC_DP       		= 850;
	sT[0].sTAL[134].nIEC_DP_FSZ1  		= 854;
	sT[0].sTAL[134].nIEC_NM				= 870;
	sT[0].sTAL[134].nNMNum		  		= 9;
  
  sT[0].sTAL[134].nSP_EXTRA_OFFSET		= 2978;
	sT[0].sTAL[134].nSP_EXTRA_NUM		= 2;

  /* Szombathely 0773/1_2_5 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[135].nType = TYP_TAL;
  
	sT[0].sTAL[135].nIEC_SP       		= 2982;
	sT[0].sTAL[135].nIEC_OsszevontHiba	= 3014;
	sT[0].sTAL[135].nIEC_MT_KommHiba	= 3015;
	sT[0].sTAL[135].nKommStatusNum		= 2;	
	sT[0].sTAL[135].nIEC_DP       		= 858;
	sT[0].sTAL[135].nIEC_DP_FSZ1  		= 862;
	sT[0].sTAL[135].nIEC_NM				= 879;
	sT[0].sTAL[135].nNMNum		  		= 9;
  
  sT[0].sTAL[135].nSP_EXTRA_OFFSET		=3017;
	sT[0].sTAL[135].nSP_EXTRA_NUM		= 2;

  /* Szombathely 0773/1_2_6 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[136].nType = TYP_TAL;
  
	sT[0].sTAL[136].nIEC_SP       		= 3021;
	sT[0].sTAL[136].nIEC_OsszevontHiba	= 3053;
	sT[0].sTAL[136].nIEC_MT_KommHiba	= 3054;
	sT[0].sTAL[136].nKommStatusNum		= 2;	
	sT[0].sTAL[136].nIEC_DP       		= 866;
	sT[0].sTAL[136].nIEC_DP_FSZ1  		= 870;
	sT[0].sTAL[136].nIEC_NM				= 888;
	sT[0].sTAL[136].nNMNum		  		= 9;
  
  sT[0].sTAL[136].nSP_EXTRA_OFFSET		=3056;
	sT[0].sTAL[136].nSP_EXTRA_NUM		= 2;

  /* Sz�kesfeh�rv�r Arconic -----------------------------------------------------------*/
    sT[0].sTI[137].nType = TYP_TAL;

		sT[0].sTAL[137].nIEC_SP       		= 3060;
		sT[0].sTAL[137].nIEC_OsszevontHiba	= 3092;
		sT[0].sTAL[137].nIEC_MT_KommHiba		= 3093;
		sT[0].sTAL[137].nIEC_DP       		= 874;
		sT[0].sTAL[137].nIEC_DP_FSZ1  		= 878;
		sT[0].sTAL[137].nIEC_NM				= 897;
		sT[0].sTAL[137].nNMNum		  		= 4;
		sT[0].sTAL[137].nKommStatusNum		= 2;
		
		sT[0].sTAL[137].nIEC_DP_12BIT1		= 882;
		sT[0].sTAL[137].nIEC_DP_2BIT_BK1		= 912;

		sT[0].sTAL[137].nIEC_DP_12BIT2		= 883;
		sT[0].sTAL[137].nIEC_DP_2BIT_BK2		= 920;

 		sT[0].sTAL[137].nIEC_DP_12BIT3		= 884;
		sT[0].sTAL[137].nIEC_DP_2BIT_BK3		= 913;

 		sT[0].sTAL[137].nIEC_DP_12BIT4		= 885;
		sT[0].sTAL[137].nIEC_DP_2BIT_BK4		= 925;

/* B�rsonyos, PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[138].nType = TYP_MOT;

	sT[0].sMOT[138].nIEC_SP				= 3097;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[138].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[138].nIEC_DP				= 886;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[138].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[138].nIEC_NM				= 901;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[138].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* Tata 460/225,232,233 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[139].nType = TYP_MOT;

	sT[0].sMOT[139].nIEC_SP				= 3115;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[139].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[139].nIEC_DP				= 894;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[139].nIEC_DP_NUM			= 16;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[139].nIEC_NM				= 910;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[139].nNMNum				= 18;		/* Anal�g m�r�sek sz�ma*/

/* Tata 460/223,224,226,230,231 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[140].nType = TYP_MOT;

	sT[0].sMOT[140].nIEC_SP				= 3143;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[140].nIEC_SP_NUM			= 40;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[140].nIEC_DP				= 910;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[140].nIEC_DP_NUM			= 32;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[140].nIEC_NM				= 928;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[140].nNMNum				= 28;		/* Anal�g m�r�sek sz�ma*/

/* S�tony 089/14 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[141].nType = TYP_MOT;

	sT[0].sMOT[141].nIEC_SP				= 3185;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[141].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[141].nIEC_DP				= 942;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[141].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[141].nIEC_NM				= 956;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[141].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* S�tony 089/15 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[142].nType = TYP_MOT;

	sT[0].sMOT[142].nIEC_SP				= 3203;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[142].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[142].nIEC_DP				= 950;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[142].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[142].nIEC_NM				= 965;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[142].nNMNum				= 9;		/* Anal�g m�r�sek sz�ma*/

/* 15-07  -----------------------------------------------------------*/	
  sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 3221;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[143].nIEC_DP				= 958;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[143].nIEC_NM				= 974;		/* M�r�sek IEC kezd�c�me */	

/* Bocf�lde 0109 K�1 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[144].nType = TYP_MOT;

	sT[0].sMOT[144].nIEC_SP				= 3237;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[144].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[144].nIEC_DP				= 959;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[144].nIEC_DP_NUM			=22;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[144].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[144].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Bocf�lde 0109 K�2 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[145].nType = TYP_MOT;

	sT[0].sMOT[145].nIEC_SP				= 3255;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[145].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[145].nIEC_DP				= 981;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[145].nIEC_DP_NUM			=18;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[145].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[145].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Bocf�lde 0109 K�3 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[146].nType = TYP_MOT;

	sT[0].sMOT[146].nIEC_SP				= 3273;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[146].nIEC_SP_NUM			= 18;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[146].nIEC_DP				= 999;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[146].nIEC_DP_NUM			=34;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[146].nIEC_NM				= 977;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[146].nNMNum				= 17;		/* Anal�g m�r�sek sz�ma*/

/* Bocf�lde 0109 K�4 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[147].nType = TYP_MOT;

	sT[0].sMOT[147].nIEC_SP				= 3293;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[147].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[147].nIEC_DP				=1033;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[147].nIEC_DP_NUM			=24;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[147].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[147].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Ikerv�r 0404/14,16,18,20 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[148].nType = TYP_MOT;

	sT[0].sMOT[148].nIEC_SP				= 3311;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[148].nIEC_SP_NUM			= 30;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[148].nIEC_DP				=1057;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[148].nIEC_DP_NUM			=18;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[148].nIEC_NM				= 994;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[148].nNMNum				= 23;

/* Mosonmagyar�v�r, K�polna t�r  ----------------------------------------------------------------*/
sT[0].sTI[149].nType = TYP_MOT;

	sT[0].sMOT[149].nIEC_SP				= 1350;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[149].nIEC_SP_NUM			= 20;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[149].nIEC_DP				=326;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[149].nIEC_DP_NUM			=10;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[149].nIEC_NM				= 350;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[149].nNMNum				= 12;

/* Mosonmagyar�v�r, K�hne Ede  ----------------------------------------------------------------*/
sT[0].sTI[150].nType = TYP_MOT;

	sT[0].sMOT[150].nIEC_SP				= 1384;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[150].nIEC_SP_NUM			= 32;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[150].nIEC_DP				=336;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[150].nIEC_DP_NUM			=12;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[150].nIEC_NM				= 1017;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[150].nNMNum				= 15;

/* Dudar 075/9 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[151].nType = TYP_MOT;

	sT[0].sMOT[151].nIEC_SP				= 3343;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[151].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[151].nIEC_DP				= 1075;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[151].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[151].nIEC_NM				= 1032;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[151].nNMNum				= 9;

  /* B�k, Golf utca,  TALUS 8 csatornas !!! ----------------------------------------------*/
  sT[0].sTI[152].nType = TYP_TAL;
  
	sT[0].sTAL[152].nIEC_SP       		= 3361;
	sT[0].sTAL[152].nIEC_OsszevontHiba	= 3425;
	sT[0].sTAL[152].nIEC_MT_KommHiba	= 3426;
	sT[0].sTAL[152].nKommStatusNum		= 2;
	sT[0].sTAL[152].nLeagNum			= 8;

	sT[0].sTAL[152].nIEC_DP       		= 1079;
	sT[0].sTAL[152].nIEC_DP_FSZ1  		= 1087;
	sT[0].sTAL[152].nIEC_NM				= 1041;
	sT[0].sTAL[152].nNMNum		  		= 8;

  	sT[0].sTAL[152].nIEC_DP_12BIT1		= 1097;
		sT[0].sTAL[152].nIEC_DP_2BIT_BK1		= 920;
  
  sT[0].sTAL[152].nIEC_DP_2BIT1 		= 1096;
	sT[0].sTAL[152].nIEC_DP_2BIT_KINT1	= 912;
	sT[0].sTAL[152].nIEC_DP_2BIT_BENT1	= 913;

/* Csolnok 078/3,4 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[153].nType = TYP_MOT;

	sT[0].sMOT[153].nIEC_SP				= 3430;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[153].nIEC_SP_NUM		= 24;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[153].nIEC_DP				= 1098;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[153].nIEC_DP_NUM		= 10;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[153].nIEC_NM				= 1049;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[153].nNMNum				= 13;

/* Celld�m�lk 1873/27 PV er�m�  ----------------------------------------------------------------*/
sT[0].sTI[154].nType = TYP_MOT;

	sT[0].sMOT[154].nIEC_SP				= 3456;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[154].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[154].nIEC_DP				= 1108;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[154].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[154].nIEC_NM				= 1062;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[154].nNMNum				= 9;

/* Zalaegrszeg Pl�za  ----------------------------------------------------------------*/
sT[0].sTI[155].nType = TYP_MOT;

	sT[0].sMOT[155].nIEC_SP				= 3474;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[155].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[155].nIEC_DP				= 1112;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[155].nIEC_DP_NUM		= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[155].nIEC_NM				= 1071;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[155].nNMNum				= 6;

/* Zalaegrszeg Ker�mia t�mb  ----------------------------------------------------------------*/
sT[0].sTI[156].nType = TYP_MOT;

	sT[0].sMOT[156].nIEC_SP				= 3492;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[156].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[156].nIEC_DP				= 1120;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[156].nIEC_DP_NUM		= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[156].nIEC_NM				= 1077;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[156].nNMNum				= 6;

/* Bakonys�rk�ny 05/30  ----------------------------------------------------------------*/
sT[0].sTI[157].nType = TYP_MOT;

	sT[0].sMOT[157].nIEC_SP				= 3510;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[157].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[157].nIEC_DP				= 1128;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[157].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[157].nIEC_NM				= 1083;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[157].nNMNum				= 9;

/* Kincsesb�nya 03100/3  ----------------------------------------------------------------*/
sT[0].sTI[158].nType = TYP_MOT;

	sT[0].sMOT[158].nIEC_SP				= 3528;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[158].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[158].nIEC_DP				= 1132;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[158].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[158].nIEC_NM				= 1092;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[158].nNMNum				= 9;

  /* Kir�lyszentistv�n 017/34 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[159].nType = TYP_TAL;
  
	sT[0].sTAL[159].nIEC_SP       		= 3546;
	sT[0].sTAL[159].nIEC_OsszevontHiba	= 3578;
	sT[0].sTAL[159].nIEC_MT_KommHiba	= 3579;
	sT[0].sTAL[159].nKommStatusNum		= 2;	
	sT[0].sTAL[159].nIEC_DP       		= 1137;
	sT[0].sTAL[159].nIEC_DP_FSZ1  		= 1141;
	sT[0].sTAL[159].nIEC_NM				= 1101;
	sT[0].sTAL[159].nNMNum		  		= 9;
  
  sT[0].sTAL[159].nSP_EXTRA_OFFSET		=3581;
	sT[0].sTAL[159].nSP_EXTRA_NUM		= 2;

  /* Kir�lyszentistv�n 017/35 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[160].nType = TYP_TAL;
  
	sT[0].sTAL[160].nIEC_SP       		= 3585;
	sT[0].sTAL[160].nIEC_OsszevontHiba	= 3617;
	sT[0].sTAL[160].nIEC_MT_KommHiba	= 3618;
	sT[0].sTAL[160].nKommStatusNum		= 2;	
	sT[0].sTAL[160].nIEC_DP       		= 1145;
	sT[0].sTAL[160].nIEC_DP_FSZ1  		= 1149;
	sT[0].sTAL[160].nIEC_NM				= 1110;
	sT[0].sTAL[160].nNMNum		  		= 9;
  
  sT[0].sTAL[160].nSP_EXTRA_OFFSET		=3620;
	sT[0].sTAL[160].nSP_EXTRA_NUM		= 2;

  /* Kir�lyszentistv�n 017/36 PV er�m� ----------------------------------------------------------------*/
  sT[0].sTI[161].nType = TYP_TAL;
  
	sT[0].sTAL[161].nIEC_SP       		= 3624;
	sT[0].sTAL[161].nIEC_OsszevontHiba	= 3656;
	sT[0].sTAL[161].nIEC_MT_KommHiba	= 3657;
	sT[0].sTAL[161].nKommStatusNum		= 2;	
	sT[0].sTAL[161].nIEC_DP       		= 1153;
	sT[0].sTAL[161].nIEC_DP_FSZ1  		= 1157;
	sT[0].sTAL[161].nIEC_NM				= 1119;
	sT[0].sTAL[161].nNMNum		  		= 9;
  
  sT[0].sTAL[161].nSP_EXTRA_OFFSET		=3659;
	sT[0].sTAL[161].nSP_EXTRA_NUM		= 2;

/* Szabadbatty�n DAC -----------------------------------------------------------*/
sT[0].sTI[162].nType = TYP_MOT;

	sT[0].sMOT[162].nIEC_SP				= 3663;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[162].nIEC_SP_NUM			= 5;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[162].nIEC_DP_NUM			= 0;
	sT[0].sMOT[162].nNMNum      		= 0;

/* Csesztreg 066/2,3  ----------------------------------------------------------------*/
sT[0].sTI[163].nType = TYP_MOT;

	sT[0].sMOT[163].nIEC_SP				= 3670;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[163].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[163].nIEC_DP				= 1161;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[163].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[163].nIEC_NM				= 1128;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[163].nNMNum				= 9;

/* B�kf�rd�, Greenfield Hotel -----------------------------------------------------------*/
    sT[0].sTI[164].nType = TYP_TAL;

		sT[0].sTAL[164].nIEC_SP       		= 3688;
		sT[0].sTAL[164].nIEC_OsszevontHiba	= 3720;
		sT[0].sTAL[164].nIEC_MT_KommHiba		= 3721;
		sT[0].sTAL[164].nIEC_DP       		= 1165;
		sT[0].sTAL[164].nIEC_DP_FSZ1  		= 1169;
		sT[0].sTAL[164].nIEC_NM				= 1137;
		sT[0].sTAL[164].nNMNum		  		= 4;
		sT[0].sTAL[164].nKommStatusNum		= 2;

/* 30-75  -----------------------------------------------------------*/	
  sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 3725;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[165].nIEC_DP				= 1173;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[165].nIEC_NM				= 1141;		/* M�r�sek IEC kezd�c�me */	

/* Luk�csh�za 0107/4  ----------------------------------------------------------------*/
sT[0].sTI[166].nType = TYP_MOT;

	sT[0].sMOT[166].nIEC_SP				= 3741;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[166].nIEC_SP_NUM		= 24;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[166].nIEC_DP				= 1174;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[166].nIEC_DP_NUM		= 10;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[166].nIEC_NM				= 1144;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[166].nNMNum				= 19;
		
/* Cs�kber�ny 0146_1  ----------------------------------------------------------------*/
sT[0].sTI[167].nType = TYP_MOT;

	sT[0].sMOT[167].nIEC_SP				= 3767;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[167].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[167].nIEC_DP				= 1184;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[167].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[167].nIEC_NM				= 1163;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[167].nNMNum				= 9;

/* Cs�kber�ny 0146_2  ----------------------------------------------------------------*/
sT[0].sTI[168].nType = TYP_MOT;

	sT[0].sMOT[168].nIEC_SP				= 3785;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[168].nIEC_SP_NUM		= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[168].nIEC_DP				= 1188;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[168].nIEC_DP_NUM		= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[168].nIEC_NM				= 1172;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[168].nNMNum				= 9;

} /* end fnSetDataPar()*/

                              