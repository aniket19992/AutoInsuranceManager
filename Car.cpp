#include "Car.h"
std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_serial_number: " << rhs._serial_number
       << " _brand: " << rhs._brand
       << " _size: " << rhs._size
       << " _insurance_policy: " << *(rhs._insurance_policy)
       << " _price: " << rhs._price
       << " _segment: " <<DisplayEnumCar(rhs._segment ) 
       << " _tax_amount: " << rhs._tax_amount;
    return os;
}
std::string DisplayEnumCar(CarType ty)
{
    if (ty== CarType::BUDGET){
        return "BUDGET";
    }
    else if (ty==CarType::PREMIUM){
        return "PREMIUM";
    }
    else {
        return "SPORTS";
    }
}

Car::Car(std::string S_no, std::string Brand, float size, PInsurance policy, float price, CarType ty, float tax):_serial_number(S_no),_brand(Brand),_size(size),_insurance_policy(policy),_price(price),_segment(ty),_tax_amount(tax)
{
if (size>=1.5f && size<=4.0f){
    setSize(size);
}else {
    std::runtime_error ("not valid size given");
}
if (price>=400000.0f && price<=2500000.0f){
    setPrice(price);
}else {
        std::runtime_error ("not valid price given");
}

}
