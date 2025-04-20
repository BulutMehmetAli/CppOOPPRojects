#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address {
    string street;
    int houseNumber;
    string city;
    string province;
    string postalCode;

public:
    Address(const string &street, int house_number, const string &city, const string &province,
        const string &postal_code)
        : street(street),
          houseNumber(house_number),
          city(city),
          province(province),
          postalCode(postal_code) {
    }


    string get_street() const;

    int get_house_number() const;

    string get_city() const;

    string get_province() const;

    string get_postal_code() const;

    void set_street(const string &street);

    void set_house_number(int house_number);

    void set_city(const string &city);

    void set_province(const string &province);

    void set_postal_code(const string &postal_code);
};

#endif
