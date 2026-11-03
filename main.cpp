#include "menu.h"

int main()
{
    std::vector<std::string> menu=
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
                std::cout << 1;
                break;
            case 2:
            std::cout << 2;
            break;
            default: 
            break;
            
        }
    }
}