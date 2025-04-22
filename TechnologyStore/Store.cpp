//
// Created by bulut on 20.04.2025.
//

#include "Store.h"
using namespace std;
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
vector<Brands> brandsList;
vector<BaseProduct> phoneProductsList;
vector<BaseProduct> noteBookProductsList;
void Store::productLists() {
    Brands samsung(1, "Samsung");
    Brands lenova (2, "Lenova");
    Brands Huawei (3, "Huawei");
    Brands Casper (4, "Casper");
    Brands Asus (5, "Asus");
    Brands Hp (6, "HP");
    Brands Xiomi (7, "Xiomi");
    Brands Monster (8, "Monster");
    Brands Apple (9, "Apple");
    brandsList.push_back(samsung);
    brandsList.push_back(lenova);
    brandsList.push_back(Huawei);
    brandsList.push_back(Casper);
    brandsList.push_back(Asus);
    brandsList.push_back(Hp);
    brandsList.push_back(Xiomi);
    brandsList.push_back(Monster);
    brandsList.push_back(Apple);

    PhoneProduct p20 (100, 15200, 15, 150, "Huawei P20", brandsList[2], 128, 1.6, 6, "white", 400);
    PhoneProduct IPhone11 (101, 32550, 12, 225, "iPhone 11", brandsList[8], 64, 5, 4, "black", 800);
    PhoneProduct galaxy (102, 3199, 12, 55, "Galaxy A51", brandsList[0], 128, 6.5, 5, "red", 220);
    PhoneProduct Note10 (103, 4012, 10, 440, "Redmi Note 10 Pro", brandsList[6], 8, 6.5, 8, "Black", 125);
    phoneProductsList.push_back(p20);
    phoneProductsList.push_back(IPhone11);
    phoneProductsList.push_back(galaxy);
    phoneProductsList.push_back(Note10);

    NoteBookProduct Matebook (200, 7000, 5, 88, "Matebook 14", brandsList[2], 512, 14, 16, "White");
    NoteBookProduct V14Igl (201, 3699, 4, 45, "V14 IGL", brandsList[1], 1024, 14, 8, "Black");
    NoteBookProduct TufGaming (202, 8199, 3, 20, "Tuf Gaming", brandsList[4], 2048, 15.6, 32, "Orange");
    noteBookProductsList.push_back(Matebook);
    noteBookProductsList.push_back(Note10);
    noteBookProductsList.push_back(TufGaming);


}
void Store::run(){
    productLists();
    int secim;
    int counter = 3; // Başlangıçta 3 hak var
    bool exit = false; // Çıkış yapma durumu

    // Menü
    while (counter > 0 && !exit) {
        cout << " ******************************* Menu ******************************* " << endl;
        cout << "PatikaStore Urun Yonetim Paneli !\n";
        cout << "1 - Notebook Islemleri\n";
        cout << "2 - Cep Telefonu Islemleri\n";
        cout << "3 - Marka Listele\n";
        cout << "0 - Cikis Yap\n";
        cout << counter << " adet giris hakkiniz bulunmaktadir !!! " << endl;
        cout << "Seciminiz: ";
        cin >> secim;

        switch (secim) {
            case 1:
                cihazMenu(noteBookProductsList);
                break;
            case 2:
                cihazMenu(phoneProductsList);
                break;
            case 3:
                markaListesi(brandsList);
                break;
            case 0:
                cout << "Cikis yapiliyor...\n";
                exit = true; // Çıkış yapmayı belirtiyoruz
                break;
            default:
                cout << "Yanlis bir deger girdiniz\n";
                counter--; // Yanlış girişte hak kaybı
                if (counter == 0) {
                    cout << "Giris hakkiniz kalmamıstır !!!\n";
                    break; // Çıkma işlemi
                } else {
                    cout << counter << " adet hakkiniz kalmistir !!!\n";
                }
        }
    }
}

void Store::cihazMenu(vector<BaseProduct> products){
    int secimCihazMenu;
    int counter = 3; // Başlangıçta 3 hak var
    bool exit = false; // Çıkış yapma durumu
    while (counter > 0 && !exit) {
    cout << "1 - Product Listesi \n" ;
    cout << "2 - Product Ekle \n" ;
    cout << "3 - Product Kaldir \n" ;
    cout << "4 - Product sirala \n" ;
    cout << "0 - geri " << endl;
    cout << counter << " adet giris hakkiniz bulunmaktadir !!! " << endl;
    cout << "Secmek istediğiniz ";
    cout << "Seciminiz: ";
    cin >> secimCihazMenu;
    switch (secimCihazMenu) {
        case 1:
            urunListesi(products);
            break;
        case 2:
            if (&products == &phoneProductsList) {
                urunEkle(products,brandsList,true);
            }else {
                urunEkle(products,brandsList,false);
            }
            break;
        case 3:
            urunCikar(products);
            break;
        case 4:
            urunSirala(products);
            break;
        default:
            cout << "Yanlis bir deger girdiniz\n";
            counter--; // Yanlış girişte hak kaybı
            if (counter == 0) {
                cout << "Giris hakkiniz kalmamıstır !!!\n";
                break; // Çıkma işlemi
            } else {
                cout << counter << " adet hakkiniz kalmistir !!!\n";
            }
    }

    }

}


