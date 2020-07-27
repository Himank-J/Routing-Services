//To read the stored information from files

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

void function_handling(int x)
{
    FILE *fp;
    char c,d,y=x+32;
    fp=fopen("../trial/file.dat","r");
    fp=fopen("../trial/file.dat","r");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(0);
    }
    c=fgetc(fp);
    printf("\n");
    while(c!=EOF)
    {
        d=c;
        while(d==y)
        {
            c=fgetc(fp);
            printf("%c",c);
            if(c=='`')
                goto label;
        }
        c=fgetc(fp);
    }
    label:
    {
        rewind(fp);
        fclose(fp);
        printf("\n");
        printf("\n");
    }
}
