#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "../include/human.hpp"
#include "../include/lab.hpp"
#include "../include/student.hpp"

Lab::Lab(string n, string p) {
  name = n;
  place = p;
}

void Lab::show() {
  cout << "\n======= " << name << " [" << place << "] =======" << endl;
  if (int(students.size() == 0)) {
    cout << "No members" << endl;
    return;
  }
  for (auto student : students) {
    student.show();
  }
}

void Lab::register_new_student(Student new_student) {
  students.push_back(new_student);
  cout << "registered new student : " << new_student.ret_name() << endl;
}

void Lab::leave(Student leave_student) {
  for (auto it = students.begin(); it != students.end(); it++) {
    if ((*it).ret_name() == leave_student.ret_name()) {
      students.erase(it);
      break;
    }
  }
}

void Lab::new_year() {
  // 所属している生徒の grade に1を足す
  // もし、 grade が4以上になったら、研究室名簿から消す
  for (auto it = students.begin(); it != students.end(); it++) {
    if ((*it).ret_grade() == 3) {
      alumni.push_back(*it);
    } else {
      (*it).upgrade();
    }
  }
  for (auto it = alumni.begin(); it != alumni.end(); it++) {
    leave(*it);
  }
}
