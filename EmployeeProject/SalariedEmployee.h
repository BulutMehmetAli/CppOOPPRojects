//
// Created by bulut on 19.04.2025.
//

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"

class SalariedEmployee : Employee {
public:
    SalariedEmployee(const string &name, int age, const string &nic, double salary, const Address &address,
        double monthly_salary, double tax_rate)
        : Employee(name, age, nic, salary, address),
          monthlySalary(monthly_salary),
          taxRate(tax_rate) {
    }

    double monthlySalary, taxRate;


    double get_monthly_salary() const;

    void set_monthly_salary(double monthly_salary);

    double get_tax_rate() const;

    void set_tax_rate(double tax_rate);
};



#endif //SALARIEDEMPLOYEE_H
