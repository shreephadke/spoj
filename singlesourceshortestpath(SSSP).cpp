#include <iostream>
#include <vector>

using namespace std;

vector<int>arr[100001];
int visited[100001];
int dist[100001];

void dfs(int node, int d)
{
    visited[node] = 1;
    dist[node] = d;
    for (int child : arr[node])
        if (!visited[node])
            dfs(child, dist[node]++);
}

int main()
{
    int numNodes, numEdges, u, v;
    cin >> numNodes;
    if (numNodes < 2)
        return 0;
    for (int i = 0; i < numNodes - 1; i++)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    dfs(1, 0);

    cin >> numEdges;
    int ans = -1, min = 100000;
    while (numEdges--)
    {
        int destination;
        cin >> destination;
        if (dist[destination] < min)
            min = dist[destination], ans = destination;
        else if (dist[destination] == min && destination < ans)
            ans = destination;
    }

    cout << ans << endl;


}
