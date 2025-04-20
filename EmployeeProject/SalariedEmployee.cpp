//
// Created by bulut on 19.04.2025.
//

#include "SalariedEmployee.h"


double SalariedEmployee::get_monthly_salary() const {
    return monthlySalary;
}

void SalariedEmployee::set_monthly_salary(double monthly_salary) {
    monthlySalary = monthly_salary;
}

double SalariedEmployee::get_tax_rate() const {
    return taxRate;
}

void SalariedEmployee::set_tax_rate(double tax_rate) {
    taxRate = tax_rate;
}
