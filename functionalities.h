#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Car.h"
#include<vector>
#include<algorithm>
#include<numeric>
#include<memory>

using PInsurance = std::shared_ptr<Insurance>;
using DInsurance = std::vector<PInsurance>;

using PCar = std::shared_ptr<Car>;
using DCar = std::vector<PCar>;

// a function to create 5 objects of Car class and insurance class
void CreateObjects(DCar & Cdata, DInsurance & Idata );

//a function to find and return the count of instance passes the creteria 
int function1 (DCar & Cdata);

//a function to find and print the boolean value to indicate atleats one instance matches the condition
void function2 ( DCar & cdata);

//a function to copy all the value if second parameter passed type matches 
std::optional<DCar> function3(DCar & cdata, CarType ty);

//a function to return a pointer if second parameter passed matches 
PCar function4(DCar & cdata,std::string no);

// a function to find avg price of instance whose brand matches as second parameter 
void function5 ( DCar & cdata, std::string brand );

#endif // FUNCTIONALITIES_H
