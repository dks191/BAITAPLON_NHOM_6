#include "Invoice.h"

double Invoice::getthanhtien()
{
    return donhang->tinhtongtien() * (1+thue);
}