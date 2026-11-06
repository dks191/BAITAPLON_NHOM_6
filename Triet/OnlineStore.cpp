#include<iostream>
using namespace std;
class PRODUCT{
    private:
    string name;
    double prices;
    public:
    PRODUCT( string ten = " ", double gia = 0): name(ten), prices(gia){}
    void In() const{
        cout << "TEN SAN PHAM: " << name << endl;
        cout << "GIA SAN PHAM: " << prices << endl;
    }
};
int main(){
    PRODUCT a("DOAN CONG TRIET", 50);
    a.In();
    return 0;   
}