#include<string> 
#include<iostream>
using namespace std;
#include "../include/human.hpp" 
#include "../include/student.hpp" 

Student::Student(string n, Gender gen, string m, int g) : Human(n, gen)
{
    major = m;
    grade = g;
}

void Student::show()
{
    cout << "[Student] Name: " << name
         << ", Gender: " << gender_to_string(gender)
         << ", Major: " << major
         << ", Grade: " << grade
         << endl;
}

int Student::ret_grade()
{
    return grade;
}

void Student::upgrade()
{
    grade++;
}