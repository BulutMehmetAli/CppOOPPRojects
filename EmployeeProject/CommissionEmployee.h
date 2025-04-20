//
// Created by bulut on 19.04.2025.
//

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"


class CommissionEmployee : Employee {

public:
    double sales, commissionRate, taxRate;

    CommissionEmployee(const string &name, int age, const string &nic, double salary, const Address &address,
        double sales, double commission_rate, double tax_rate)
        : Employee(name, age, nic, salary, address),
          sales(sales),
          commissionRate(commission_rate),
          taxRate(tax_rate) {
    }

    double get_sales() const;

    void set_sales(double sales);

    double get_commission_rate() const;

    void set_commission_rate(double commission_rate);

    double get_tax_rate() const;

    void set_tax_rate(double tax_rate);
};


#endif //COMMISSIONEMPLOYEE_H
