#ifndef STORE_H
#define STORE_H

#include <vector>
#include "BaseProduct.h"  // BaseProduct'ı doğru şekilde dahil et
#include "PhoneProduct.h"
#include "NoteBookProduct.h"
#include "Brands.h"

class Store {
public:
    void productLists();  // Ürün listeleme fonksiyonu
    void run();           // Menü fonksiyonu


    void cihazMenu(vector<BaseProduct> products);
    void markaListesi(vector<Brands> brands);
    void urunListesi(vector<BaseProduct> products);
    void urunEkle(vector<BaseProduct> &products, vector<Brands> brands, bool isPhoneProduct);
    Brands markaSecimi(vector<Brands> &brands) ;
    void urunCikar(vector<BaseProduct>& products);
    void urunSirala(vector<BaseProduct> products);

};
#endif
