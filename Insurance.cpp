#include "Insurance.h"
std::ostream &operator<<(std::ostream &os, const Insurance &rhs) {
    os << "_type: " <<DisplayEnumIns( rhs._type)
            << " _premium: " << rhs._premium
       << " _idv_amount: " << rhs._idv_amount;
    return os;
}
std::string DisplayEnumIns(InsType ty)
{
if (ty==InsType::ALL_INCLUSIVE){
    return "ALL_INCLUSIVE";
}
else if (ty== InsType::ZERO_DEPT){
    return "ZERO_DEPT";
}
else{
    return "REGULAR";
}
}

Insurance::Insurance(InsType ty, float pre, int idv):_type(ty), _premium(pre), _idv_amount(idv)
{
}
