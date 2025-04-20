//
// Created by bulut on 19.04.2025.
//

#include "Addresses.h"


string Address::get_street() const {
    return street;
}

int Address::get_house_number() const {
    return houseNumber;
}

string Address::get_city() const {
    return city;
}

string Address::get_province() const {
    return province;
}

string Address::get_postal_code() const {
    return postalCode;
}

void Address::set_street(const string &street) {
    this->street = street;
}

void Address::set_house_number(int house_number) {
    houseNumber = house_number;
}

void Address::set_city(const string &city) {
    this->city = city;
}

void Address::set_province(const string &province) {
    this->province = province;
}

void Address::set_postal_code(const string &postal_code) {
    postalCode = postal_code;
}
