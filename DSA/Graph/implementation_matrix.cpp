#include <iostream>
using namespace std;

class Graph {
  private:
  bool** adjMatrix;
  int numVertices;

   public:
  // Initialize the matrix to zero
  Graph(int numVertices) {
    this->numVertices = numVertices;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++) {
      adjMatrix[i] = new bool[numVertices];
      for (int j = 0; j < numVertices; j++)
        adjMatrix[i][j] = false;
    }
  }

  // Add edges
  void addEdge(int i, int j) {
      if((i>=0 && i<numVertices)&&(j>=0 && j<numVertices))
         { 
             adjMatrix[i][j] = true;
            adjMatrix[j][i] = true;
         }
      else{
        cout<<"Enter a valid edge case"<<endl;
    }
  }

  // Remove edges
  void removeEdge(int i, int j) {
      if((i>=0 && i<numVertices)&&(j>=0 && j<numVertices))
        {
            adjMatrix[i][j] = false;
            adjMatrix[j][i] = false;
        }
        
    else{
        cout<<"Enter a valid edge case"<<endl;
    }
  }

  // Print the martix
  void toString() {
    for (int i = 0; i < numVertices; i++) {
      cout << i << " : ";
      for (int j = 0; j < numVertices; j++)
        cout << adjMatrix[i][j] << " ";
      cout << "\n";
    }
  }
};

int main() {
  Graph g(4);

  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(3, 3);

  g.toString();
}