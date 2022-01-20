// sequence or ordering of events is calles ad topoplogical sort
// topological sort are not unique.
// only directed acyclic graph can have topoplogical sorting
// cyclic graph cant have ts becoz it makes a cycle we cant understand from where we have to start

// code:-
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // count variable
    int cnt = 0;

    vector<vector<int>> adj_list(n);

    // vector for indegree
    vector<int> indeg(n, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        indeg[v]++;
    }

    queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        cout << x << " ";
        for (auto it : adj[x])
        {
            indeg[it]--;
            if (indeg[it] == 0)
                pq.push(it);
        }
    }

    return 0;
}
