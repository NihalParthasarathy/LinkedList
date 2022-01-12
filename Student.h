//Nihal Parthasarathy
//1/12/2022
//This code shows that the Node.cpp and the Node.h file work


//Definitons
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student {
public:
  //Initilizes varubles
  char first[20];
  char last[20];
  int id;
  float gpa;

  //Function protoypes
  void setID(int newID);
  void setFirst(char* newFirst);
  void setLast(char* newLast);
  void setGPA(float newGPA);
  void printStudent();
};
#endif
