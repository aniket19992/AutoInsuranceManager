#ifndef CAR_H
#define CAR_H

#include<iostream>
#include"CarType.h"
#include"Insurance.h"
#include<memory>

using PInsurance = std::shared_ptr<Insurance>;

class Car
{
private:
std::string _serial_number;
std::string _brand;
float _size;
PInsurance _insurance_policy;
float _price;
CarType _segment;
float _tax_amount;

public:
     // default constructor
    Car() = default;
    // copy constructor
    Car(const Car &) = delete;
    // move constructor
    Car(Car &&) = delete;
    // copy assignment
    Car &operator=(Car &) = delete;
    // move assignment
    Car &operator=(Car &&) = delete;
    // destructor
    ~Car() = default;
    // parametrised constructor
Car(std::string S_no, std::string Brand, float size, PInsurance policy, float price, CarType ty, float tax);
std::string serialNumber() const { return _serial_number; }
std::string brand() const { return _brand; }
float size() const { return _size; }
PInsurance insurancePolicy() const { return _insurance_policy; }
float price() const { return _price; }
CarType segment() const { return _segment; }
float taxAmount() const { return _tax_amount; }
void setSize(float size) { _size = size; }
void setPrice(float price) { _price = price; }
void setTaxAmount(float tax_amount) { _tax_amount = tax_amount; }
    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

};
std::string DisplayEnumCar(CarType ty);
#endif // CAR_H
