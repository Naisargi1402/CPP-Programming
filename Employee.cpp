#include "Employee.h"

Employee::Employee(const std::string& name, int age, const std::string& position, double salary)
    : Person(name, age), position(position), salary(salary) {}

std::string Employee::getPosition() const {
    return position;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::giveRaise(double percentage) {
    if (percentage > 0) {
        salary += salary * percentage / 100;
    }
}