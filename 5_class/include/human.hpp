#ifndef HUMAN_HPP
#define HUMAN_HPP

enum Gender{male,female};
std::string gender_to_string(Gender gen);

class Human {
protected:
    std::string name;
    Gender gender;
public:
    Human(std::string n, Gender gen);
    void show();
    std::string ret_name();
};

#endif