void Store::markaListesi(vector<Brands> brands) {
    if (brands.empty()) {
        cout << "Marka listesi boş!" << endl;
    }
    for (Brands brand : brands) {  // Referansla erişim sağlıyoruz
        cout << brand.get_id() << " ---> " << brand.get_brand_name() << endl;
    }

}
void Store::urunListesi(vector<BaseProduct> products) {
    if (products.empty()) {
        cout << "Marka listesi boş!" << endl;
    }
    for ( BaseProduct product : products) {  // Referansla erişim sağlıyoruz
        cout << product.get_id() << " ---> " << product.get_name()  << " ---> " <<
            product.get_price()  << " ---> " << product.get_discount_rate()  << " ---> " <<
                product.get_storage()  << " ---> " << product.get_brand().get_brand_name()  << " ---> " <<
                    product.get_memory()  << " ---> " << product.get_screen_size()  << " ---> ram " << product.get_ram() << endl;
    }
}
Brands Store::markaSecimi(vector<Brands> &brands) {
    int secim;

    if (brands.empty()) {
        cout << "Marka listesi bos !!!" << endl;
    }
    for (Brands brand : brands) {
        cout << "ID: " << brand.get_id() << " ---> " << brand.get_brand_name() << endl;
    }
    cout << "Secmek istediğiniz markanın id numarasini giriniz : " ;
    cin >> secim;
    return brands[secim-1];

}
void Store::urunEkle(vector<BaseProduct> &products, vector<Brands> brands, bool isPhoneProduct) {
    cout << "********************** Urun Ekleme Ekranina Hos geldiniz **********************" << endl;

    int productId, unitPrice, discountRate, storage, memoryProduct, ram;
    string productName, colour;
    double screenSize;

    cout << "Urun id: ";
    cin >> productId;
    cout << "Birim fiyat: ";
    cin >> unitPrice;
    cout << "Indirim oranı: ";
    cin >> discountRate;
    cout << "Depolama: ";
    cin >> storage;
    cout << "Urun adı: ";
    cin >> productName;

    // Marka seçimi
    Brands brand = markaSecimi(brands);

    cout << "Hafiza: ";
    cin >> memoryProduct;
    cout << "Ekran buyuklugu: ";
    cin >> screenSize;
    cout << "Ram: ";
    cin >> ram;
    cout << "Renk: ";
    cin >> colour;

    if (isPhoneProduct) {  // Eğer telefon ürünü ekleniyorsa
        cout << "Pil gücü (PhoneProduct için): ";
        int power;
        cin >> power;
        PhoneProduct new_product(productId, unitPrice, discountRate, storage, productName, brand, memoryProduct, screenSize, ram, colour, power);
        products.push_back(new_product);  // PhoneProduct vektörüne ekleme
        cout << "Ürün eklendi!" << endl;
    } else {  // Eğer notebook ürünü ekleniyorsa
        NoteBookProduct new_product(productId, unitPrice, discountRate, storage, productName, brand, memoryProduct, screenSize, ram, colour);
        products.push_back(new_product);  // NoteBookProduct vektörüne ekleme
        cout << "Ürün eklendi!" << endl;
    }
}


void Store::urunCikar(vector<BaseProduct>& products) {  // Referansla alıyoruz
    if (products.empty()) {
        cout << "Marka listesi bos !!!" << endl;
        return;
    }

    int id;
    cout << "Lutfen silmek istediginiz urunun id'sini giriniz : ";
    cin >> id;

    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->get_id() == id) {
            products.erase(it);  // id'si girilen öğeyi sil
            cout << "Urun silindi!" << endl;
            break;  // İlk eşleşen öğe silindikten sonra döngüden çıkılır
        }
    }
}


void Store::urunSirala(vector<BaseProduct> products) {
    int secim;
    cout << " ************************** Urun siralama ekrani ************************** " << endl;
    cout << "1 - ID sirasina gore siralama:" << endl ;
    cout << "2 - Buyukten kucuge gore siralama " << endl ;
    cout << "3 - Kucukten buyuge gore siralama " << endl ;
    cout << "4 - A'dan Z'ye gore siralama " << endl ;
    cout << "5 - Z'den A'ya gore siralama" << endl ;
    cout << "Seciminiz: ";
    cin >> secim;

    switch (secim) {
        case 1:  // ID sırasına göre sıralama
            sort(products.begin(), products.end(), [](BaseProduct a, BaseProduct b) {
                return a.get_id() < b.get_id();
            });
            urunListesi(products);
            break;
        case 2:  // Fiyat sırasına göre büyükten küçüğe sıralama
            sort(products.begin(), products.end(), [](BaseProduct a, BaseProduct b) {
                return a.get_price() > b.get_price();
            });
            urunListesi(products);
            break;
        case 3:  // Fiyat sırasına göre küçükten büyüğe sıralama
            sort(products.begin(), products.end(), [](BaseProduct a, BaseProduct b) {
                return a.get_price() < b.get_price();
            });
            urunListesi(products);
            break;
        case 4:  // Ürün ismine göre A'dan Z'ye sıralama
            sort(products.begin(), products.end(), [](BaseProduct a, BaseProduct b) {
                return a.get_name() < b.get_name();
            });
            urunListesi(products);
            break;
        case 5:  // Ürün ismine göre Z'den A'ya sıralama
            sort(products.begin(), products.end(), [](BaseProduct a, BaseProduct b) {
                return a.get_name() > b.get_name();
            });
            urunListesi(products);
            break;
        default:
            cout << "Geçersiz seçenek!" << endl;
            return;
    }
}
