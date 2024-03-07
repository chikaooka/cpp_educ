#ifndef STUDENT_HPP
#define STUDENT_HPP

class Student : public Human {
private:
    std::string major;
    int grade;
public:
    Student(std::string n, Gender gen, std::string m, int g);
    void show();
};

#endif

