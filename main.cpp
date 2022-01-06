#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void addStudent(Student*);

Node* head = NULL;

int main() {
 
  cout << "enter year" << endl;
  cin >> temp;
  addYear(temp);
}

void addStudent(Student*) {
  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head.setStudent()
  }
}
