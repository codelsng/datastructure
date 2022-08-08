#include <iostream>
#define MAX 100
using namespace std;

typedef struct vertex {
    int adjvex;
    char data[MAX];
}vtype;

typedef struct graph {
    int n, e;
    vtype vexs[MAX];
    int edges[MAX][MAX];
}matgraph;

void creategraph(matgraph &g, int a[][MAX], int n, int e) {
    g.n = n;
    g.e = e;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            g.edges[i][j] = a[i][j];
}

int visited[MAX];
void dfs(matgraph g, int v) {
    cout << v << endl;
    visited[v] = 1;

    for (int i = 0; i < g.n; i++)
        if (g.edges[v][i] > 0 && visited[i] == 0)
            dfs(g, i);
}

int main(void)
{
    int n, e, a[MAX][MAX];
    cin >> n;
    cin >> e;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    matgraph g;
    creategraph(g, a, n, e);
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    dfs(g, 0);
    return 0;
}