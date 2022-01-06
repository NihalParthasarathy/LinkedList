#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node {
public:
  ~Node();
  Node* getNext();
  void setValue(Node* newvalue);
  Student* getStudent();
  void setNext(Node* newNext);
  Node(Student*);
  
private:
  Student* student;
  Node* next;
  
}

#endif
