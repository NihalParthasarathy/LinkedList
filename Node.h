#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"

class Node {
public:
  ~Node();
  Node* getNext();
  Student* getStudent();
  void setNext(Node* newNext);
  Node(Student*);
  void setStudent(int newID, char* newFirst, char* newLast, float newGPA);
  
private:
  Student* student;
  Node* next;
  
};

#endif
