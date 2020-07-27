//Returns source values

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

int sourceval(char s[])
{
    int x=0;
    if(strcompare_case_insensitive(s,"Hostel-A"))   x=1;
    else if(strcompare_case_insensitive(s,"Hostel-B"))  x=2;
    else if(strcompare_case_insensitive(s,"Hostel-C"))  x=3;
    else if(strcompare_case_insensitive(s,"Hostel-D"))  x=4;
    else if(strcompare_case_insensitive(s,"Hostel-E"))  x=5;
    else if(strcompare_case_insensitive(s,"Hostel-F"))  x=6;
    else if(strcompare_case_insensitive(s,"Hostel-G"))  x=7;
    else if(strcompare_case_insensitive(s,"Hostel-H"))  x=8;
    else if(strcompare_case_insensitive(s,"Hostel-S"))  x=9;
    else if(strcompare_case_insensitive(s,"Xerox-Shop"))   x=10;
    else if(strcompare_case_insensitive(s,"Symbus"))    x=11;
    else if(strcompare_case_insensitive(s,"Mess"))  x=12;
    else if(strcompare_case_insensitive(s,"Rangoli"))   x=13;
    else if(strcompare_case_insensitive(s,"Coffee-Stop"))   x=14;
    else if(strcompare_case_insensitive(s,"Academic-Block"))   x=15;
    else if(strcompare_case_insensitive(s,"Main-Gate")) x=16;
    else if(strcompare_case_insensitive(s,"SUHRC-Boys-Hostel")) x=17;
    else if(strcompare_case_insensitive(s,"SUHRC-Girls-Hostel")) x=18;
    else if(strcompare_case_insensitive(s,"Academic-block-gate")) x=19;
    else if(strcompare_case_insensitive(s,"S1")) x=20;
    else if(strcompare_case_insensitive(s,"S8")) x=21;
    else if(strcompare_case_insensitive(s,"Ds-lab")) x=22;
    else if(strcompare_case_insensitive(s,"MT-lab")) x=23;
	else if(strcompare_case_insensitive(s,"Amphithreatre")) x=24;
	else if(strcompare_case_insensitive(s,"Stairs")) x=25;
	else if(strcompare_case_insensitive(s,"Stairs to Amphithreatre")) x=26;
    else
        printf("The entered source node is not avalable\n");
    return x;
}
