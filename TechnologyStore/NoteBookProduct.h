//
// Created by bulut on 20.04.2025.
//

#ifndef NOTEBOOKPRODUCT_H
#define NOTEBOOKPRODUCT_H
#include "BaseProduct.h"


class NoteBookProduct:public BaseProduct {
public:
    NoteBookProduct(int id, int price, int discount_rate, int storage,  string name,  Brands brand,
        int memory, double screen_size, int ram,  string colour)
        : BaseProduct(id, price, discount_rate, storage, name, brand, memory, screen_size, ram, colour) {
    }

};



#endif //NOTEBOOKPRODUCT_H
