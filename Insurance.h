#ifndef INSURANCE_H
#define INSURANCE_H

#include<iostream>
#include"InsuranceType.h"

class Insurance
{
private:
InsType _type;
float _premium;
int _idv_amount;
public:
    // default constructor
    Insurance() = default;
    // copy constructor
    Insurance(const Insurance &) = delete;
    // move constructor
    Insurance(Insurance &&) = delete;
    // copy assignment
    Insurance &operator=(Insurance &) = delete;
    // move assignment
    Insurance &operator=(Insurance &&) = delete;
    // destructor
    ~Insurance() = default;
    // parametrised constructor

    Insurance(InsType ty, float pre, int idv);

    InsType type() const { return _type; }

    float premium() const { return _premium; }

    int idvAmount() const { return _idv_amount; }

    friend std::ostream &operator<<(std::ostream &os, const Insurance &rhs);
};
std::string DisplayEnumIns(InsType ty);
#endif // INSURANCE_H
