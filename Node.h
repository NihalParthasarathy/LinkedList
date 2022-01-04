#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node {
  Node* getNext();
  Student* getStudent();
  void serNext(Node*);
  Node(Student*);
  ~Node();
}

#endif
