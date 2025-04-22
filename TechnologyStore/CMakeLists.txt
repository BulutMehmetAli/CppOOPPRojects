cmake_minimum_required(VERSION 3.31)
project(TechnologyStore)

set(CMAKE_CXX_STANDARD 20)

add_executable(TechnologyStore
        main.cpp
        BaseProduct.cpp
        BaseProduct.h
        Brands.cpp
        Brands.h
        PhoneProduct.cpp
        PhoneProduct.h
        NoteBookProduct.cpp
        NoteBookProduct.h
        Store.cpp
        Store.h
)
