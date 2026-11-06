#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
    int ngay, thang, nam;

public:
    Date();
    Date(int ngay, int thang, int nam);

    int getngay() const;
    int getthang() const;
    int getnam() const;

    void setngay(int ngay);
    void setthang(int thang);
    void setnam(int nam);

    bool hople() const;                    // kiem tra ngay thang nam co hop le khong

    bool operator==(const Date& d) const;
    bool operator<(const Date& d) const;

    friend ostream& operator<<(ostream& o, const Date& d);
    friend istream& operator>>(istream& i, Date& d);   // chap nhan ca d/m/y va d m y
};
