#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student {
  char first[20];
  char last[20];
  int id;
  float gpa;

  int setID(newID);
  char* setFirst(newFirst);
  char* setLast(newLast);
  float setGPA(newGPA);
}
#endif
