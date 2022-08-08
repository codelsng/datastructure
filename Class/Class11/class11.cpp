#include <iostream>
#include <bits/stdc++.h>
#define MAX 100
using namespace std;

typedef struct vertex {
    int adjvex;
    char data[MAX];
}vtype;

typedef struct graph {
    int n;
    int e;
    vtype vexs[MAX];
    vtype edges[MAX][MAX];
}matgrapeh;

void CreateGraph(matgrapeh &g, int arr[MAX][MAX], int num, int e);
void DisplayGraph(matgrapeh g);
int main(void)
{
    matgrapeh g;
    int arr[MAX][MAX];
    int num = 0;
    int e = 0;
    cout << "Enter arguments for the array:" << endl;
    cin >> num;
    cin >> e;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> arr[i][j];
        }
    }

    CreateGraph(g, arr, num, e);
    DisplayGraph(g);

   return 0;
}

void CreateGraph(matgrapeh &g, int arr[MAX][MAX], int num, int e) {
    g.n = num;
    g.e = 3;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            g.edges[i][j] = arr[i][j];
        }
    }
}

void DisplayGraph(matgrapeh g) {
    for (int i = 0; i < g.n; i++)
    {
        for (int j = 0; j < g.n; j++)
        {
            if (g.edges[i][j] != -1)
                printf("%d", g.edges[i][j]);
                // cout << g.edges[i][j] << endl;
            else
                cout << "--" << endl;
        }
    }
}