#include "Date.h"

Date::Date(): ngay{1},thang{1},nam{2000}{}

Date::Date(int ngay, int thang, int nam)
{
    if (hople(ngay,thang,nam) == 0)
    {
        throw invalid_argument("Ngay, thang, nam khong hop le");
    }
    else 
    {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }
}

bool Date::hople(int ngay, int thang, int nam) const
{
    if (nam <= 0)
        return 0;
    else
    {
        if (thang <= 0 || thang >12)
            return 0;

        else if (thang == 2)
        {
            if ( nam % 400 == 0 || (nam % 100 != 0 && nam % 4==0))
            {
                if (ngay >29 || ngay <=0)
                return 0;
            }
            else if (ngay >28 || ngay <=0)
                return 0;
        }
        else if(thang == 4 || thang == 6 || thang == 9||thang ==11)
        {
            if (ngay > 30 || ngay <=0)
            return 0;
        }
        else 
        {
            if(ngay >31 || ngay <=0)
            return 0;
        }
    }
    return 1;
}

void Date::setnew(int ngay, int thang, int nam)
{
    if (hople(ngay,thang,nam) == 0)
        throw invalid_argument("Ngay, thang, nam moi khong hop le");
    else
    {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    } 
}

bool Date::operator==(const Date& other) const{
    if (ngay == other.ngay && thang == other.thang && nam == other.nam)
        return 1;
    return 0;
}

bool Date::operator<(const Date&other) const{
    if(nam > other.nam)
        return 0;
    else if (nam < other.nam)
        return 1;
    else 
    {
        if (thang > other.thang)
            return 0;
        else if (thang < other.thang)
            return 1;
        else 
        {
            if (ngay > other.ngay)
                return 0;
            else if(ngay < other.ngay)
                return 1;
        }
    }
    return 0;
}

ostream& operator<<(ostream& o, const Date& date)
{
    o << setfill('0') << setw(2) << date.ngay <<"/"<< setw(2) << date.thang << "/" <<date.nam;
    o << setfill(' ');
    return o;
}

istream& operator>>(istream & i, Date & date)
{
    char c1,c2;
    int ngay,thang,nam;
    
datein:
    i >> ngay >> c1 >> thang >> c2 >> nam;

    if ( (c1 == ' ' && c2 == ' ') || (c1 == '/' && c2 == '/') && date.hople(ngay,thang,nam))
        {
            date.setnew(ngay,thang,nam);
        }
    else 
    {
        cout << "Khong hop le, vui long nhap lai" << endl;
        goto datein;
    }
        
}