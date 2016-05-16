#include "BSTree.h"
#include <iostream>
#include <cstdlib>


BSTree::Node::Node(int data){
  this-> left = NULL;
  this-> right = NULL;
  this-> parent = NULL;
  this-> data = data;
  
}
BSTree::BSTree(){
  root = NULL;
}

BSTree::BSTree(const BSTree &old_tree) {
  root = NULL;
  std::vector<int> values;
  old_tree.preOrder(old_tree.root, values);
  for (std::vector<int>::iterator i = values.begin(); i < values.end(); i++){
    insert(*i);
  }  
}
// preorder function processes nodes on the first visit
// helper function to BSTree::BSTree(const BSTree &)
void BSTree::preOrder(Node* node, std::vector<int> &values) const{
  // write now this function is in the test phase
  if (node == NULL) return; // base case
  values.push_back(node->data);
  preOrder(node->left, values);
  preOrder(node->right, values);
}

BSTree::~BSTree(){
  clearTree(root); 
}

// returns true if the the tree is empty
bool BSTree::empty(){
  return root == NULL;
}

bool BSTree::isLeaf(Node* node){
  return node->left == NULL && node->right == NULL;
}

/*******************
 Insertion methods that add new values to tree
  public: bool insert(int val)
  private: bool insert(int val, Node* node)
********************/
bool BSTree::insert(int val){
  if (empty()){
    root = new Node(val);
    return true;
  }
  else{
   return insert(val, root);
  }
}

bool BSTree::insert(int val, BSTree::Node* current){
  
  if (val < current->data && current->left == NULL){
    BSTree::Node* new_node = new BSTree::Node(val);
    new_node-> parent = current;
    current -> left = new_node;
    return true;
  }
  if (val < current->data && current->left != NULL){
    return insert(val, current-> left);

  }
  if (val > current->data && current->right == NULL){
    BSTree::Node* new_node = new BSTree::Node(val);
    new_node-> parent = current;
    current -> right = new_node;
    return true;
  }
  if (val > current->data && current->right != NULL){
    return insert(val, current-> right);

  }
  return false;
}

// returns true if that value is in the tree
bool BSTree::find(int val){
  //check to see if it's in the root
  if (empty())
    return false;
  else if (root->data == val)
    return true;
  else
    return findNode(val, root) != NULL;
}
// returns a node pointer to the node containing the value
// otherwise return null
BSTree::Node* BSTree::findNode(int val, Node* current){
  if (current == NULL) // deal with NULL case 
    return NULL;

  if (current->data == val) // this means we found it
   return current;
  
  else if (val > current->data){
    if (current->right == NULL)
      return NULL;
    else
      return findNode(val, current->right);
  }

  else if (val < current->data){
    if (current-> left == NULL)
      return NULL;
    else
      return findNode(val, current->left);
  }
}

void BSTree::sortedArray(Node* n, std::vector<int> &values){
  if (n == NULL)
    return;
  sortedArray(n->left, values);
  values.push_back(n->data);
  sortedArray(n->right,values);

}

void BSTree::sortedArray(std::vector<int> &values){
  sortedArray(root, values);
  return;
}


// finds the the min of the a tree with root n
BSTree::Node* BSTree::findMin(Node* n){
  while(n->left != NULL)
    n = n->left;
  return n;
}

/***************************************
 * Methods associated with tree deletion:
 * clearTree
 * remove
 *  >removeLeaf
 *  >shortCircuit
 *  >promotion
 *
 ****************************************/

void BSTree::clearTree(Node* node){
  if (node == NULL) return; // base case
  clearTree(node->left);
  clearTree(node->right);
  removeLeaf(node);
}



bool BSTree::remove(int val){
  Node* node = findNode(val, root);
  if (!node) // if the node isn't in the tree, then we are done
    return false;

  else if (isLeaf(node))
    removeLeaf(node);
  else if (node->left == NULL || node -> right == NULL)
    shortCircuit(node);
  else
    promotion(node);
  return true;

}
// case to follow if the root has no children
void BSTree::removeLeaf(Node* n){
  if (n == root){ // special case where the root is the leaf
    root = NULL;
  }
  else if(n->parent->right == n){ // then I am the right child
    n->parent->right = NULL;
  }
  else// then I am the left child
    n->parent->left = NULL;
 
  delete n;
  return;
}

// case to follow if the node has one child
void BSTree::shortCircuit(Node* n){
 // special case if node is root
  if (n == root){
    if (n->right == NULL){
      root = n->left;
      root->parent == NULL;
      n->left->parent = root;
    }
    else{
      root = n->right;
      root->parent == NULL;
      n->right->parent = root;
    }
  }

  else if (n -> parent -> right == n) { // I am the right child
    if (n->right == NULL){
      n->parent->right = n->left;
      n->left->parent = n->parent; // experimental line
    }
    else{
      n->parent->right = n->right;
      n->right->parent = n->parent;
    }
  }
  else if (n->parent->left == n){ // then I am the left child
    if(n->right == NULL){
      n->parent->left = n->left;
      n->left->parent = n->parent;
    }
    else{
      n->parent->left = n->right;
      n->right->parent= n->parent;
    }
  }
  delete n;
  return;
}
// case that the Node has two children
void BSTree::promotion(Node *node){
  Node* temp = findMin(node->right);
  node->data = temp->data;
  if (isLeaf(temp)) 
    removeLeaf(temp);
  else
    shortCircuit(temp);
}

