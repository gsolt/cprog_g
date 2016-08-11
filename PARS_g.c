/**************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2010.07.20	Gergely Zsolt		50-90: 2/2 -> 2/4 							*
* V2.1.2	2015.17.19	Gergely Zsolt		Kom�rom, Csillag ltp. 							*
* V2.1.3	2016.04.29	Gergely Zsolt		Kom�rom, Alumet�l. 							*





****************************************************************************
* NAME           :  PARS_G.c                                                *
* DESCRIPTION    :                                						    *
* PROCESS        :  
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
extern void setdat2(unsigned char *input);
/*--------------------------------------------------------------------------*/
/* The list of the function included in this block */                         

/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2},  	
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
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2(unsigned char *input)
{

	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	


/*nNumOfSites=250;*/
				
ST[0].nSiteList[0] = 6086; 	ST[0].nLinkList[0]	=RADIO9_4;	/* RADIO9_4 	79-047		 				MOR */
ST[0].nSiteList[1] = 8118; 	ST[0].nLinkList[1]	=RADIO9_5;	/* RADIO9_5 	54-78		 				MOR */
ST[0].nSiteList[2] = 5054; 	ST[0].nLinkList[2]	=RADIO9_5;	/* RADIO9_5 	71-70		 				MOR */
ST[0].nSiteList[3] = 3214; 	ST[0].nLinkList[3]	=RADIO9_5;	/* RADIO9_5 	72-89		 				MOR */
ST[0].nSiteList[4] = 8032; 	ST[0].nLinkList[4]	=RADIO9_5;	/* RADIO9_5 	72-97		 				MOR */
ST[0].nSiteList[5] = 8164; 	ST[0].nLinkList[5]	=RADIO9_5;	/* RADIO9_5 	74-30		 				MOR */
ST[0].nSiteList[6] = 8015; 	ST[0].nLinkList[6]	=RADIO9_7;	/* RADIO9_7 	72-56		 				MOR */
ST[0].nSiteList[7] = 3179; 	ST[0].nLinkList[7]	=RADIO9_4;	/* RADIO9_4 	73-06		 				MOR */
ST[0].nSiteList[8] = 8020; 	ST[0].nLinkList[8]	=RADIO9_7;	/* RADIO9_7 	72-57		 				MOR */
ST[0].nSiteList[9] = 8016; 	ST[0].nLinkList[9]	=RADIO9_7;	/* RADIO9_7 	74-36		 				MOR */
ST[0].nSiteList[10]= 6007;  ST[0].nLinkList[10]	=RADIO9_5;	/* RADIO9_5 	Cset�ny kapcsol��lllom�s	MOR */
ST[0].nSiteList[11]= 6110;  ST[0].nLinkList[11]	=RADIO4_2;	/* RADIO4_2 	70-09						CELL */
ST[0].nSiteList[12]= 3077;  ST[0].nLinkList[12]	=RADIO4_2;	/* RADIO4_2 	70-24						CELL */
ST[0].nSiteList[13]= 6211;  ST[0].nLinkList[13]	=RADIO4_2;	/* RADIO4_2 	71-04						CELL */
ST[0].nSiteList[14]= 3079;  ST[0].nLinkList[14]	=RADIO4_2;	/* RADIO4_2 	71-28						CELL */
ST[0].nSiteList[15]= 6118;  ST[0].nLinkList[15]	=RADIO4_2;	/* RADIO4_2 	72-99						CELL */
ST[0].nSiteList[16]= 3081;  ST[0].nLinkList[16]	=RADIO4_2;	/* RADIO4_2 	71-58						CELL */
ST[0].nSiteList[17]= 570;   ST[0].nLinkList[17]	=LINE2;		/* LINE2	 	Csepreg DAC					CSEP */
ST[0].nSiteList[18]= 9001;  ST[0].nLinkList[18]	=RADIO5_2;	/* RADIO5_1	 	Kom�rom, Csillag ltp.		IGM */
ST[0].nSiteList[19]= 9002;  ST[0].nLinkList[19]	=RADIO9_4;	/* RADIO9_4	 	S�r�d, naper�m�		 		MOR */
ST[0].nSiteList[20]= 9003;  ST[0].nLinkList[20]	=RADIO7_1;	/* RADIO7_1	 	Dunakiliti I., naper�m�		MOS */
ST[0].nSiteList[21]= 9004;  ST[0].nLinkList[21]	=RADIO7_1;	/* RADIO7_1	 	Dunakiliti II., naper�m�	MOS */
ST[0].nSiteList[22]= 6210;  ST[0].nLinkList[22]	=RADIO2_8;	/* RADIO2_8	 	42-14						ZEG */
ST[0].nSiteList[23]= 6209;  ST[0].nLinkList[23]	=RADIO2_6;	/* RADIO2_6	 	42-43						ZEG */
ST[0].nSiteList[24]= 3067;  ST[0].nLinkList[24]	=RADIO2_8;	/* RADIO2_8	 	42-44						ZEG */
ST[0].nSiteList[25]= 8057;  ST[0].nLinkList[25]	=RADIO6_2;	/* RADIO6_2	 	60-40						CSEP */
ST[0].nSiteList[26]= 3172;  ST[0].nLinkList[26]	=RADIO6_2;	/* RADIO6_2	 	64-84						CSEP */
ST[0].nSiteList[27]= 3019;  ST[0].nLinkList[27]	=RADIO6_2;	/* RADIO6_2	 	60-41						CSEP */
ST[0].nSiteList[28]= 3018;  ST[0].nLinkList[28]	=RADIO6_2;	/* RADIO6_2	 	60-43						CSEP */
ST[0].nSiteList[29]= 3020;  ST[0].nLinkList[29]	=RADIO6_2;	/* RADIO6_2	 	60-45						CSEP */
ST[0].nSiteList[30]= 9005;  ST[0].nLinkList[30]	=RADIO5_2;	/* RADIO5_1	 	Kom�rom, Alumet�l			IGM  */
ST[0].nSiteList[31]= 9006;  ST[0].nLinkList[31]	=RADIO5_2;	/* RADIO5_2	 	Tata, bioer�m�				IGM  */
ST[0].nSiteList[32]= 9007;  ST[0].nLinkList[32]	=RADIO6_1;	/* RADIO6_1	 	Szombathely,v�rsh�za		SZOM  */
ST[0].nSiteList[33]= 9008;  ST[0].nLinkList[33]	=RADIO9_4;	/* RADIO9_4	 	Feh�rv�rcsurg�, naper�m�	MOR  */
ST[0].nSiteList[34]= 9009;  ST[0].nLinkList[34]	=RADIO5_2;	/* RADIO5_2	 	Tata, napeelempark			IGM  */
ST[0].nSiteList[35]= 8130;  ST[0].nLinkList[35]	=RADIO4_2;	/* RADIO4_2	 	72-15						IGM  */







ST[0].nSiteList[249]=0;		ST[0].nLinkList[249]	=ALL_LINK;	/* RTUALL */







/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
/*-------------------------------*/
/* Clear the dynamic site table. */
/*-------------------------------*/

MOSCAD_init_sitetable(); 
/* 250--------------------------------------------------------------------------259*/
/* 250 Komarom, Hansaprint			IG			*/ MOSCAD_add_new_site(301,RADIO5_8);		
/* 251 85-00,85-83					IG			*/ MOSCAD_add_new_site(302,RADIO5_1);
/* 252 12-14						MOS			*/ MOSCAD_add_new_site(303,RADIO7_1);
/* 253 30-23						SZVAR		*/ MOSCAD_add_new_site(304,RADIO1_1);
/* 254 11-10						MOS			*/ MOSCAD_add_new_site(305,RADIO7_1);


	



/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/

/*for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
}*/


/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : ZEG, IK, CELL */
ST[0].sRAD_K1[0].nRtuNumRad = 9; /*63*/
ST[0].sRAD_K1[0].nIndx[0]=11; 
ST[0].sRAD_K1[0].nIndx[1]=12; 
ST[0].sRAD_K1[0].nIndx[2]=13; 
ST[0].sRAD_K1[0].nIndx[3]=14; 
ST[0].sRAD_K1[0].nIndx[4]=15; 
ST[0].sRAD_K1[0].nIndx[5]=16; 
ST[0].sRAD_K1[0].nIndx[6]=22; 
ST[0].sRAD_K1[0].nIndx[7]=23; 
ST[0].sRAD_K1[0].nIndx[8]=24; 


/* K2 : SZOM, MOS, CSEP*/
ST[0].sRAD_K2[0].nRtuNumRad = 9; /*76*/
ST[0].sRAD_K2[0].nIndx[0]=7;
ST[0].sRAD_K2[0].nIndx[1]=20;
ST[0].sRAD_K2[0].nIndx[2]=21;
ST[0].sRAD_K2[0].nIndx[3]=25;
ST[0].sRAD_K2[0].nIndx[4]=26;
ST[0].sRAD_K2[0].nIndx[5]=27;
ST[0].sRAD_K2[0].nIndx[6]=28;
ST[0].sRAD_K2[0].nIndx[7]=29;
ST[0].sRAD_K2[0].nIndx[8]=32;





/* K3 : SZVAR, ORNY, IG, MOR */
ST[0].sRAD_K3[0].nRtuNumRad = 18; /*55*/
ST[0].sRAD_K3[0].nIndx[0]=0; 
ST[0].sRAD_K3[0].nIndx[1]=1; 
ST[0].sRAD_K3[0].nIndx[2]=2; 
ST[0].sRAD_K3[0].nIndx[3]=3; 
ST[0].sRAD_K3[0].nIndx[4]=4; 
ST[0].sRAD_K3[0].nIndx[5]=5; 
ST[0].sRAD_K3[0].nIndx[6]=6; 
ST[0].sRAD_K3[0].nIndx[7]=7; 
ST[0].sRAD_K3[0].nIndx[8]=8; 
ST[0].sRAD_K3[0].nIndx[9]=9; 
ST[0].sRAD_K3[0].nIndx[10]=10;
ST[0].sRAD_K3[0].nIndx[11]=18;
ST[0].sRAD_K3[0].nIndx[12]=19;
ST[0].sRAD_K3[0].nIndx[13]=30;
ST[0].sRAD_K3[0].nIndx[14]=31;
ST[0].sRAD_K3[0].nIndx[15]=33;
ST[0].sRAD_K3[0].nIndx[16]=34;
ST[0].sRAD_K3[0].nIndx[17]=35;


/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 1;
ST[0].sLIN[0].nIndx[0] =17;




} /* end fnSetComPar()*/

