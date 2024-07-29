// EmployeeTest.cpp
#include <gtest/gtest.h>
#include "Employee.h"

// Test fixture for Employee class
class EmployeeTest : public ::testing::Test {
protected:
    Employee* emp;

    void SetUp() override {
        emp = new Employee("John Doe", 30, 5000.0);
    }

    void TearDown() override {
        delete emp;
    }
};

// Test case for the constructor
TEST_F(EmployeeTest, ConstructorTest) {
    EXPECT_EQ(emp->getName(), "John Doe");
    EXPECT_EQ(emp->getAge(), 30);
    EXPECT_DOUBLE_EQ(emp->getSalary(), 5000.0);
}

// Test cases for getter methods
TEST_F(EmployeeTest, GetNameTest) {
    EXPECT_EQ(emp->getName(), "John Doe");
}

TEST_F(EmployeeTest, GetAgeTest) {
    EXPECT_EQ(emp->getAge(), 30);
}

TEST_F(EmployeeTest, GetSalaryTest) {
    EXPECT_DOUBLE_EQ(emp->getSalary(), 5000.0);
}

// Test case for raiseSalary method
TEST_F(EmployeeTest, RaiseSalaryTest) {
    emp->raiseSalary(10.0);
    EXPECT_DOUBLE_EQ(emp->getSalary(), 5500.0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
