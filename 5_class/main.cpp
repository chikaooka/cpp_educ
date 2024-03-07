#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "include/human.hpp"
#include "include/student.hpp"
#include "include/lab.hpp"

int main() {
  Lab westlab("westlab", "25-501");

  Student fukui("fukui", male, "network", 1);
  Student kozakai("kozakai", female, "agriculture", 1);
  Student nishikawa("nishikawa", male, "ai", 3);

  westlab.register_new_student(fukui);
  westlab.register_new_student(kozakai);
  westlab.register_new_student(nishikawa);

  westlab.show();

  westlab.new_year();

  westlab.show();
  return 0;
}
