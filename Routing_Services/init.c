//To initialize the adjacency matrix

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

void init(int adj[][n])
{
    int i,j;
	for(i=1;i<n;i++)
        for(j=1;j<n;j++)
            adj[i][j]=infinity;
}
