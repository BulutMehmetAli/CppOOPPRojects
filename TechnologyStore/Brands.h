//
// Created by bulut on 20.04.2025.
//

#ifndef BRANDS_H
#define BRANDS_H
#include <string>

using namespace std;

class Brands {
private:
    int id;
    string brandName;
public:


    Brands(int id,  string brand_name)
        : id(id),
          brandName(brand_name) {
    }
    bool operator==(const Brands& other) const {
        return id == other.id && brandName == other.brandName;
    }


    int get_id() ;

    void set_id(int id);

    string get_brand_name() ;

    void set_brand_name( string brand_name);
};


#endif //BRANDS_H
