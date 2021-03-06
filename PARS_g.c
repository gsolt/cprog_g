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
ST[0].nSiteList[32]= 9007;  ST[0].nLinkList[32]	=RADIO6_6;	/* RADIO6_1	 	Szombathely,v�rosh�za		SZOM  */
ST[0].nSiteList[33]= 9008;  ST[0].nLinkList[33]	=RADIO9_4;	/* RADIO9_4	 	Feh�rv�rcsurg�, naper�m�	MOR  */
ST[0].nSiteList[34]= 9009;  ST[0].nLinkList[34]	=RADIO5_2;	/* RADIO5_2	 	Tata, napeelempark			IGM  */
ST[0].nSiteList[35]= 8130;  ST[0].nLinkList[35]	=RADIO4_2;	/* RADIO4_2	 	72-15						IGM  */

ST[0].nSiteList[36]= 6137;  ST[0].nLinkList[36]	=RADIO1_1;	/* RADIO1_1	 	34-02						SZVAR  */
ST[0].nSiteList[37]= 3198;  ST[0].nLinkList[37]	=RADIO3_7;	/* RADIO3_7	 	80-87						SZVAR  */
ST[0].nSiteList[38]= 6199;  ST[0].nLinkList[38]	=RADIO1_8;	/* RADIO1_8	 	87-29						SZVAR  */
ST[0].nSiteList[39]= 3115;  ST[0].nLinkList[39]	=RADIO1_9;	/* RADIO1_9	 	87-33						SZVAR  */
ST[0].nSiteList[40]= 6169;  ST[0].nLinkList[40]	=RADIO1_1;	/* RADIO1_1	 	31-64						SZVAR  */



ST[0].nSiteList[41]= 9010;  ST[0].nLinkList[41]	=RADIO1_7;	/* RADIO1_7	 	31-58						SZVAR  */
ST[0].nSiteList[42]= 9011;  ST[0].nLinkList[42]	=RADIO1_7;	/* RADIO1_7	 	31-63						SZVAR  */

ST[0].nSiteList[43]= 9012;  ST[0].nLinkList[43]	=RADIO6_2;	/* RADIO6_2	 	41-87						CSEP  */
ST[0].nSiteList[44]= 9013;  ST[0].nLinkList[44]	=RADIO6_2;	/* RADIO6_2	 	41-62						CSEP  */

ST[0].nSiteList[45]= 3103;  ST[0].nLinkList[45]	=RADIO4_2;	/* RADIO4_2	 	90-18						CELL  */

ST[0].nSiteList[46]= 9014;  ST[0].nLinkList[46]	=RADIO7_1;	/* RADIO7_1	 	12-75						MVAR  */

ST[0].nSiteList[47]= 9015;  ST[0].nLinkList[47]	=RADIO7_1;	/* RADIO7_1	 	14-03						MVAR  */
ST[0].nSiteList[48]= 9016;  ST[0].nLinkList[48]	=RADIO6_6;	/* RADIO4_1	 	48642						IK  */

ST[0].nSiteList[49]=3;	 	  ST[0].nLinkList[49]=RSLINK3;	/* Front end A								*/
ST[0].nSiteList[50]=5000; 	ST[0].nLinkList[50]=RSLINK3;	/* Front end C								*/
ST[0].nSiteList[51]=7000; 	ST[0].nLinkList[51]=RSLINK3;	/* Front end E								*/
ST[0].nSiteList[52]=8990; 	ST[0].nLinkList[52]=RSLINK3;	/* Redundancia A							*/

ST[0].nSiteList[53]=580; 	  ST[0].nLinkList[53]=LINE2;			/* Kom�rom DAC							*/

ST[0].nSiteList[54]= 9017;  ST[0].nLinkList[54]	=RADIO7_1;	/* RADIO7_1	 	M�v�r, �voda						              MVAR  */        /*OK*/
ST[0].nSiteList[55]= 9018;  ST[0].nLinkList[55]	=RADIO7_1;	/* RADIO7_1	 	M�v�r, V�s�rt�r Gimn�zium						  MVAR  */        /*OK*/
ST[0].nSiteList[56]= 9019;  ST[0].nLinkList[56]	=RADIO1_1;	/* RADIO1_1	 	Sz�kesfeh�rv�r, s�st�i stadion				SZVAR  */
ST[0].nSiteList[57]= 9020;  ST[0].nLinkList[57]	=RADIO1_1;	/* RADIO1_1	 	Sz�kesfeh�rv�r, �telb�r        				SZVAR  */       /*OK*/
ST[0].nSiteList[58]= 9021;  ST[0].nLinkList[58]	=RADIO1_1;	/* RADIO1_1	 	Sz�kesfeh�rv�r, Kaz�nh�z        				SZVAR  */     /*OK */
ST[0].nSiteList[59]= 9022;  ST[0].nLinkList[59]	=RADIO6_6;	/* RADIO6_6	 	Szombathely, Magyar u.       				SZOM  */          /*OK*/
ST[0].nSiteList[60]= 9023;  ST[0].nLinkList[60]	=RADIO6_6;	/* RADIO6_6	 	K�szegdoroszl�, PV er�m�       				SZOM  */
ST[0].nSiteList[61]= 9024;  ST[0].nLinkList[61]	=RADIO9_4;	/* RADIO6_6	 	Kincsesb�nya 03_78, PV er�m�       				MOR  */     /* Tesztelve */
ST[0].nSiteList[62]= 9025;  ST[0].nLinkList[62]	=RADIO4_1;	/* RADIO4_1	 	S�rv�r, Spar       				          IK  */           /*NEM OK*/
ST[0].nSiteList[63]= 9026;  ST[0].nLinkList[63]	=RADIO4_1;	/* RADIO4_1	 	S�rv�r, Sz�chenyi III.       				IK  */           /*OK*/

