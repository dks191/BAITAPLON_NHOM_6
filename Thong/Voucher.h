#pragma once
#include "Date.h"
#include <string>

class Voucher
{
private:
    string mavoucher;
    double phantram;       // 0 - 100
    double dontoithieu;
    Date hansudung;

public:
    Voucher();
    Voucher(const string& mavoucher, double phantram, double dontoithieu, const Date& hansudung);

    string getmavoucher() const;
    double getphantram() const;
    double getdontoithieu() const;
    Date gethansudung() const;

    bool hople(double tong, const Date& homnay) const;       // du don toi thieu va con han
    double apdung(double tong, const Date& homnay) const;    // tra ve tong sau khi giam

    friend ostream& operator<<(ostream& o, const Voucher& v);
    friend istream& operator>>(istream& i, Voucher& v);
};
