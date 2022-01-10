#include <iostream>
#include "Node.h"

Node::Node(Student* newstudent) {
  next = NULL;
  student = newstudent;
}

Node* Node::getNext() {
  return next;
}

Student* Node::getStudent() {
  return student;
}

void setNext(Node* newnext) {
  next = newnext;
}
Node::~Node() {
  delete student;
  next = NULL;
}
/*void Node::setStudent(Student* newstudent) {
  student 
  /*student->setID(id);
  student->setGPA(gpa);
  student->setFirst(first);
  student->setLast(last);
  }*/
