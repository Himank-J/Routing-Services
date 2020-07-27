//List of landmarks of SIT

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

void SIT_landmarks()
{
    printf("\n\nList of major landmarks of SIT to visit:\n");
    printf("1) Hostel-A\n");
    printf("2) Hostel-B\n");
    printf("3) Hostel-C\n");
    printf("4) Hostel-D\n");
    printf("5) Hostel-E\n");
    printf("6) Hostel-F\n");
    printf("7) Hostel-G\n");
    printf("8) Hostel-H\n");
    printf("9) Hostel-S\n");
    printf("10) Xerox-Shop\n");
    printf("11) Symbus\n");
    printf("12) Mess\n");
    printf("13) Rangoli\n");
    printf("14) Coffee-Stop\n");
    printf("15) Academic-Block\n");
    printf("16) Main-Gate\n");
    printf("17) SUHRC-Boys-Hostel\n");
    printf("18) SUHRC-Girls-Hostel\n");
}