ST[0].nSiteList[64]= 9027;  ST[0].nLinkList[64]	=RADIO5_2;	/* RADIO5_2	 	Tata, Bart�k      				          TAT  */          /*OK*/
ST[0].nSiteList[65]= 9028;  ST[0].nLinkList[65]	=RADIO5_1;	/* RADIO5_2	 	Kisb�r, Kom�romi u      				    IGM  */           /*OK, tesztelve */
ST[0].nSiteList[66]= 9029;  ST[0].nLinkList[66]	=RADIO9_1;	/* RADIO9_1	 	Velence, Nautis      				        K�F  */           /* OK, Tesztelve */
ST[0].nSiteList[67]= 9030;  ST[0].nLinkList[67]	=RADIO1_8;	/* RADIO1_8	 	Velence, ABC Wickenburg      				BAR  */           /* OK*/

ST[0].nSiteList[68]= 9031;  ST[0].nLinkList[68]	=RADIO4_1;	/* RADIO4_1	 	S�rv�r, Alkotm�ny I.      				  IK  */             /* OK */
ST[0].nSiteList[69]= 9032;  ST[0].nLinkList[69]	=RADIO6_3;	/* RADIO6_3	 	K�szeg, Spar      				          SZOM  */            /* OK */

ST[0].nSiteList[70]= 9035;  ST[0].nLinkList[70]	=RADIO9_4;	/* RADIO9_4	 	34-37						                    MOR  */
ST[0].nSiteList[71]= 9036;  ST[0].nLinkList[71]	=RADIO4_1;	/* RADIO4_1	 	S�rv�r, Szatm�r I.      				  IK  */            

ST[0].nSiteList[72]= 9037;  ST[0].nLinkList[72]	=RADIO9_4;	/* RADIO9_4	 	Kincsesb�nya 03_100, PV er�m�       				MOR  */   /* tesztelve */
ST[0].nSiteList[73]= 9038;  ST[0].nLinkList[73]	=RADIO7_1;	/* RADIO7_1	 	M�v�r, 739-8 PV er�m�		              MVAR  */        /*tesztelve OK*/

ST[0].nSiteList[74]= 9039;  ST[0].nLinkList[74]	=RADIO1_8;	/* RADIO1_8	 	32607						                    BAR  */     /* tesztelve */
ST[0].nSiteList[75]= 9040;  ST[0].nLinkList[75]	=RADIO1_8;	/* RADIO1_8	 	32605						                    BAR  */     /* tesztelve */
ST[0].nSiteList[76]= 9041;  ST[0].nLinkList[76]	=RADIO1_8;	/* RADIO1_8	 	32609						                    BAR  */     /* tesztelve */

