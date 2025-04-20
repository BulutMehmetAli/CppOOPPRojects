//
// Created by bulut on 19.04.2025.
//

#include "Employee.h"
using namespace std;

string Employee::get_name() const {
    return name;
}

void Employee::set_name(const string &name) {
    this->name = name;
}

int Employee::get_age() const {
    return age;
}

void Employee::set_age(int age) {
    this->age = age;
}

string Employee::get_nic() const {
    return nic;
}

void Employee::set_nic(const string &nic) {
    this->nic = nic;
}

double Employee::get_salary() const {
    return salary;
}

void Employee::set_salary(double salary) {
    this->salary = salary;
}

Address Employee::get_address() const {
    return address;
}

void Employee::set_address(const Address &address) {
    this->address = address;
}
