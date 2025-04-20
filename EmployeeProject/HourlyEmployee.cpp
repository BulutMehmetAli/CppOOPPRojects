//
// Created by bulut on 19.04.2025.
//

#include "HourlyEmployee.h"

double HourlyEmployee::get_hours_worked() const {
    return hoursWorked;
}

void HourlyEmployee::set_hours_worked(double hours_worked) {
    hoursWorked = hours_worked;
}

double HourlyEmployee::get_hourly_rate() const {
    return hourlyRate;
}

void HourlyEmployee::set_hourly_rate(double hourly_rate) {
    hourlyRate = hourly_rate;
}

double HourlyEmployee::get_tax_rate() const {
    return taxRate;
}

void HourlyEmployee::set_tax_rate(double tax_rate) {
    taxRate = tax_rate;
}