ST[0].nSiteList[77]= 9042;  ST[0].nLinkList[77]	=RADIO1_8;	/* RADIO1_8	 	30-94						                    BAR  */     /* tesztelve */
ST[0].nSiteList[78]= 9043;  ST[0].nLinkList[78]	=RADIO4_2;	/* RADIO4_2	 	Celld�m�lk 2912/17 PV er�m�         CELL  */     /* tesztelve */
ST[0].nSiteList[79]= 9044;  ST[0].nLinkList[79]	=RADIO5_2;	/* RADIO5_2	 	Tata, Krist�ly                      TAT  */     /* tesztelve */
ST[0].nSiteList[80]= 9045;  ST[0].nLinkList[80]	=RADIO6_1;	/* RADIO6_1	 	Ken�z, 062-9 PV er�m�               SZOM  */     /* tesztelve */
ST[0].nSiteList[81]= 9046;  ST[0].nLinkList[81]	=RADIO3_6;	/* RADIO3_6	 	Oroszl�ny, 4700-9 PV er�m�           ORNY  */     /* tesztelve */
ST[0].nSiteList[82]= 9049;  ST[0].nLinkList[82]	=RADIO6_6;	/* RADIO6_6	 	Szombathely, Claudius                SZ�L  */     /* tesztelve */
ST[0].nSiteList[83]= 9047;  ST[0].nLinkList[83]	=RADIO4_2;	/* RADIO4_2	 	J�nosh�za, 033_3 PV er�m�            CELL  */     /*  tesztelve */
ST[0].nSiteList[84]= 9048;  ST[0].nLinkList[84]	=RADIO3_7;	/* RADIO3_7	 	Tatab�nya Uni� ltp.                  GALL  */     /* tesztelve */
ST[0].nSiteList[85]= 9050;  ST[0].nLinkList[85]	=RADIO2_8;	/* RADIO2_8	 	Gy�rv�r, 03/15 PV                   ZEG  */     /* tesztelve */
ST[0].nSiteList[86]= 9051;  ST[0].nLinkList[86]	=RADIO2_8;	/* RADIO2_8	 	Gy�rv�r, 05/1 PV                   ZEG  */     /* tesztelve */
ST[0].nSiteList[87]= 9052;  ST[0].nLinkList[87]	=RADIO9_4;	/* RADIO9_4	 	Bodajk, 0207/10 PV                   MOR  */     /* tesztelve */
ST[0].nSiteList[88]= 9053;  ST[0].nLinkList[88]	=RADIO1_1;	/* RADIO1_1	 	36601                               SZVAR  */     /* tesztelve */
ST[0].nSiteList[89]= 9054;  ST[0].nLinkList[89]	=RADIO5_3;	/* RADIO5_3	 	Annav�lgy 0276/15 PV                IGM  */     /* Tesztelve */
ST[0].nSiteList[90]= 9055;  ST[0].nLinkList[90]	=RADIO1_1;	/* RADIO1_1	 	Sz�kesfeh�rv�r, Albacomp             SZVAR  */     /* Tesztelve */
ST[0].nSiteList[91]= 9056;  ST[0].nLinkList[91]	=RADIO3_9;	/* RADIO3_9	 	Tatab�nya, K�zm. h�za                TAT  */     /*  */
ST[0].nSiteList[92]= 9057;  ST[0].nLinkList[92]	=RADIO2_6;	/* RADIO2_6	 	Zalaegerszeg Olai bisztr�                ZAL  */     /*  */

ST[0].nSiteList[93]= 9058;  ST[0].nLinkList[93]	=RADIO1_1;	/* RADIO1_1	 	T�c 0346/1-1                       SZVAR  */     /*  */
ST[0].nSiteList[94]= 9059;  ST[0].nLinkList[94]	=RADIO1_1;	/* RADIO1_1	 	T�c 0346/1-2                       SZVAR  */     /*  */
ST[0].nSiteList[95]= 9061;  ST[0].nLinkList[95]	=RADIO5_2;	/* RADIO5_2	  Alm�sf�zit� 012                    IGM  */     /*  */
ST[0].nSiteList[96]= 9060;  ST[0].nLinkList[96]	=RADIO5_2;	/* RADIO5_2	  Tata, Moowa                        GALL  */     /*  */
ST[0].nSiteList[97]= 9062;  ST[0].nLinkList[97]	=RADIO5_1;	/* RADIO5_1	  Kom�rom, CTP                        IGM  */     /*  */

ST[0].nSiteList[98]= 9063;  ST[0].nLinkList[98]	=RADIO2_6;	/* RADIO2_6	  Zalaegerszeg, 0779/                 ZEG  */     /*  */

ST[0].nSiteList[99]= 9064;  ST[0].nLinkList[99]	=RADIO5_6;	/* RADIO5_6	  Kom�rom, 1782/233                     KOM  */     /*  */

ST[0].nSiteList[100]= 9065;  ST[0].nLinkList[100]	=RADIO3_7;	/* RADIO3_7	  Tatab�nya, LIDL                     TAT  */     /*  */
ST[0].nSiteList[101]= 9066;  ST[0].nLinkList[101]	=RADIO3_7;	/* RADIO3_7	  Tatab�nya, K�j�l                     TAT  */     /*  */
ST[0].nSiteList[102]= 9067;  ST[0].nLinkList[102]	=RADIO6_1;	/* RADIO6_1	  Gy�ngy�sfalu PV                     SZOM  */     /*  */
                                                           
