#include <iostream>
#include "Node.h"

Node::Node(Student*) {
  next = NULL;
}

Node* Node::getNext() {
  return next;
}

Student* Node::getStudent() {
  
}

void setNext(Node* newnext) {
  next = newnext;
}
Node::~Node() {
  delete &value;
  next = NULL;
}
