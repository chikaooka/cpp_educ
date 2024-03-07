#ifndef LAB_HPP 
#define LAB_HPP

#include "student.hpp"

class Lab {
private:
    std::string name,place;
    std::vector<Student> students;
    std::vector<Student> alumni;
public:
    Lab(std::string name, std::string place);
    //void register_new_student();
    void register_new_student(Student new_student);
    void leave(Student leave_student);
    void show();
    void new_year();
};

#endif