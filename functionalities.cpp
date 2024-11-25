#include "functionalities.h"

void CreateObjects(DCar &Cdata, DInsurance &Idata)
{
    std::shared_ptr<Insurance> I1 = std::make_shared<Insurance>(InsType::REGULAR,9000.0f,1000);
    std::shared_ptr<Insurance> I2 = std::make_shared<Insurance>(InsType::ZERO_DEPT,19000.0f,2000);
    std::shared_ptr<Insurance> I3 = std::make_shared<Insurance>(InsType::REGULAR,17000.0f,1500);
    std::shared_ptr<Insurance> I4 = std::make_shared<Insurance>(InsType::ALL_INCLUSIVE,21000.0f,900);
    std::shared_ptr<Insurance> I5 = std::make_shared<Insurance>(InsType::ALL_INCLUSIVE,24000.0f,1100);
  
  Idata.push_back(std::move(I1));
  Idata.push_back(std::move(I2));
  Idata.push_back(std::move(I3));
  Idata.push_back(std::move(I4));
  Idata.push_back(std::move(I5));

Cdata.emplace_back(std::make_shared<Car>("A101","Honda",2.0f,Idata[0],900000.0f,CarType::BUDGET,0.05*900000.0f));
Cdata.emplace_back(std::make_shared<Car>("A102","DODGE",3.0f,Idata[1],1900000.0f,CarType::SPORTS,0.05*1900000.0f));
Cdata.emplace_back(std::make_shared<Car>("A103","NISSAN",4.0f,Idata[2],1700000.0f,CarType::PREMIUM,0.05*1700000.0f));
Cdata.emplace_back(std::make_shared<Car>("A104","BMW",3.5f,Idata[3],2100000.0f,CarType::BUDGET,0.05*2100000.0f));
Cdata.emplace_back(std::make_shared<Car>("A105","TATA",2.9f,Idata[4],2400000.0f,CarType::PREMIUM,0.05*2400000.0f));

}

int function1(DCar &Cdata)
{
    if (Cdata.empty()){
        std:: runtime_error ("data is empty");
    }
   int result = std::count_if(Cdata.begin(),
   Cdata.end(),
   [&](PCar & val){
    bool flag= 0;
    if (val->price()>600000.0f && val->segment()==CarType::BUDGET && val->insurancePolicy().get()->idvAmount()>= 0.5*val->price()){
        flag = 1;
    }
    return flag;
   }) ;

return result;
}

void function2(DCar &cdata)
{
      if (cdata.empty()){
        std:: runtime_error ("data is empty");
    }
    bool result = std::any_of(cdata.begin(),
    cdata.end(),
    [&](PCar & val){
        bool flag =0;
        if (val->insurancePolicy()->type()== InsType::ZERO_DEPT && val->insurancePolicy()->premium()<=15000.0f && val->size() > 2.0f){
            flag =1;
        }
        return flag;
    });

std::cout<<"if the mentioned condition passed by any of the instance then 1-> indicates true or 0-> indicated false \t"<<result<<"\n";

}

std::optional<DCar> function3(DCar &cdata, CarType ty)
{
     if (cdata.empty()){
        std:: runtime_error ("data is empty");
    }
 DCar result(cdata.size()) ; 
auto itr = std::copy_if(cdata.begin(),
cdata.end(),
result.begin(),
[&]( PCar & val){
    bool flag =0;
    if (val->segment()==ty){
        flag= 1;
    }
    return flag;
});

result.resize(std::distance(result.begin(),itr));

if (result.empty()){
    return std::nullopt;
}
else{
    return result;
}

}

PCar function4(DCar &cdata,std::string no)
{
      if (cdata.empty()){
        std:: runtime_error ("data is empty");
    }
    auto itr = std::find_if(cdata.begin(),
    cdata.end(),
    [&](PCar & val){
        bool flag=0;
        if (val->serialNumber()==no){
            flag= 1;
        }
        return flag;
    });

    return *itr;
}

void function5(DCar &cdata, std::string brand)
{
     if (cdata.empty()){
        std:: runtime_error ("data is empty");
    }
   float total = 0.0f;
    int count = 0;
    float gf = 0.0f;
    total = std::accumulate(cdata.begin(),
                            cdata.end(),
                            0.0f,
                            [&](float ans, const auto &obj1)
                            {
                                if (obj1->brand() == brand)
                                {
                                    count++;
                                    gf = ans + obj1->price();
                                }
                                return gf;
                            });
std::cout<<"avg price of car insatnce whose brand matches is  "<<total/count<<"\n";
}
