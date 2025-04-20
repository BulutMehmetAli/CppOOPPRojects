#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Addresses.h"
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int age;
    string nic;
    double salary;
    Address address;

    static int employeeCount;

    Employee(const string &name, int age, const string &nic, double salary, const Address address)
        : name(name),
          age(age),
          nic(nic),
          salary(salary),
          address(address) {
    }

    string get_name() const;

    void set_name(const string &name);

    int get_age() const;

    void set_age(int age);

    string get_nic() const;

    void set_nic(const string &nic);

    double get_salary() const;

    void set_salary(double salary);

    Address get_address() const;

    void set_address(const Address &address);
};

#endif
