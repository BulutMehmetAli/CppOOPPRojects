//
// Created by bulut on 19.04.2025.
//

#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include "SalariedEmployee.h"


class Manager:SalariedEmployee {

public:
    string department;

    Manager(const string &name, int age, const string &nic, double salary, const Address &address,
        double monthly_salary, double tax_rate, const string &department)
        : SalariedEmployee(name, age, nic, salary, address, monthly_salary, tax_rate),
          department(department) {
    }

    string get_department() const;

    void set_department(const string &department);
};



#endif //MANAGER_H
