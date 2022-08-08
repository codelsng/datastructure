#include <iostream>
#define MAX 100
using namespace std;

typedef struct edgenode {
    int adjvex;
    int weight;
    struct edgenode * nextarc;
}arcnode;

typedef struct vexnode {
    char data[MAX];
    arcnode * firstarc;
}vheadnode;

typedef struct {
    int n, e;
    vheadnode adjlist[MAX];
}adjgraph;

void creategraph(adjgraph * & g, int a[][MAX], int n, int e) {
    g = (adjgraph*)malloc(sizeof(adjgraph));
    g->n = n;
    g->e = e;
    for (int i = 0; i < n; i++)
        g->adjlist[i].firstarc = NULL;
    
    for (int i = 0; i < g->n; i++)
        for (int j = 0; j < g->n; j++)
            if (a[i][j] > 0)
            {
                arcnode* p = (arcnode*)malloc(sizeof(arcnode));
                p->adjvex = j;
                p->weight = a[i][j];
                p->nextarc = g->adjlist[i].firstarc;
                g->adjlist[i].firstarc = p;
            }

}

int visited[MAX];

void dfs(adjgraph* g, int v)
{
    cout << v;
    visited[v] = 1;
    arcnode* p = g->adjlist[v].firstarc;
    while (p != NULL)
    {
        int w = p->adjvex;
        if (visited[w] == 0)
            dfs(g, w);
        p = p->nextarc;
    }
}


int main(void)
{
    int n, e, a[MAX][MAX];
    cin >> n;
    cin >> e;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    adjgraph * g;
    creategraph(g, a, n, e);
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    dfs(g, 0);
    return 0;
}