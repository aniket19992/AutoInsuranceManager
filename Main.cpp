#include"Car.h"
#include"functionalities.h"
#include<memory>
#include<vector>
#include<optional>

using PInsurance = std::shared_ptr<Insurance>;
using DInsurance = std::vector<PInsurance>;

using PCar = std::shared_ptr<Car>;
using DCar = std::vector<PCar>;

int main(){

DInsurance Idata;
DCar Cdata;

CreateObjects(Cdata, Idata);

// for (auto & k : Cdata){
//     std::cout<<*k<<"\n";
// }
 
std::cout<<"no of count of objects passed the condition \t"<<function1(Cdata)<<"\n";
std::cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";
function2(Cdata);
std::cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";

std::optional<DCar>  result = function3(Cdata, CarType::BUDGET);

if (result.has_value()){
    for (auto & k : result.value()){
        std::cout<<*k<<"\n";
    }
}
std::cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";

PCar itr1 = function4(Cdata,"A101");

std::cout<<*itr1<<"\n";
std::cout<<"--------------------------------------------------------------------------------------------------------------------------------\n";

function5(Cdata, "BMW");
}