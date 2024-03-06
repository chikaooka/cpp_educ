#include <iostream>
#include <string>
#include <vector>

#include "include/human.hpp"
#include "include/lab.hpp"
#include "include/student.hpp"

using namespace std;

int main() {
  Lab westlab("westlab", "25-501");
  Student chikaoka("chikaoka", male, "network");
  
  westlab.register_new_student(chikaoka);

  westlab.show();
  return 0;
}
