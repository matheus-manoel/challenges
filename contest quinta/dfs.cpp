#include <bits/stdc++.h>
using namespace std;

const int N = 26;

vector<int> adj[N];
vector<int> gru[N];
int n, m, aux[N];

void dfs(int p, int g)
{
    aux[p] = g;
    gru[g].push_back(p);
    for (int i = 0; i < adj[p].size(); ++i)
    {
        int q = adj[p][i];
        if (aux[q] == -1)
        {
            dfs(q, g);
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    
    for (int c = 1; c <= t; ++c)
    {
        printf("Case #%d:\n", c);

        scanf("%d%d", &n, &m);

        for (int i = 0; i < n; ++i)
        {   
            adj[i].clear();
            gru[i].clear();
            aux[i] = -1;
        }

        while (m--)
        {
            char a, b;
            scanf(" %c %c ", &a, &b);
            a -= 'a';
            b -= 'a';
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int cnt = 0;

        for (int i = 0; i < n; ++i)
        {
            if (aux[i] == -1)
            {
                dfs(i, i); 
                ++cnt;
                sort(gru[i].begin(), gru[i].end());
                for (int j = 0; j < gru[i].size(); ++j)
                    printf("%c,", gru[i][j]+'a');
                printf("\n");
            }
        }
        
        printf("%d connected components\n\n", cnt);
    }
}