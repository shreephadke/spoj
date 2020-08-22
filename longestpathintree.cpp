#include <iostream>
#include <vector>

using namespace std;

vector<int>arr[10001];
int visited[10001];
int endpt;
int maximum = 0;

void dfs (int node, int d)
{
    // mark current node as visited
    visited[node] = 1;
    //cout << "d is " << d << endl;
    // set maximum to current distance if the current distance is greater than old maximum
    // set endpt to current node (new endpoint)
    if (d > maximum)
    {
        maximum = d;
        endpt = node;
    }
    // iterate over adjacency list at respective node; if one of the child nodes has not been visited, make a recursive call back to dfs with an incremented distance d
    for (int child : arr[node])
    {
        //cout << "visited child value = " << visited[child] << endl;
        if (visited[child] == 0)
        {
            dfs(child, d+1);
        }
    }
}

int main()
{
    // input and declarations
    int numNodes, numEdges, u, v;
    cin >> numNodes;
    numEdges = numNodes - 1;

    // create adjacency list
    while (numEdges--)
    {
        cin >> u >> v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }

    // initially set maximum to random negative value so it can be updated by actual maximum distance
    maximum = -1;
    // first instance of dfs in order to find one of the endpoints of the diameter
    dfs(1, 0);

    // clear visited array by setting all values back to 0 to prepare for second instance of dfs
    for (int i = 1; i <= numNodes; i++)
        visited[i] = 0;

    // reset maximum to random negative value
    maximum = -1;
    // second instance of dfs to find the distance between both endpoints of diameter of tree
    dfs(endpt, 0);

    cout << maximum << endl;
}
