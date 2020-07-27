//Distances between the landmarks of SIT

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define infinity 999
#define n 37

int dijkstra(int source,int dest,int adj[][n]);
int dijkstra1(int source,int dest,int adj[][n]);
void shortest_path(char str[]);
void shortest_path1(char str[]);
int strcompare_case_insensitive(char a[],char b[]);
void init(int adj[][n]);
void SIT_distances(int adj[][n]);
void SIT_landmarks();
void SIT_Academic_landmarks();
int sourceval(char s[]);
int destinationval(char d[]);
void function_handling(int x);
void exitservice(char ans[]);
int main();

void SIT_distances(int adj[][n])
{
    /* in metres (approximately)
           A      B      C     D     E      F     G      H     S     CCD   Sym   Mes   Ran   CS   Ab    MG    SBH    SBG   Acad_gate  S1    S8    DS  MT  AMPHI  Stair  AmphiS 
        A| 0      20     22    501   505    513   602   620    52    300   500   40    43    41   300   520   1020   1220  
     x= B| 20     0      23    50    700    50    650   750    40    290   490   43    42    45   310   500   1000   1200   
        C| 22     21     0     40    680    40    640   740    60    310   510   32    31    33   350   525   1025   1225   
        D| 501    50     40    0     20     20    50    70     350   550   350   20    50    52   345   365   865    1065	
        E| 505    700    680   20    0      40    20    20     730   70    400   73    200   70   390   410   910  	 1110   
        F| 513    49     40    20    40     0     30    49     100   550   50    21    350   20   50    59    559  	 759	
        G| 602    650    640   50    20     30    0     20     370   550   70    830   74    70   72    80    580  	 780    
        H| 620    750    740   70    20     50    20    0      800   120   450   120   230   120  450   465   965  	 1165   
        S| 52     40     60    350   730    100   370   800    0     250   250   94    93    91   251   263   763	 963	
       XS| 300    290    310   550   70     550   550   120    250   0     210   339   343   345  20    240   744	 944	
   Symbus| 500    490    510   350   400    50    70    450    250   210   0     350   352   351  51    20    520	 720	
     Mess| 40     43     32    20    70     20    830   120    90    340   350   0     2     10   350   370   870	 1070	
  Rangoli| 43     42     31    50    200    350   70    230    90    340   352   2     0     7    358   361   861	 1061	
       CS| 41     45     33    50    70     20    70    120    90    340   351   10    7     0    361   360   860	 1060	
    Acadb| 300    310    350   345   390    50    72    450    251   20    51    350   358   361  0     21    521	 721	
 MainGate| 520    500    525   365   410    59    80    465    263   240   20    370   361   360  21    0     500	 700	
 SUHRC BH|1020    1000   1025  865   910    559   580   965    763   744   520   870   861   860  521   500   0		 180	
 SUHRC GH|1220    1200   1225  1065  1110   759   780   1165   963   944   720   1070  1061  1060 721   700	  180	 0	   
Acad_gate|                                                                                                                 0        29    64   54  46    13      12      23
S1		 |                                                                                                                 29       0     35   25  17    20      1.0     38
S8		 |                                                               												   64       35    0    10  18    19      36      3
DS		 |																												   54       25    10   0   8     45      26      13
MT		 |                                                                                                                 46       17    18   8   0     47      18      21
Amphi	 |                                                                                                                 13       20    19   45  47    0       3       9
stairs   |                                                                                                                 28       16    52   42  34    19      0       29
Ampistair|                                                                                                                 23       54    8  29  37    10      13      0
						
    LIST
        1-hostel-a
        2-hostel-b
        3-hostel-c
        4-hostel-d
        5-hostel-e
        6-hostel-f
        7-hostel-g
        8-hostel-h
        9-hostel-s
        10-xerox shop
        11-symbus
        12-mess
        13-rangoli
        14-coffee stop
        15-academic block
        16-main gate
        17-SUHRC boys hostel
        18-SUHRC girls hostel
        19-academic gate
        20-S1
    */
    adj[1][1]=adj[2][2]=adj[3][3]=adj[4][4]=adj[5][5]=adj[6][6]=adj[7][7]=adj[8][8]=adj[9][9]=adj[10][10]=adj[11][11]=adj[12][12]=adj[13][13]=adj[14][14]=adj[15][15]=adj[16][16]=adj[17][17]=adj[18][18]=adj[19][19]=adj[20][20]=0;
    adj[1][2]=adj[2][1]=20;
    adj[1][3]=adj[3][1]=22;
    adj[1][4]=adj[4][1]=501;
    adj[1][5]=adj[5][1]=505;
    adj[1][6]=adj[6][1]=513;
    adj[1][7]=adj[7][1]=602;
    adj[1][8]=adj[8][1]=620;
    adj[1][9]=adj[9][1]=52;
    adj[1][10]=adj[10][1]=300;
    adj[1][11]=adj[11][1]=500;
    adj[1][12]=adj[12][1]=40;
    adj[1][13]=adj[13][1]=43;
    adj[1][14]=adj[14][1]=41;
    adj[1][15]=adj[15][1]=300;
    adj[1][16]=adj[16][1]=520;
    adj[1][17]=adj[17][1]=1020;
    adj[1][18]=adj[18][1]=1220;

    adj[2][3]=adj[3][2]=23;
    adj[2][4]=adj[4][2]=50;
    adj[2][5]=adj[5][2]=700;
    adj[2][6]=adj[6][2]=50;
    adj[2][7]=adj[7][2]=650;
    adj[2][8]=adj[8][2]=750;
    adj[2][9]=adj[9][2]=40;
    adj[2][10]=adj[10][2]=290;
    adj[2][11]=adj[11][2]=490;
    adj[2][12]=adj[12][2]=43;
    adj[2][13]=adj[13][2]=42;
    adj[2][14]=adj[14][2]=45;
    adj[2][15]=adj[15][2]=310;
    adj[2][16]=adj[16][2]=500;
    adj[2][17]=adj[17][2]=1000;
    adj[2][18]=adj[18][2]=1200;

    adj[3][4]=adj[4][3]=40;
    adj[3][5]=adj[5][3]=680;
    adj[3][6]=adj[6][3]=40;
    adj[3][7]=adj[7][3]=640;
    adj[3][8]=adj[8][3]=740;
    adj[3][9]=adj[9][3]=60;
    adj[3][10]=adj[10][3]=310;
    adj[3][11]=adj[11][3]=510;
    adj[3][12]=adj[12][3]=32;
    adj[3][13]=adj[13][3]=31;
    adj[3][14]=adj[14][3]=33;
    adj[3][15]=adj[15][3]=350;
    adj[3][16]=adj[16][3]=525;
    adj[3][17]=adj[17][3]=1025;
    adj[3][18]=adj[18][3]=1225;

    adj[4][5]=adj[5][4]=20;
    adj[4][6]=adj[6][4]=20;
    adj[4][7]=adj[7][4]=50;
    adj[4][8]=adj[8][4]=70;
    adj[4][9]=adj[9][4]=350;
    adj[4][10]=adj[10][4]=550;
    adj[4][11]=adj[11][4]=350;
    adj[4][12]=adj[12][4]=20;
    adj[4][13]=adj[13][4]=50;
    adj[4][14]=adj[14][4]=52;
    adj[4][15]=adj[15][4]=345;
    adj[4][16]=adj[16][4]=365;
    adj[4][17]=adj[17][4]=865;
	adj[4][18]=adj[18][4]=1065;


    adj[5][6]=adj[6][5]=40;
    adj[5][7]=adj[7][5]=20;
    adj[5][8]=adj[8][5]=20;
    adj[5][9]=adj[9][5]=730;
    adj[5][10]=adj[10][5]=70;
    adj[5][11]=adj[11][5]=400;
    adj[5][12]=adj[12][5]=73;
    adj[5][13]=adj[13][5]=200;
    adj[5][14]=adj[14][5]=70;
    adj[5][15]=adj[15][5]=390;
    adj[5][16]=adj[16][5]=410;
    adj[5][17]=adj[17][5]=910;
    adj[5][18]=adj[18][5]=1110;

    adj[6][7]=adj[7][6]=30;
    adj[6][8]=adj[8][6]=49;
    adj[6][9]=adj[9][6]=100;
    adj[6][10]=adj[10][6]=550;
    adj[6][11]=adj[11][6]=50;
    adj[6][12]=adj[12][6]=21;
    adj[6][13]=adj[13][6]=350;
    adj[6][14]=adj[14][6]=20;
    adj[6][15]=adj[15][6]=50;
    adj[6][16]=adj[16][6]=59;
    adj[6][17]=adj[17][6]=559;
    adj[6][18]=adj[18][6]=759;

    adj[7][8]=adj[8][7]=20;
    adj[7][9]=adj[9][7]=370;
    adj[7][10]=adj[10][7]=550;
    adj[7][11]=adj[11][7]=70;
    adj[7][12]=adj[12][7]=830;
    adj[7][13]=adj[13][7]=74;
    adj[7][14]=adj[14][7]=70;
    adj[7][15]=adj[15][7]=72;
    adj[7][16]=adj[16][7]=80;
	adj[7][17]=adj[17][7]=580;
	adj[7][18]=adj[18][7]=780;

    adj[8][9]=adj[9][8]=800;
    adj[8][10]=adj[10][8]=120;
    adj[8][11]=adj[11][8]=450;
    adj[8][12]=adj[12][8]=120;
    adj[8][13]=adj[13][8]=230;
    adj[8][14]=adj[14][8]=120;
    adj[8][15]=adj[15][8]=450;
    adj[8][16]=adj[16][8]=465;
	adj[8][17]=adj[17][8]=965;
	adj[8][18]=adj[18][8]=1165;
	
    adj[9][10]=adj[10][9]=250;
    adj[9][11]=adj[11][9]=250;
    adj[9][12]=adj[12][9]=94;
    adj[9][13]=adj[13][9]=93;
    adj[9][14]=adj[14][9]=91;
    adj[9][15]=adj[15][9]=251;
    adj[9][16]=adj[16][9]=263;
    adj[9][17]=adj[17][9]=763;
    adj[9][18]=adj[18][9]=963;

    adj[10][11]=adj[11][10]=210;
    adj[10][12]=adj[12][10]=339;
    adj[10][13]=adj[13][10]=343;
    adj[10][14]=adj[14][10]=345;
    adj[10][15]=adj[15][10]=20;
    adj[10][16]=adj[16][10]=240;
	adj[10][17]=adj[17][10]=744;
	adj[10][18]=adj[18][10]=944;
	
    adj[11][12]=adj[12][11]=350;
    adj[11][13]=adj[13][11]=352;
    adj[11][14]=adj[14][11]=351;
    adj[11][15]=adj[15][11]=51;
    adj[11][16]=adj[16][11]=20;
    adj[11][17]=adj[17][11]=520;
    adj[11][18]=adj[18][11]=720;

    adj[12][13]=adj[13][12]=2;
    adj[12][14]=adj[14][12]=10;
    adj[12][15]=adj[15][12]=350;
    adj[12][16]=adj[16][12]=370;
    adj[12][17]=adj[17][12]=870;
    adj[12][18]=adj[18][12]=1070;

    adj[13][14]=adj[14][13]=7;
    adj[13][15]=adj[15][13]=358;
    adj[13][16]=adj[16][13]=361;
    adj[13][17]=adj[17][13]=861;
    adj[13][18]=adj[18][13]=1061;

    adj[14][15]=adj[15][14]=361;
    adj[14][16]=adj[16][14]=360;
    adj[14][17]=adj[17][14]=860;
    adj[14][18]=adj[18][14]=1060;

    adj[15][16]=adj[16][15]=21;
    adj[15][17]=adj[17][15]=521;
    adj[15][18]=adj[18][15]=721;
    
    adj[16][17]=adj[16][17]=500;
    adj[16][18]=adj[16][18]=700;
    
    adj[17][18]=adj[18][17]=180;
    
    adj[19][20]=adj[20][19]=29;
    adj[19][21]=adj[21][19]=64;
    adj[19][22]=adj[22][19]=54;
    adj[19][23]=adj[23][19]=46;
    adj[19][24]=adj[24][19]=13;
    adj[19][25]=12; adj[25][19]=28;
    adj[19][26]=adj[26][19]=23;
    
    adj[20][21]=adj[21][20]=35;
    adj[20][22]=adj[22][20]=25;
    adj[20][23]=adj[23][20]=17;
    adj[20][24]=adj[24][20]=20;
    adj[20][25]=1; adj[25][20]=16;
    adj[20][26]=38; adj[26][20]=54;
    
    adj[21][22]=adj[22][21]=10;
    adj[21][23]=adj[23][21]=18;
    adj[21][24]=adj[24][21]=19;
    adj[21][25]=36; adj[25][21]=52;
    adj[21][26]=3; adj[26][21]=8;
    
    adj[22][23]=adj[23][22]=8;
    adj[22][24]=adj[24][22]=45;
    adj[22][25]=26; adj[25][22]=42;
    adj[22][26]=13; adj[26][22]=29;
    
    adj[23][24]=adj[24][23]=47;
    adj[23][25]=18; adj[25][23]=34;
    adj[23][26]=21; adj[26][23]=37;
    
    adj[24][25]=3; adj[25][24]=19;
    adj[24][26]=adj[26][24]=9;
    
    adj[25][26]=29; adj[26][25]=13;
    
}