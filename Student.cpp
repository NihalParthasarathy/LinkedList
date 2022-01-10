#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void Student::setID(int newID) {
  id = newID;
}
void Student::setFirst(char* newFirst) {
  strcpy(first, newFirst);
}
void Student::setLast(char* newLast) {
  strcpy(last, newLast);
}
void Student::setGPA(float newGPA) {
  gpa = newGPA;
}



