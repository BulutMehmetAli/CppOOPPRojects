#include "BaseProduct.h"

// Getter ve Setter fonksiyonlarını burada tanımlıyoruz
int BaseProduct::get_id()  {
    return id;
}

void BaseProduct::set_id(int id) {
    this->id = id;
}

int BaseProduct::get_price()  {
    return price;
}

void BaseProduct::set_price(int price) {
    this->price = price;
}

int BaseProduct::get_discount_rate()  {
    return discountRate;
}

void BaseProduct::set_discount_rate(int discount_rate) {
    discountRate = discount_rate;
}

int BaseProduct::get_storage()  {
    return storage;
}

void BaseProduct::set_storage(int storage) {
    this->storage = storage;
}

int BaseProduct::get_memory() {
    return Memory;
}

void BaseProduct::set_memory(int memory) {
    Memory = memory;
}

double BaseProduct::get_screen_size()  {
    return screenSize;
}

void BaseProduct::set_screen_size(double screen_size) {
    screenSize = screen_size;
}

int BaseProduct::get_ram() {
    return Ram;
}

void BaseProduct::set_ram(int ram) {
    Ram = ram;
}
string BaseProduct::get_name() {
    return name;
}
void BaseProduct::set_name(string name) {
    this->name = name;
}
string BaseProduct::get_colour() {
    this->colour;
}
void BaseProduct::set_colour(string colour) {
    this->colour = colour;
}
void BaseProduct::set_brand(Brands brand) {
     this->brand = brand;
}
Brands BaseProduct::get_brand() {
    return brand;
}



