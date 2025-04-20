cmake_minimum_required(VERSION 3.31)
project(JetbrainsC__)

set(CMAKE_CXX_STANDARD 20)

add_executable(JetbrainsC__
        main.cpp
        Employee.cpp
        Employee.h
        Addresses.cpp
        Addresses.h
        Manager.cpp
        Manager.h
        SalariedEmployee.cpp
        SalariedEmployee.h
        HourlyEmployee.cpp
        HourlyEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h
)