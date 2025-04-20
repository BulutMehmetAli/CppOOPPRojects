//
// Created by bulut on 19.04.2025.
//

#include "CommissionEmployee.h"

double CommissionEmployee::get_sales() const {
    return sales;
}

void CommissionEmployee::set_sales(double sales) {
    this->sales = sales;
}

double CommissionEmployee::get_commission_rate() const {
    return commissionRate;
}

void CommissionEmployee::set_commission_rate(double commission_rate) {
    commissionRate = commission_rate;
}

double CommissionEmployee::get_tax_rate() const {
    return taxRate;
}

void CommissionEmployee::set_tax_rate(double tax_rate) {
    taxRate = tax_rate;
}
