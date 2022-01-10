#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student {
public:
  char first[20];
  char last[20];
  int id;
  float gpa;

  void setID(int newID);
  void setFirst(char* newFirst);
  void setLast(char* newLast);
  void setGPA(float newGPA);
};
#endif
