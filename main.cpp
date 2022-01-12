//Nihal Parthasarathy
//1/12/2022
//This code shows that the Node.cpp and the Node.h file work

//Inclusions
#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

//Decalring head
Node* head = NULL;

int main() {
  //Declaring student pointers
  Student* s1;
  Student* s2;

  //Sets both students Ids
  s1->setID(41232);
  s2->setID(31232);

  //Sets both students first name
  s1->setFirst("Jayden");
  s2->setFirst("Nikhil");

  //Sets both students last name
  s1->setLast("Hugand");
  s2->setLast("dsad");

  //Sets both students gpas
  s1->setGPA(1.1);
  s2->setGPA(1.9);

  //Makes head equal to new node
  head = new Node(s1);
  //Returns the student then prints what the student has inside of it
  head->getStudent()->printStudent();
  //Sets next to s2
  head->setNext(new Node(s2));
  //Makes head equal to next
  head = head->getNext();
  //Returns the student then prints what the student has inside of it
  head->getStudent()->printStudent();

  
  return 0;
}
