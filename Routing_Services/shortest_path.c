//For displaying the shortest path

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

void shortest_path(char str[])
{
    int i=strlen(str)-1,j=0,k=0;
    char ch;
    while(i>j)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i--;
        j++;
    }
    printf("\nShortest Path:\n\n");
    printf("\tStart-> ");
    while(str[k]!='\0')
    {
        switch(str[k])
        {
            case 'A':   printf("Hostel-A-> ");
                        break;
            case 'B':   printf("Hostel-B-> ");
                        break;
            case 'C':   printf("Hostel-C-> ");
                        break;
            case 'D':   printf("Hostel-D-> ");
                        break;
            case 'E':   printf("Hostel-E-> ");
                        break;
            case 'F':   printf("Hostel-F-> ");
                        break;
            case 'G':   printf("Hostel-G-> ");
                        break;
            case 'H':   printf("Hostel-H-> ");
                        break;
            case 'I':   printf("Hostel-S-> ");
                        break;
            case 'J':   printf("Xerox Shop-> ");
                        break;
            case 'K':   printf("Symbus-> ");
                        break;
            case 'L':   printf("Mess-> ");
                        break;
            case 'M':   printf("Rangoli-> ");
                        break;
            case 'N':   printf("Coffee-Stop-> ");
                        break;
            case 'O':   printf("Academic-Block-> ");
                        break;
            case 'P':   printf("Main-Gate-> ");
                        break;
            case 'Q':   printf("SUHRC Boys Hostel-> ");
                        break;
            case 'R':   printf("SUHRC Girls Hostel-> ");
                        break;
            case 'S':   printf("Academic Block Gate-> ");
                        break;
            case 'T':   printf("S1 / S2 / S3-> ");
                        break;
            case 'U':   printf("S7 / S8 / S9-> ");
                        break;
            case 'V':   printf("Ds-lab / Java-lab / OS-lab-> ");
                        break;
            case 'W':   printf("MT-lab-> ");
                        break;
            case 'X':   printf("Amphithreatre-> ");
                        break;
            case 'Y':   printf("Stairs-> ");
                        break;
            case 'Z':   printf("Stairs to Amphithreatre -> ");
                        break;
        }
        k++;
    }
    printf("End\n");
}
