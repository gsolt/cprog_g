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
	sT[0].sMOT[3].nIEC_NM				= 22;		/* M�r�sek IEC kezd�c�me */

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
	sT[0].sMOT[26].nIEC_NM				= 110;		/* M�r�sek IEC kezd�c�me */

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

} /* end fnSetDataPar()*/