ST[0].nSiteList[103]= 9068;  ST[0].nLinkList[103]	=RADIO2_7;	/* RADIO2_7	  Nova 2037/2 PV                     SZOM  */     /*  */
ST[0].nSiteList[104]= 9069;  ST[0].nLinkList[104]	=RADIO8_5;	/* RADIO8_5	  Lenti 0236 PV                     LEN  */     /*  */
ST[0].nSiteList[105]= 9070;  ST[0].nLinkList[105]	=RADIO9_1;	/* RADIO9_1	  Videoton 3523/34 PV                     KOF  */     /*  */
ST[0].nSiteList[106]= 9071;  ST[0].nLinkList[106]	=RADIO1_3;	/* RADIO9_4	 	31-81                               MOR  */     /* tesztelve */
ST[0].nSiteList[107]= 9072;  ST[0].nLinkList[107]	=RADIO9_4;	/* RADIO9_4	 	34-82                               MOR  */     /* tesztelve */
ST[0].nSiteList[108]= 9073;  ST[0].nLinkList[108]	=RADIO9_4;	/* RADIO9_4	 	Cs�kak� 070/2 PV er�m�              MOR  */     /* tesztelve */
ST[0].nSiteList[109]= 9074;  ST[0].nLinkList[109]	=RADIO4_2;	/* RADIO4_2	 	Celld�m�lk 173/28 PV er�m�          CELL  */     /* tesztelve */
ST[0].nSiteList[110]= 9075;  ST[0].nLinkList[110]	=RADIO6_6;	/* RADIO6_6	  K�szeg 0117 PV er�m�                SZOL  */     /* tesztelve */
ST[0].nSiteList[111]= 9076;  ST[0].nLinkList[111]	=RADIO5_1;	/* RADIO5_1	  Kisb�r 0129 PV er�m�                IGM  */     /* tesztelve */
ST[0].nSiteList[112]= 9077;  ST[0].nLinkList[112]	=RADIO5_1;	/* RADIO5_1	  Kisb�r Iskola utca                   IGM  */     /* tesztelve */
ST[0].nSiteList[113]=10075;  ST[0].nLinkList[113]	=RADIO5_1;	/* RADIO5_1	  �cs 0242/17                          RAK  */     /* tesztelve */
ST[0].nSiteList[114]=590; 	 ST[0].nLinkList[114]=LINE2;			/* R�khegy DAC							*/
ST[0].nSiteList[115]= 9078;  ST[0].nLinkList[115]	=RADIO1_5;	/* RADIO1_5	 	30-19                               SZVAR  */     /* tesztelve */
ST[0].nSiteList[116]= 9079;  ST[0].nLinkList[116]	=RADIO4_2;	/* RADIO4_2	 	Celld�m�lk 0355/18                  CELL  */     /* tesztelve */
ST[0].nSiteList[117]= 9080;  ST[0].nLinkList[117]	=RADIO3_7;	/* RADIO3_7	 	K�rnye 0337/9                       GALL  */     /* tesztelve */
ST[0].nSiteList[118]= 9081;  ST[0].nLinkList[118]	=RADIO3_6;	/* RADIO3_6	 	82-01                               ORNY  */     /* tesztelve */
ST[0].nSiteList[119]= 9082;  ST[0].nLinkList[119]	=RADIO2_6;	/* RADIO2_6	 	Zalaegerszeg vash�z                 ZEG  */     /* tesztelve */
ST[0].nSiteList[120]= 9083;  ST[0].nLinkList[120]	=RADIO3_6;	/* RADIO3_6	 	K�ml�d 099/14,16,17                 ORNY  */     /* tesztelve */
ST[0].nSiteList[121]= 9084;  ST[0].nLinkList[121]	=RADIO4_2;	/* RADIO4_2	 	V�n�ck 064/25                       CELL  */     /* tesztelve */
ST[0].nSiteList[122]= 9087;  ST[0].nLinkList[122]	=RADIO2_7;	/* RADIO2_7	 	Pakod 2144/1_2                       ZEG  */     /* tesztelve */
ST[0].nSiteList[123]= 9088;  ST[0].nLinkList[123]	=RADIO2_7;	/* RADIO2_7	 	Pakod 2144/2                       ZEG  */     /* tesztelve */
ST[0].nSiteList[124]= 9085;  ST[0].nLinkList[124]	=RADIO1_5;	/* RADIO1_5	 	Polg�rdi 0155/12                    SZVAR  */     /* tesztelve */
ST[0].nSiteList[125]= 9086;  ST[0].nLinkList[125]	=RADIO1_5;	/* RADIO1_5	 	Polg�rdi 0155/11                    SZVAR  */     /* tesztelve */
ST[0].nSiteList[126]= 9089;  ST[0].nLinkList[126]	=RADIO6_1;	/* RADIO6_6	 	Szombathely Pleva Sun             077/1_2_1  SZOL  */     /* tesztelve */
ST[0].nSiteList[127]= 9090;  ST[0].nLinkList[127]	=RADIO6_6;	/* RADIO6_6	 	Szombathely B�cskai Energia III. 077/1_2_2   SZOL  */     /* tesztelve */
ST[0].nSiteList[128]= 9091;  ST[0].nLinkList[128]	=RADIO6_6;	/* RADIO6_6	 	49777                               SZOL  */     /* tesztelve */
ST[0].nSiteList[129]=10111;  ST[0].nLinkList[129]	=RADIO5_3;	/* RADIO5_3	 	Nagyhideghegy ISM                   IGM  */     /* tesztelve */
ST[0].nSiteList[130]= 5228;  ST[0].nLinkList[130]	=RADIO5_9;	/* RADIO5_9	 	21-63                               IGM  */     /* tesztelve */
ST[0].nSiteList[131]= 6095;  ST[0].nLinkList[131]	=RADIO5_9;	/* RADIO5_9	 	21-82                               IGM  */     /* tesztelve */
ST[0].nSiteList[132]= 9093;  ST[0].nLinkList[132]	=RADIO6_6;	/* RADIO6_1	 	Szombathely Markusovszky k�rh�z     SZOM  */     /* tesztelve */
ST[0].nSiteList[133]= 9094;  ST[0].nLinkList[133]	=RADIO6_1;	/* RADIO6_6	 	Szhely MW Z�ld-Energia II. 077/1_2_3  SZOL  */     /* tesztelve */
ST[0].nSiteList[134]= 9095;  ST[0].nLinkList[134]	=RADIO6_6;	/* RADIO6_6	 	Szhely B�cskai Energia II. 077/1_2_4  SZOL  */     /* tesztelve */
ST[0].nSiteList[135]= 9096;  ST[0].nLinkList[135]	=RADIO6_1;	/* RADIO6_6	 	Szhely MW Z�ld-Energia I.  077/1_2_5              SZOL  */     /* tesztelve */
ST[0].nSiteList[136]= 9097;  ST[0].nLinkList[136]	=RADIO6_6;	/* RADIO6_6	 	Szhely B�cskai Energia I.  077/1_2_6              SZOL  */     /* tesztelve */
ST[0].nSiteList[137]= 9098;  ST[0].nLinkList[137]	=RADIO9_1;	/* RADIO9_1	 	Sz�kesfeh�rv�r, Arconic            KOF  */     /* tesztelve */
ST[0].nSiteList[138]= 9092;  ST[0].nLinkList[138]	=RADIO5_1;	/* RADIO5_1	 	B�rsonyos 0240/2                   IGM  */     /* tesztelve */
ST[0].nSiteList[139]= 9099;  ST[0].nLinkList[139]	=RADIO5_2;	/* RADIO5_2	 	Tata 460/225,232,233               TAT  */     /* tesztelve */
ST[0].nSiteList[140]= 9100;  ST[0].nLinkList[140]	=RADIO5_2;	/* RADIO5_2	 	Tata 460/223,224,226,230,231               TAT  */     /* tesztelve */
ST[0].nSiteList[141]= 9101;  ST[0].nLinkList[141]	=RADIO4_1;	/* RADIO4_1	 	S�tony 089/14                       IK  */     /* tesztelve */
ST[0].nSiteList[142]= 9102;  ST[0].nLinkList[142]	=RADIO4_1;	/* RADIO4_1	 	S�tony 089/15                       IK  */     /* tesztelve */
ST[0].nSiteList[143]= 6187;  ST[0].nLinkList[143]	=RADIO7_1;	/* RADIO7_1	 	15-07                               MOV  */     /* tesztelve */
ST[0].nSiteList[144]= 9103;  ST[0].nLinkList[144]	=RADIO2_7;	/* RADIO2_7	 	Bocf�lde K�1                        ZEG  */     /* tesztelve */
ST[0].nSiteList[145]= 9104;  ST[0].nLinkList[145]	=RADIO2_7;	/* RADIO2_7	 	Bocf�lde K�2                        ZEG  */     /* tesztelve */
ST[0].nSiteList[146]= 9105;  ST[0].nLinkList[146]	=RADIO2_7;	/* RADIO2_7	 	Bocf�lde K�3                        ZEG  */     /* tesztelve */
ST[0].nSiteList[147]= 9106;  ST[0].nLinkList[147]	=RADIO2_7;	/* RADIO2_7	 	Bocf�lde K�4                        ZEG  */     /* tesztelve */
ST[0].nSiteList[148]= 9107;  ST[0].nLinkList[148]	=RADIO4_1;	/* RADIO4_1	 	Ikerv�r 0404/14,16,18,20            IK  */     /* tesztelve */
ST[0].nSiteList[149]= 9033;  ST[0].nLinkList[149]	=RADIO7_1;	/* RADIO7_1	 	K�polna                             MOS  */     /* tesztelve */
ST[0].nSiteList[150]= 9034;  ST[0].nLinkList[150]	=RADIO7_1;	/* RADIO7_1	 	K�hne Ede                           MOS  */     /* tesztelve */
ST[0].nSiteList[151]= 9108;  ST[0].nLinkList[151]	=RADIO9_4;	/* RADIO9_4	 	Dudar 075/9                         MOR  */     /* tesztelve */
ST[0].nSiteList[152]= 9109;  ST[0].nLinkList[152]	=RADIO6_2;	/* RADIO6_2	 	B�k, Golf utca                      CSEP  */     /* tesztelve */
ST[0].nSiteList[153]= 9110;  ST[0].nLinkList[153]	=RADIO5_3;	/* RADIO5_3	 	Csolnok, 078/3,4                    IGM */     /* tesztelve */
ST[0].nSiteList[154]= 9111;  ST[0].nLinkList[154]	=RADIO4_2;	/* RADIO4_2	 	Celld�m�lk 1873/27                  CELL */     /* tesztelve */
ST[0].nSiteList[155]= 9112;  ST[0].nLinkList[155]	=RADIO2_6;	/* RADIO2_6	 	Zalaegerszeg  Pl�za                 ZEG */     /* tesztelve */
ST[0].nSiteList[156]= 9113;  ST[0].nLinkList[156]	=RADIO2_6;	/* RADIO2_6	 	Zalaegerszeg  Ker�mia t�mb          ZEG */     /* tesztelve */
ST[0].nSiteList[157]= 9114;  ST[0].nLinkList[157]	=RADIO9_4;	/* RADIO9_4	 	Bakonys�rk�ny 05/30                 MOR */     /* tesztelve */
ST[0].nSiteList[158]= 9115;  ST[0].nLinkList[158]	=RADIO1_3;	/* RADIO1_3	 	Kincsesb�nya 03100/3                RAK */     /* tesztelve */
ST[0].nSiteList[159]= 10115; ST[0].nLinkList[159]	=RADIO1_5;	/* RADIO1_5	 	Kir�lyszentistv�n 017/34            SZVAR */     /* tesztelve */
ST[0].nSiteList[160]= 10116; ST[0].nLinkList[160]	=RADIO1_5;	/* RADIO1_5	 	Kir�lyszentistv�n 017/35            SZVAR */     /* tesztelve */
ST[0].nSiteList[161]= 10117; ST[0].nLinkList[161]	=RADIO1_5;	/* RADIO1_5	 	Kir�lyszentistv�n 017/36            SZVAR */     /* tesztelve */
ST[0].nSiteList[162]= 600;	 ST[0].nLinkList[162]	=LINE2;     /* LINE2      Szabadbatty�n DAC					               */
ST[0].nSiteList[163]= 9116;  ST[0].nLinkList[163]	=RADIO8_5;	/* RADIO8_5	 	Csesztreg 066/2,3                   LEN */     /* tesztelve */
ST[0].nSiteList[164]= 36;    ST[0].nLinkList[164]	=RADIO6_2;	/* RADIO6_	 	B�kf�rd�, Greenfield Hotel          CSEP */     /* tesztelve */
ST[0].nSiteList[165]= 9117;  ST[0].nLinkList[165]	=RADIO9_1;	/* RADIO9_1	 	32-75                               KOF */     /* tesztelve */
ST[0].nSiteList[166]= 9118;  ST[0].nLinkList[166]	=RADIO6_6;	/* RADIO6_6	 	Luk�csh�za 0107/4                   SZOL */     /* tesztelve */
ST[0].nSiteList[167]= 9120;  ST[0].nLinkList[167]	=RADIO1_3;	/* RADIO1_1	 	Cs�kber�ny 0146_1                   RAK */     /* tesztelve */
ST[0].nSiteList[168]= 9121;  ST[0].nLinkList[168]	=RADIO1_3;	/* RADIO1_1	 	Cs�kber�ny 0146_2                   RAK */     /* tesztelve */
ST[0].nSiteList[169]= 9122;  ST[0].nLinkList[169]	=RADIO1_4;	/* RADIO1_4	 	Szabadbaty�n 09/32                  SZAB */     /* tesztelve */
 


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
/* K1 : ZEG, IK, CELL, TAT, SZ�L, LEN */
ST[0].sRAD_K1[0].nRtuNumRad = 54; /*63*/
ST[0].sRAD_K1[0].nIndx[0]=11; 
ST[0].sRAD_K1[0].nIndx[1]=12; 
ST[0].sRAD_K1[0].nIndx[2]=13; 
ST[0].sRAD_K1[0].nIndx[3]=14; 
ST[0].sRAD_K1[0].nIndx[4]=15; 
ST[0].sRAD_K1[0].nIndx[5]=16; 
ST[0].sRAD_K1[0].nIndx[6]=22; 
ST[0].sRAD_K1[0].nIndx[7]=23; 
ST[0].sRAD_K1[0].nIndx[8]=24; 
ST[0].sRAD_K1[0].nIndx[9]=45; 
ST[0].sRAD_K1[0].nIndx[10]=48; 
ST[0].sRAD_K1[0].nIndx[11]=62; 
ST[0].sRAD_K1[0].nIndx[12]=63; 
ST[0].sRAD_K1[0].nIndx[13]=68; 
ST[0].sRAD_K1[0].nIndx[14]=71; 
ST[0].sRAD_K1[0].nIndx[15]=78; 
ST[0].sRAD_K1[0].nIndx[16]=79; 
ST[0].sRAD_K1[0].nIndx[17]=82; 
ST[0].sRAD_K1[0].nIndx[18]=83; 
ST[0].sRAD_K1[0].nIndx[19]=85; 
ST[0].sRAD_K1[0].nIndx[20]=86; 
ST[0].sRAD_K1[0].nIndx[21]=91; 
ST[0].sRAD_K1[0].nIndx[22]=92; 
ST[0].sRAD_K1[0].nIndx[23]=98;
ST[0].sRAD_K1[0].nIndx[24]=100;
ST[0].sRAD_K1[0].nIndx[25]=101;
ST[0].sRAD_K1[0].nIndx[26]=103;
ST[0].sRAD_K1[0].nIndx[27]=104;
ST[0].sRAD_K1[0].nIndx[28]=105;
ST[0].sRAD_K1[0].nIndx[29]=109;
ST[0].sRAD_K1[0].nIndx[30]=116;
ST[0].sRAD_K1[0].nIndx[31]=119;
ST[0].sRAD_K1[0].nIndx[32]=121;
ST[0].sRAD_K1[0].nIndx[33]=122;
ST[0].sRAD_K1[0].nIndx[34]=123;
ST[0].sRAD_K1[0].nIndx[35]=126;
ST[0].sRAD_K1[0].nIndx[36]=127;
ST[0].sRAD_K1[0].nIndx[37]=128;
ST[0].sRAD_K1[0].nIndx[38]=133;
ST[0].sRAD_K1[0].nIndx[39]=134;
ST[0].sRAD_K1[0].nIndx[40]=135;
ST[0].sRAD_K1[0].nIndx[41]=136;
ST[0].sRAD_K1[0].nIndx[42]=141;
ST[0].sRAD_K1[0].nIndx[43]=142;
ST[0].sRAD_K1[0].nIndx[44]=144;
ST[0].sRAD_K1[0].nIndx[45]=145;
ST[0].sRAD_K1[0].nIndx[46]=146;
ST[0].sRAD_K1[0].nIndx[47]=147;
ST[0].sRAD_K1[0].nIndx[48]=148;
ST[0].sRAD_K1[0].nIndx[49]=154;
ST[0].sRAD_K1[0].nIndx[50]=155;
ST[0].sRAD_K1[0].nIndx[51]=156;
ST[0].sRAD_K1[0].nIndx[52]=163;
ST[0].sRAD_K1[0].nIndx[53]=166;
 


