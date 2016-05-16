#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>



template <class N>
class Node{
 private:
  Node* next;
    N data;
  Node(N data);
  template  <class T>
  friend class LinkedList;
};

// this is singly linked list
template <class T>
class LinkedList{

  
 private:
  //private fields
  Node<T>* head;

  Node<T>* current;

 public:
  LinkedList(){head = current = 0;}
  LinkedList(const LinkedList&); // coppy contructor
  ~LinkedList();
  void insert(T);
  void reset();
  T* get();
  void next();
  bool isNext();
  void print();
  void operator<<(T);
  void operator++(int);
  bool operator==(const LinkedList&);
  bool isEmpty();
  void removeCurrent();
  void replace(T,T);
  bool  remove();
  bool  remove(T);
};


//node stuff
template <class N>
Node<N>::Node(N data){
  this->data = data;
  this->next = NULL;
}

//copy contructor
template <class T>
LinkedList<T>::LinkedList(const LinkedList &list){
  this->head = current = NULL;
  Node<T>* elem = list.head;
  while(elem){
    this->insert(elem->data);
    elem = elem -> next;
  }
  
}


//destructor
template <class T>
LinkedList<T>::~LinkedList(){
  Node<T>* elem = head;
  Node<T>* temp;
  
  while(elem != NULL){
    temp = elem->next;
    // std::cout << "Deleting " << temp->data;
    delete elem;
    elem = temp;
  }
}

// methods~

template <class T>
void LinkedList<T>::insert(T data){
  Node<T>* new_node = new Node<T>(data);
  if (!head){ // so if our list is empty
    head =  new_node;
    head -> next = NULL;
    reset();
    
  }
  else{ // otherwise
    Node<T>* elem = head;
    while (elem-> next != NULL)
      elem = elem ->next;
    elem ->next = new_node;
    new_node-> next = NULL;
  }
}

template <class T>
void LinkedList<T>::reset(){
  current = head;
}

template <class T>
T* LinkedList<T>::get(){
  return &(current->data);

}

//remove from the end of the list
template <class T>
bool LinkedList<T>::remove(){
  
  if (head == NULL)
    return false;
  // our list has one element
    if (head->next == NULL){
      delete head;
      current = head = NULL;
      return true;


  }
  //remove from the end of the list
  Node<T>* elem = head;
  Node<T>* prev;
  while(elem -> next != NULL){
    prev = elem;
    elem = elem->next;
  }

  //do something when current is at the end of the list
  if (elem == current)
    current = prev;

   delete elem;
   prev -> next = NULL;
  return true;
}

// this remove gets rid of all instances of data
template <class T>
bool LinkedList<T>::remove(T data){
  if (head == NULL) // don't deal with an empty list
    return false;

  Node<T>* next_node;
  Node<T>* prev_node;
  Node<T>* elem;
  bool isFound = false;

  // check the head
  if (head -> data == data){
    next_node = head -> next;
    isFound = true;
    if (current == head)
      current = next_node;
    delete head;
    head = next_node;
  }


  // check the body 
  elem = head;
  prev_node = head;
  while(elem != NULL && elem->next != NULL){
 
    // std::cout <<"Looking at data: "<< elem->next->data << std::endl;
    if (elem->next->data == data){ // if we have a match
      isFound = true;
      next_node = elem->next->next;
      if (current == elem->next)
	current = next_node;
      delete elem->next;
      elem -> next = next_node;

    }
   

    // tail stuff
    if (elem->next == NULL)
      break;
     prev_node = elem;
    elem = elem -> next;  
  }
  // check the tail
 
  // std::cout << "\nTail might be: " << elem->data << std::endl;
  //std::cout << "Previous is: " << prev_node->data << std::endl;
  
  if (elem != NULL && elem -> data == data){
    isFound = true;
    if (current == elem)
      current = prev_node;
    delete  elem;
    prev_node->next = NULL;

  }
  return isFound;
}

template <class T>
void LinkedList<T>::replace(T old, T updated){
  Node<T>* elem = head;
  while (elem){
    if (elem->data == old){
      elem -> data = updated;
    }
    elem = elem->next;
  }
  // now replace the tail
}

//overloaded operators

template <class T>
void LinkedList<T>::operator <<(T data){
  insert(data);

}
template <class T>
void LinkedList<T>::next(){
    current = current -> next;
}
template <class T>
bool LinkedList<T>::isNext(){
  return current != NULL;
}

template <class T>
void LinkedList<T>::operator++(int i){
  next();
}
template <class T>
bool LinkedList<T>:: operator == (const LinkedList &list){
  Node<T>* elem_a = head;
  Node<T>* elem_b = list.head;
  while (elem_a && elem_b){
    if (!(elem_a->data == elem_b->data))
      return false;
    elem_a = elem_a->next;
    elem_b = elem_b->next;
  }
  return elem_a == elem_b;
}
template <class T>
void LinkedList<T>::print(){
  if (head == NULL)
    return;
  Node<T>* node = head;
  while(node){

    std::cout <<node -> data;
    if (node == current)
      std::cout << " <-";
    std::cout << "\n";
    node = node -> next;
  }
  return;
}

template <class T>
bool LinkedList<T>::isEmpty(){
  return head == NULL;

}

#endif
