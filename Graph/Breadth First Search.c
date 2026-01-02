//Breadth First Search

#include<stdio.h>

#define MAX 3

int adjMatrix[MAX][MAX];
int visited[MAX];
int n;

void BFS(int start)
{
    int queue[MAX], front=0,rear=0;
    
    printf("%d ",start);
    visited[start]=1;
    queue[rear++]=start;
    
    while(front<rear)
    {
        int current=queue[front++];
        
        for(int i=0;i<n;i++)
        {
            if(adjMatrix[current][i]==1 && !visited[i])
            {
                printf("%d ",i);
                visited[i]=1;
                queue[rear++]=i;
            }
        }
    }
}

int main()
{
    int u,v,edges;
    printf("Enter no. of vertices : ");
    scanf("%d",&n);
    
    printf("Enter no. of edges : ");
    scanf("%d",&edges);
    
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        for(int j=0;j<n;j++)
        {
            adjMatrix[i][j]=0;
        }
    }
    
    for(int i=0;i<edges;i++)
    {
        printf("Enter edge (u v) : ");
        scanf("%d %d",&u,&v);
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }
    printf("BFS Traversal starting from vertex 0 : ");
    BFS(0);
    return 0;
}
