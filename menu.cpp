#include "menu.h"

void inmenu(std::vector<std::string> &menu,int choice)
{
    system("cls");
    for (int i = 0; i < menu.size() ;i++)
    {
        if (choice == i)
        {
            std::cout << xanh << menu[i] << reset << std::endl;
        }
        else 
        std::cout << menu[i] << std::endl;
    }
}

int getchoice(std::vector<std::string>&menu)
{
    int select = 0;
    int key;
        inmenu(menu, select);
        while (key != 13)
        {
            inmenu(menu, select);
            key = _getch();
            if (key == 224)
            {
                key = _getch();
                if (key == 72)
                {
                    if (select <= 0)
                        select = menu.size() - 1;
                    else
                        select--;
                }

                else if (key == 80)
                {
                    if (select >= menu.size() - 1)
                        select = 0;
                    else
                        select++;
                }
                else if (key == 13)
                    break;
            }
            else
                continue;
        }
    return select;
}