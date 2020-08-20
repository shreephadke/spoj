#include <iostream>
#include <vector>

using namespace std;

// create adjacency list
vector<int> arr [100001];
// create visited array (1 = visited, 0 = not visited)
int visited [100001];

void dfs (int node)
{
    // mark current node as visited
    visited[node] = 1;
    // using a for-each loop, iterate over nodes in respective row of adjacency list
    // if adjacent node has not been visited, make a recursive call to dfs
    for (int child : arr[node])
        if (!visited[child])
            dfs(child);
}

int main ()
{
    int numNodes, numEdges, u, v;
    // accept number of nodes and number of edges as input --> e.g. 8 5 represents 8 nodes, 5 edges
    cin >> numNodes >> numEdges;

    // add each pair to the adjacency list to create an edge between them
    for (int i = 0; i < numEdges; i++)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    // count of connected components
    int count = 0;

    // if a node is not visited, call dfs function and increment connected component count by 1
    for (int i = 0; i < numNodes; i++)
        if (!visited[i])
            dfs(i), count++;

    cout << count << endl;
    return 0;
}
