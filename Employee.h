#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

class Employee : public Person {
public:
    Employee(const std::string& name, int age, const std::string& position, double salary);
    std::string getPosition() const;
    double getSalary() const;
    void giveRaise(double percentage);

private:
    std::string position;
    double salary;
};

#endif // EMPLOYEE_H
