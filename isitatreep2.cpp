#include <iostream>
#include <vector>

using namespace std;

vector<int>arr[10001];
int visited[10001];

void dfs (int node)
{
    visited[node] = 1;
    for (int child : arr[node])
        if (visited[child] == 0)
            dfs(child);
}

int main()
{
    int numNodes, numEdges, u, v;
    cin >> numNodes >> numEdges;

    for (int i = 1; i <= numEdges ;  i++)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    int cc = 0;

    for (int i = 1; i <= numNodes; i++)
    {
        if (visited[i] == 0)
            dfs(i), cc++;
    }

    if (numEdges == numNodes - 1 && cc == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
