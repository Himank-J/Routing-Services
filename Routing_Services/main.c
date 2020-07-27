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
int main()
{
    int dist,source,dest,adj[n][n];
    char s[30],d[30],ans[5],reply;
    printf("\n\n\tROUTING SERVICE FOR SYMBIOSIS INSTITUTE OF TECHNOLOGY, PUNE (SIT)\n");
    do
    {
        SIT_landmarks();
        printf("\nEnter the source node: ");
        scanf(" %99[^\n]",s);
        source=sourceval(s);
        if(source!=0)
            function_handling(source);
        else
            continue;
        printf("Enter the destination node: ");
        scanf(" %99[^\n]",d);
        dest=destinationval(d);
        if(dest>=1 && dest<=18)
            function_handling(dest);
            
        if(source!=0 && dest!=0)
        {
            dist=dijkstra(source,dest,adj);
            printf("\nThe Shortest Distance between the nodes: %d metres (approx)\n",dist);
        }
    	if(dest == 15)
    	{
			printf("\nWant to go inside? (Y/N): ");
    		scanf(" %c", &reply);
    		if(reply == 'Y')
    		{
    			do{
    			SIT_Academic_landmarks();
    			printf("\nEnter the source node: ");
        		scanf(" %99[^\n]",s);
        		source=sourceval(s);
        		
        		printf("Enter the destination node: ");
        		scanf(" %99[^\n]",d);
        		dest=destinationval(d);
        		
        		if(source!=0 && dest!=0)
        		{
            		dist=dijkstra(source,dest,adj);
            		printf("\nThe Shortest Distance between the nodes: %d metres (approx)\n",dist);
        		}
        		 exitservice(ans);
        	}while(1);
    		}
    	}
        exitservice(ans);
    }while(1);
    return 0;
}
