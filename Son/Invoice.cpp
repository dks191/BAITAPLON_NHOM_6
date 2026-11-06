#include "Invoice.h"

double Invoice::getthanhtien()
{
    return donhang->tinhtongtien() * (1+thue);
}

void Invoice::inhoadon() 
{
    cout << 1;
}
