#pragma once
#include <iostream>
#include <stdexcept>
#include <iomanip>
using namespace std;

class Date
{
private:
    int ngay, thang, nam;

public:
    Date();//done
    Date(int ngay, int thang, int nam);//done

    void setnew(int ngay,int thang, int nam);//done

    bool hople(int ngay, int thang, int nam) const;//done               // kiem tra ngay thang nam co hop le khong

    bool operator==(const Date& other) const;//done
    bool operator<(const Date& other) const;//done

    friend ostream& operator<<(ostream& o, const Date& date);//done
    friend istream& operator>>(istream& i, Date& d);   // chap nhan ca d/m/y va d m y
};
