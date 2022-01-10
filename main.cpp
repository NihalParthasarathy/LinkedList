#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void addStudent(Student*);

Node* head = NULL;

int main() {
  Student* s1;
  Student* s2;
  
  s1->setID(41232);
  s2->setID(31232);

  s1->setFirst("Jayden");
  s2->setFirst("Nikhil");

  s1->setLast("Hugand");
  s2->setLast("dsad");

  s1->setGPA(1.1);
  s1->setGPA(1.11);

  cout << s1->getStudent() << endl;
  head->setNext(new Node()); 
  head = head->getNext()->;
  cout << s2->getStudent() << endl;
  
  return 0;
}
