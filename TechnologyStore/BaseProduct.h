//
// Created by bulut on 20.04.2025.
//

#ifndef BASEPRODUCT_H
#define BASEPRODUCT_H
#include "Brands.h"
#include <string>
#include <iostream>
using namespace std;

class BaseProduct {
public:
    int id;
    int price;
    int discountRate;
    int storage;
    string name;
    Brands brand;
    int Memory;
    double screenSize;
    int Ram;
    string colour;

    BaseProduct(int id, int price, int discount_rate, int storage,  string name,  Brands brand, int memory,
        double screen_size, int ram, string colour)
        : id(id),
          price(price),
          discountRate(discount_rate),
          storage(storage),
          name(name),
          brand(brand),
          Memory(memory),
          screenSize(screen_size),
          Ram(ram),
          colour(colour) {
    }

    bool operator==(const BaseProduct& other) const {
        return id == other.id && price == other.price && discountRate == other.discountRate &&
               storage == other.storage && name == other.name && brand == other.brand && Memory == other.Memory &&
               screenSize == other.screenSize && Ram == other.Ram && colour == other.colour;
    }

    int get_id() ;

    void set_id(int id);

    int get_price() ;

    void set_price(int price);

    int get_discount_rate() ;

    void set_discount_rate(int discount_rate);

    int get_storage() ;

    void set_storage(int storage);

    string get_name() ;

    void set_name( string name);

    Brands get_brand() ;

    void set_brand( Brands brand);

    int get_memory() ;

    void set_memory(int memory);

    double get_screen_size() ;

    void set_screen_size(double screen_size);

    int get_ram() ;

    void set_ram(int ram);

    string get_colour() ;

    void set_colour(string colour);

};




#endif //BASEPRODUCT_H
