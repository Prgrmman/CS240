#ifndef BSTREE_H
#define BSTREE_H
#include <vector>

class BSTree{
private:
  class Node{
  public:
    int data;
    Node* left;
    Node* right;
    Node* parent; 

    Node(int);
  };
  Node* root; // the root of the tree
  bool insert(int, Node*);
  Node* findNode(int, Node*);
  void sortedArray(Node*, std::vector<int> &);
  void preOrder(Node*, std::vector<int> &) const;
  void clearTree(Node*);
  void removeLeaf(Node*);
  void shortCircuit(Node*);
  void promotion(Node*);
  Node* findMin(Node*);
  bool isLeaf(Node*);
public:
  BSTree();
  ~BSTree();
  BSTree(const BSTree &);
  bool empty();
 
  bool insert(int);
  bool find(int);
  bool remove(int);
  void sortedArray(std::vector<int>&);
};

#endif

