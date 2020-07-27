//Returns destination values

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

int destinationval(char d[])
{
    int x=0;
    if(strcompare_case_insensitive(d,"Hostel-A"))   x=1;
    else if(strcompare_case_insensitive(d,"Hostel-B"))  x=2;
    else if(strcompare_case_insensitive(d,"Hostel-C"))  x=3;
    else if(strcompare_case_insensitive(d,"Hostel-D"))  x=4;
    else if(strcompare_case_insensitive(d,"Hostel-E"))  x=5;
    else if(strcompare_case_insensitive(d,"Hostel-F"))  x=6;
    else if(strcompare_case_insensitive(d,"Hostel-G"))  x=7;
    else if(strcompare_case_insensitive(d,"Hostel-H"))  x=8;
    else if(strcompare_case_insensitive(d,"Hostel-S"))  x=9;
    else if(strcompare_case_insensitive(d,"Xerox-Shop"))   x=10;
    else if(strcompare_case_insensitive(d,"Symbus"))    x=11;
    else if(strcompare_case_insensitive(d,"Mess"))  x=12;
    else if(strcompare_case_insensitive(d,"Rangoli"))   x=13;
    else if(strcompare_case_insensitive(d,"Coffee-Stop"))   x=14;
    else if(strcompare_case_insensitive(d,"Academic-Block"))   x=15;
    else if(strcompare_case_insensitive(d,"Main-Gate")) x=16;
    else if(strcompare_case_insensitive(d,"SUHRC-Boys-Hostel")) x=17;
    else if(strcompare_case_insensitive(d,"SUHRC-Girls-Hostel")) x=18;
    else if(strcompare_case_insensitive(d,"Academic-block-gate")) x=19;
    else if(strcompare_case_insensitive(d,"S1")) x=20;
    else if(strcompare_case_insensitive(d,"S8")) x=21;
    else if(strcompare_case_insensitive(d,"Ds-lab")) x=22;
    else if(strcompare_case_insensitive(d,"MT-lab")) x=23;
	else if(strcompare_case_insensitive(d,"Amphithreatre")) x=24;
	else if(strcompare_case_insensitive(d,"Stairs")) x=25;
	else if(strcompare_case_insensitive(d,"Stairs to Amphithreatre")) x=26;
    else
        printf("The entered destination node is not available\n");
    return x;
}
