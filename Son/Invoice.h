#include <iostream>
#include <string>
#include "Order.h"
using namespace std;
class Invoice
{
    string ma;
    Order *donhang;
    double thue;
    public:
    double getthanhtien();
    void inhoadon();
};