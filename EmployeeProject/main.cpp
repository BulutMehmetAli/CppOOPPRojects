#include <iostream>
#include "Employee.h"
using namespace std;
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "Addresses.h"
#include "Employee.h"
#include <vector>


int main() {

    vector<Employee*> employees;
    vector<Address*> addresses;
    addresses.push_back(new Address("Karabaglar",26,"Izmir","Ege","35030"));
    addresses.push_back(new Address("Pendik",23,"Istanbul","Marmara","34000"));

    employees.push_back(new Employee("Mehmet Ali",25,"Mali",50000,*addresses[0]));
    HourlyEmployee hourly_employee1("Mehmet",18,"Kali",9850,*addresses[1],98,120,36);
    Employee employee2("Mehmet Ali",25,"Mali",50000,*addresses[0]);

    //employees.push_back(hourly_employee1);
    vector<HourlyEmployee*> hourly_employees;

    employees.push_back(new Employee("Mehmet Ali",25,"Mali",50000,*addresses[0]));
    employees.push_back(vector<Employee *>::value_type(new HourlyEmployee("Mehmet", 18, "Kali", 9850, *addresses[1], 98, 120, 36)));

    // Çalışanları yazdırıyoruz
    for (auto emp : employees) {
        cout << emp->get_address().get_city() << endl;
    }

    return 0;
}