//To find the shortest distance using dijkstra's algorithm

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

int dijkstra(int source,int dest,int adj[][n])
{
    int dist[n],prev[n],selected[n]={0},m,min,start,d,i,j;
    char path[n];
    init(adj);
    for(i=1;i<n;i++)
    {
        dist[i]=infinity;
        prev[i]=-1;
    }
    start=source;
    selected[start]=1;
    dist[start]=0;
    SIT_distances(adj);
    while(selected[dest]==0)
    {
        min=infinity;
        m=0;
        for(i=1;i<n;i++)
        {
            d=dist[start]+adj[start][i];
            if(d<dist[i] && selected[i]==0)
            {
                dist[i]=d;
                prev[i]=start;
            }
            if(min>dist[i] && selected[i]==0)
            {
                min=dist[i];
                m=i;
            }
        }
        start=m;
        selected[start]=1;
    }
    start=dest;
    j=0;
    while(start!=-1)
    {
        path[j++]=start+64;
        start=prev[start];
    }
    path[j]='\0';
    shortest_path(path);
    return dist[dest];
}