/* K2 : SZOM, MOS, CSEP, GALL, SZAB*/
ST[0].sRAD_K2[0].nRtuNumRad = 31; /*76*/
ST[0].sRAD_K2[0].nIndx[0]=7;
ST[0].sRAD_K2[0].nIndx[1]=20;
ST[0].sRAD_K2[0].nIndx[2]=21;
ST[0].sRAD_K2[0].nIndx[3]=25;
ST[0].sRAD_K2[0].nIndx[4]=26;
ST[0].sRAD_K2[0].nIndx[5]=27;
ST[0].sRAD_K2[0].nIndx[6]=28;
ST[0].sRAD_K2[0].nIndx[7]=29;
ST[0].sRAD_K2[0].nIndx[8]=32;
ST[0].sRAD_K2[0].nIndx[9]=43;
ST[0].sRAD_K2[0].nIndx[10]=44;
ST[0].sRAD_K2[0].nIndx[11]=46;
ST[0].sRAD_K2[0].nIndx[12]=47;
ST[0].sRAD_K2[0].nIndx[13]=54;
ST[0].sRAD_K2[0].nIndx[14]=55;
ST[0].sRAD_K2[0].nIndx[15]=59;
ST[0].sRAD_K2[0].nIndx[16]=60;
ST[0].sRAD_K2[0].nIndx[17]=69;
ST[0].sRAD_K2[0].nIndx[18]=73;
ST[0].sRAD_K2[0].nIndx[19]=80;
ST[0].sRAD_K2[0].nIndx[20]=84;
ST[0].sRAD_K2[0].nIndx[21]=96;
ST[0].sRAD_K2[0].nIndx[22]=102;
ST[0].sRAD_K2[0].nIndx[23]=117;
ST[0].sRAD_K2[0].nIndx[24]=132;
ST[0].sRAD_K2[0].nIndx[25]=143;
ST[0].sRAD_K2[0].nIndx[26]=149;
ST[0].sRAD_K2[0].nIndx[27]=150;
ST[0].sRAD_K2[0].nIndx[28]=152;
ST[0].sRAD_K2[0].nIndx[29]=164;
ST[0].sRAD_K2[0].nIndx[30]=169;




