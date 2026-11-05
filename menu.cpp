#include "menu.h"


void inmenu(vector<string> &menu,int choice)
{
    system("cls");
    for (int i = 0; i < menu.size() ;i++)
    {
        if (choice == i)
        {
            cout << xanh << menu[i] << reset << endl;
        }
        else 
        cout << menu[i] << endl;
    }
}

int getchoice(vector<string>&menu)
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