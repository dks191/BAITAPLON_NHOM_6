#pragma once
#include "Order.h"

class Invoice
{
private:
    string ma;
    Order* donhang;        // chi tro toi, khong delete
    double thue;           // vi du 0.1 = 10%

public:
    Invoice();
    Invoice(const string& ma, Order* donhang, double thue);

    string getma() const;
    Order* getdonhang() const;
    double getthue() const;

    double getthanhtien() const;           // tinhtongtien() * (1 + thue)
    void inhoadon(ostream& o) const;
};