/* K3 : SZVAR, ORNY, IG, MOR, KOF, BAR, TAT, KOM */
ST[0].sRAD_K3[0].nRtuNumRad = 78; /*55*/
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
ST[0].sRAD_K3[0].nIndx[18]=36;
ST[0].sRAD_K3[0].nIndx[19]=37;
ST[0].sRAD_K3[0].nIndx[20]=38;
ST[0].sRAD_K3[0].nIndx[21]=39;
ST[0].sRAD_K3[0].nIndx[22]=40;
ST[0].sRAD_K3[0].nIndx[22]=41;
ST[0].sRAD_K3[0].nIndx[23]=42;
ST[0].sRAD_K3[0].nIndx[24]=56;
ST[0].sRAD_K3[0].nIndx[25]=57;
ST[0].sRAD_K3[0].nIndx[26]=58;
ST[0].sRAD_K3[0].nIndx[27]=61;
ST[0].sRAD_K3[0].nIndx[28]=64;
ST[0].sRAD_K3[0].nIndx[29]=65;
ST[0].sRAD_K3[0].nIndx[30]=66;
ST[0].sRAD_K3[0].nIndx[31]=67;
ST[0].sRAD_K3[0].nIndx[32]=70;
ST[0].sRAD_K3[0].nIndx[33]=72;
ST[0].sRAD_K3[0].nIndx[34]=74;
ST[0].sRAD_K3[0].nIndx[35]=75;
ST[0].sRAD_K3[0].nIndx[36]=76;
ST[0].sRAD_K3[0].nIndx[37]=77;
ST[0].sRAD_K3[0].nIndx[38]=81;
ST[0].sRAD_K3[0].nIndx[39]=87;
ST[0].sRAD_K3[0].nIndx[40]=88;
ST[0].sRAD_K3[0].nIndx[41]=89;
ST[0].sRAD_K3[0].nIndx[42]=90;
ST[0].sRAD_K3[0].nIndx[43]=93;
ST[0].sRAD_K3[0].nIndx[44]=94;
ST[0].sRAD_K3[0].nIndx[45]=95;
ST[0].sRAD_K3[0].nIndx[46]=97;
ST[0].sRAD_K3[0].nIndx[47]=100;
ST[0].sRAD_K3[0].nIndx[48]=105;
ST[0].sRAD_K3[0].nIndx[49]=106;
ST[0].sRAD_K3[0].nIndx[50]=107;
ST[0].sRAD_K3[0].nIndx[51]=108;
ST[0].sRAD_K3[0].nIndx[52]=110;
ST[0].sRAD_K3[0].nIndx[53]=99;
ST[0].sRAD_K3[0].nIndx[54]=111;
ST[0].sRAD_K3[0].nIndx[55]=112;
ST[0].sRAD_K3[0].nIndx[56]=113;
ST[0].sRAD_K3[0].nIndx[57]=115;
ST[0].sRAD_K3[0].nIndx[58]=118;
ST[0].sRAD_K3[0].nIndx[59]=120;
ST[0].sRAD_K3[0].nIndx[60]=124;
ST[0].sRAD_K3[0].nIndx[61]=125;
ST[0].sRAD_K3[0].nIndx[62]=129;
ST[0].sRAD_K3[0].nIndx[63]=130;
ST[0].sRAD_K3[0].nIndx[64]=131;
ST[0].sRAD_K3[0].nIndx[65]=137;
ST[0].sRAD_K3[0].nIndx[66]=138;
ST[0].sRAD_K3[0].nIndx[67]=139;
ST[0].sRAD_K3[0].nIndx[68]=140;
ST[0].sRAD_K3[0].nIndx[69]=151;
ST[0].sRAD_K3[0].nIndx[70]=153;
ST[0].sRAD_K3[0].nIndx[71]=157;
ST[0].sRAD_K3[0].nIndx[72]=159;
ST[0].sRAD_K3[0].nIndx[73]=160;
ST[0].sRAD_K3[0].nIndx[74]=161;
ST[0].sRAD_K3[0].nIndx[75]=165;
ST[0].sRAD_K3[0].nIndx[76]=167;
ST[0].sRAD_K3[0].nIndx[77]=168;
      

/*RST[0].sLINK RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 4;
ST[0].sLIN[0].nIndx[0] =17;
ST[0].sLIN[0].nIndx[1] =53;
ST[0].sLIN[0].nIndx[2] =114;
ST[0].sLIN[0].nIndx[3] =162;



} /* end fnSetComPar()*/

