#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

void Student::setID(int newID) {//Sets id
  id = newID;
}
void Student::setFirst(char* newFirst) {//Sets first
  strcpy(first, newFirst);
}
void Student::setLast(char* newLast) {//Sets last
  strcpy(last, newLast);
}
void Student::setGPA(float newGPA) {//Sets gpa
  gpa = newGPA;
}
void Student::printStudent() {//Prints out what the student has
  cout << "First Name:" << first << " Last Name:" << last << " ID:" << id << " GPA:"<< gpa;
}


