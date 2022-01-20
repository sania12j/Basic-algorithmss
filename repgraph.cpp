#include "bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep (i, a, b) for (int i = a; i < b; i++)

#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5 + 2, MOD = 1e9 + 7;

// representation of graphs :-
signed main()
{
    // n= no. of nodes , m= no. of edges
    int n, m;
    cin >> n >> m;

    // 2d vector
    vvi adjm(n + 1, vi(n + 1, 0));

    rep(i, 0, m);
    {
        // 2 way edges :-
        int x, y;
        cin >> x >> y;

        // mark edge with 1
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    cout << "Adjacency matrix of above graph is given by :" << endl;

    // matrix o/p
    rep(i, 1, n + 1)
    {
        rep(j, 1, n + 1)
                cout
            << adjcency[i][j] << "";
        cout << endl;
    }

    // if we want to check edge b/w:-
    if (adjm[3][7] == 1)

        cout << "there is a edge between 3 & 7";

    else
    {
        cout << "no edge" << endl;
    }

    // ADJACENCY LIST :-
    vi adj[N];

    rep(i, o, m)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << "Adjacency list of above graph is given by:" rep(i, 1, n + 1)
    {
        cout << i << "-> ";
        
        vector<int> :: iterator it;
    for (it= adj[i].begin(); it!=adj[i].end(); it++)
    {
            cout << *it << " " << endl;
    }
    }
    return 0;
}
