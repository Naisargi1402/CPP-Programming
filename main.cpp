#include <iostream>
#include "Employee.h"

int main() {
    Employee emp("John Doe", 30, "Software Engineer", 75000);

    std::cout << "Name: " << emp.getName() << std::endl;
    std::cout << "Age: " << emp.getAge() << std::endl;
    std::cout << "Position: " << emp.getPosition() << std::endl;
    std::cout << "Salary: " << emp.getSalary() << std::endl;

    emp.giveRaise(10);

    std::cout << "New Salary: " << emp.getSalary() << std::endl;

    emp.celebrateBirthday();

    std::cout << "New Age: " << emp.getAge() << std::endl;

    return 0;
}