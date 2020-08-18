#include <iostream>
#include <cstring>
#include <list>

using namespace std;

class Graph
{
    int numNodes; // number of vertices
    list<int> *adj; // pointer to an array containing adjacency lists
    bool isCyclicUtil(int v, bool visited[], int parent);
public:
    Graph(int numNodes);   // constructor
    void addEdge(int v, int w);   // adds edge to the graph using adjacency list
    bool isCyclic();   // returns true if there is a cycle
};

// constructor method that creates a graph with numNodes vertices
Graph::Graph(int numNodes)
{
    this->numNodes = numNodes;
    adj = new list<int>[numNodes];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // add w to the list at index v
    adj[w].push_back(v); // add v to the list at index w
}

// detects if graph contains a cycle or not using recursion (helper function of isCyclic)
bool Graph::isCyclicUtil(int v, bool visited[], int parent)
{
    // Mark the current node as visited
    visited[v] = true;

    // iterate over adjacency list
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); i++)
    {
        // if an adjacent vertex is not visited, then call the function again
        if (!visited[*i])
        {
           if (isCyclicUtil(*i, visited, v))
              return true;
        }

        // else if there is an adjacent vertext that has been visited and is NOT a parent
        // of the current vertex, there is a cycle
        else if (*i != parent)
           return true;
    }
    return false;
}

bool Graph::isCyclic()
{
    // Mark all the vertices as not visited and not part of recursion
    // create a pointer to an array containing visited information
    bool *visited = new bool[numNodes];
    // initialize all values in array to zero
    for (int i = 0; i < numNodes; i++)
        visited[i] = false;

    // Call helper function
    for (int u = 0; u < numNodes; u++)
        if (!visited[u]) // add u to visited and check adjacent vertices if u has not been visited
          if (isCyclicUtil(u, visited, -1))
             return true;

    return false;
}

int main()
{
    // make sure number of edges = number of nodes - 1 (DONE)
    // make sure graph has no isolated vertices/make sure graph is connected (DONE)
    // make sure graph is not cyclic (DFS) (DONE)

    int numNodes, numEdges, nodeU, nodeV;

    // first input line: # of Nodes # of Edges
    cin >> numNodes;
    cin >> numEdges;

    int edges = numEdges;

    // create Graph
    Graph g1(numNodes);

    // create empty adjacency matrix
    int arr [numNodes][numNodes];
    memset(arr, 0, sizeof(arr));

    while (edges--)
    {
        cin >> nodeU;
        cin >> nodeV;
        // create adjacency matrix
        arr[nodeU-1][nodeV-1]++;
        arr[nodeV-1][nodeU-1]++;
        // create adjacency list
        g1.addEdge(nodeU-1, nodeV-1);
    }

    if (numEdges != numNodes - 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    // if any row in the adjacency matrix is filled with all Os,
    // the corresponding node has no connections and is an isolated vertex,
    // which does not allow a tree to be present
    int iso;
    for (int i = 0; i < numNodes; i++)
    {
        iso = 0;
        for (int j = 0; j < numNodes; j++)
        {
            if (arr[i][j] == 0)
                iso++;
        }
        if (iso == numNodes)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    // if there is a cycle, no it is not a tree, else yes
    g1.isCyclic()? cout << "NO" << endl: cout << "YES" << endl;
    return 0;


}
