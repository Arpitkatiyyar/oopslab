#include <iostream>
#include <vector>

using namespace std;

// Class to represent a graph using an adjacency list
class GraphList {
public:
    int V; // Number of vertices
    vector<vector<int>> adjList; // Adjacency list

    // Constructor
    GraphList(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    // Function to add an edge to the directed graph
    void addEdge(int u, int v) {
        adjList[u].push_back(v);
    }

    // Function to display the adjacency list
    void display() {
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int j : adjList[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }

    // Function to get the transpose of the graph
    GraphList getTranspose() {
        GraphList transpose(V);
        for (int u = 0; u < V; u++) {
            for (int v : adjList[u]) {
                transpose.addEdge(v, u); // Reverse the edge
            }
        }
        return transpose;
    }
};

// Class to represent a graph using an adjacency matrix
class GraphMatrix {
public:
    int V; // Number of vertices
    vector<vector<int>> adjMatrix; // Adjacency matrix

    // Constructor
    GraphMatrix(int vertices) {
        V = vertices;
        adjMatrix.resize(V, vector<int>(V, 0));
    }

    // Function to add an edge to the directed graph
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
    }

    // Function to display the adjacency matrix
    void display() {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to get the transpose of the graph
    GraphMatrix getTranspose() {
        GraphMatrix transpose(V);
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                transpose.adjMatrix[j][i] = adjMatrix[i][j]; // Reverse the edge
            }
        }
        return transpose;
    }
};

int main() {
    int V = 4;

    // Graph using Adjacency List
    cout << "Graph (Adjacency List):" << endl;
    GraphList gList(V);
    gList.addEdge(0, 1);
    gList.addEdge(0, 2);
    gList.addEdge(1, 2);
    gList.addEdge(2, 0);
    gList.addEdge(2, 3);

    cout << "Original Graph:" << endl;
    gList.display();

    GraphList gListTranspose = gList.getTranspose();
    cout << "\nTranspose of Graph:" << endl;
    gListTranspose.display();

    // Graph using Adjacency Matrix
    cout << "\nGraph (Adjacency Matrix):" << endl;
    GraphMatrix gMatrix(V);
    gMatrix.addEdge(0, 1);
    gMatrix.addEdge(0, 2);
    gMatrix.addEdge(1, 2);
    gMatrix.addEdge(2, 0);
    gMatrix.addEdge(2, 3);

    cout << "Original Graph:" << endl;
    gMatrix.display();

    GraphMatrix gMatrixTranspose = gMatrix.getTranspose();
    cout << "\nTranspose of Graph:" << endl;
    gMatrixTranspose.display();

    return 0;
}
