//
// Created by bulut on 19.04.2025.
//

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"


class HourlyEmployee:Employee{
public:
    double hoursWorked, hourlyRate, taxRate;

    HourlyEmployee(const string &name, int age, const string &nic, double salary, const Address &address,
        double hours_worked, double hourly_rate, double tax_rate)
        : Employee(name, age, nic, salary, address),
          hoursWorked(hours_worked),
          hourlyRate(hourly_rate),
          taxRate(tax_rate) {
    }

    HourlyEmployee();

    double get_hours_worked() const;

    void set_hours_worked(double hours_worked);

    double get_hourly_rate() const;

    void set_hourly_rate(double hourly_rate);

    double get_tax_rate() const;

    void set_tax_rate(double tax_rate);
};



#endif //HOURLYEMPLOYEE_H
