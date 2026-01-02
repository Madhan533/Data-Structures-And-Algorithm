//Undirected Graph Implementation Using Array (Adjacency Matrix)

#include <stdio.h>

#define MAX 10

int adjMatrix[MAX][MAX];

void addEdge(int u,int v)
{
    adjMatrix[u][v]=1;
    adjMatrix[v][u]=1;
}

void printGraph(int vertices)
{
    printf("Adjacency Matrix : \n");
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            printf("%d ",adjMatrix[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int edge,vertices,u,v;
    printf("Enter number of vertices : ");
    scanf("%d",&vertices);
    printf("Enter number of edges : ");
    scanf("%d",&edge);
    for(int i=0;i<edge;i++)
    {
        printf("Enter edge (u v) : ");
        scanf("%d %d",&u,&v);
        addEdge(u,v);
    }
    printGraph(vertices);
}
