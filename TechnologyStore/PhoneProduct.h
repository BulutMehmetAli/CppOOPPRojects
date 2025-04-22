//
// Created by bulut on 20.04.2025.
//

#ifndef PHONEPRODUCT_H
#define PHONEPRODUCT_H
#include "BaseProduct.h"


class PhoneProduct: public BaseProduct{
    int power;
public:
    PhoneProduct(int id, int price, int discount_rate, int storage,  string name,  Brands brand, int memory,
        double screen_size, int ram,  string colour, int power)
        : BaseProduct(id, price, discount_rate, storage, name, brand, memory, screen_size, ram, colour),
          power(power) {
    }


    int get_power() ;

    void set_power(int power);
};




#endif //PHONEPRODUCT_H
