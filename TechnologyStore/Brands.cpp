//
// Created by bulut on 20.04.2025.
//

#include "Brands.h"

#include <iostream>
#include <bits/ostream.tcc>


int Brands::get_id()  {
    return id;
}

void Brands::set_id(int id) {
    this->id = id;


}

string Brands::get_brand_name()  {
    return brandName;
}

void Brands::set_brand_name( string brand_name) {
    this -> brandName = brand_name;

}
