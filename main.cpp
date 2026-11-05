#include "menu.h"
using namespace std;

int main()
{
    vector<string> menu=
    {
        "1. Them san pham",
        "2. Tim san pham",
        "3. Sap xep",
        "4. Dung lai"
    };
    
    while (1)
    {
        switch(getchoice(menu))
        {
            case 1:
                cout << 1;
                break;
            case 2:
                cout << 2;
                break;
            default: 
            break;
        }
    }
}