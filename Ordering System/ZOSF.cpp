#include "ZOSF.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::endl;
using std::fixed;
using std::setprecision;


string lborder = "                          ";
string hborder = "             ";

void front_page()
{
    cout << "customer's pov:" << endl;

    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl;

    cout << hborder << "CREATOR:" << lborder << "  BERMILLO ZAIRUS V." << endl;
    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl << endl;

    cout << lborder << "XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX" << endl;
    cout << lborder << "XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX" << endl;
    cout << lborder << "           XXXXX       XXXXX        XXXXX     XXXXX             " << endl;
    cout << lborder << "         XXXXX         XXXXX        XXXXX     XXXXX             " << endl;
    cout << lborder << "       XXXXX           XXXXX        XXXXX     XXXXXXXXXXXXXXXXXX" << endl;
    cout << lborder << "     XXXXX             XXXXX        XXXXX     XXXXXXXXXXXXXXXXXX" << endl;
    cout << lborder << "   XXXXX               XXXXX        XXXXX                  XXXXX" << endl;
    cout << lborder << " XXXXX                 XXXXX        XXXXX                  XXXXX" << endl;
    cout << lborder << "XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX" << endl;
    cout << lborder << "XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXX" << endl;
    cout << endl;
    cout << lborder << "       ZAI'S                ORDERING                SYSTEM      " << endl;
    cout << endl;


    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl << endl << endl;

    cout << lborder;
    for (int i = 0; i < 66; i++)
    {
        cout << "-";
    }
    cout << endl << endl;

    cout << lborder << "                      [1] TO CONTINUE" << endl;
    cout << lborder << "                      [2] TO EXIT THE PROGRAM" << endl << endl;

    cout << lborder;
    for (int i = 0; i < 66; i++)
    {
        cout << "-";
    }
    cout << endl << endl;
}

void loading()
{
    cout << "customer's pov:" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

    cout << lborder << "\t  YOUR ORDER IS BEING TRANSFER TO THE CASHIER";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(600);

    cout << endl << endl;
}

void menu()
{
    cout << "customer's pov:" << endl;

    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl;

    cout << lborder << lborder << "== MENU ==" << endl;

    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl << endl;

    cout << lborder << "[1] --BURGERS--\t\t\t\t     [2] --HOTDOGS--" << endl << endl;
    cout << hborder << "[CODE]\t\t\t    [PRICE]\t\t[CODE]\t\t\t       [PRICE]" << endl;
    cout << hborder << "- [-] HAMBURGER                  43.5\t\t- [-] NEW YORK DOG               55.5" << endl;
    cout << hborder << "- [-] CHEESEBURGER               53.5\t\t- [-] CHICAGO DOG                59.0" << endl;
    cout << hborder << "- [-] DOUBLE BURGER              57.5\t\t- [-] CHEESE DOG                 64.5" << endl;
    cout << hborder << "- [-] DOUBLE CH.BURGER           62.0\t\t- [-] BACON DOG                  70.0" << endl;
    cout << hborder << "- [-] PARRY MELT                 64.0" << endl;
    cout << endl << endl;

    cout << lborder << "\t\t          " << "[3] --BEVERAGES--" << endl << endl;
    cout << lborder << "[CODE]" << "\t\t\t\t" << "[SMALL]    [MEDIUM]    [LARGE]" << endl;
    cout << lborder << "- [-] COFFEE  " << "\t\t\t" << "   45         55          65" << endl;
    cout << lborder << "- [-] ICED TEA" << "\t\t\t" << "   35         45          55" << endl;
    cout << lborder << "- [-] MILK TEA" << "\t\t\t" << "   29         39          49" << endl;
    cout << lborder << "- [-] COLA    " << "\t\t\t" << "   25         30          35" << endl;
}

void burgers_menu()
{
    cout << "customer's pov:" << endl << endl << endl;

    cout << hborder << "   ";
    for (int i = 0; i < 88; i++)
    {
        cout << "=";
    }
    cout << endl << endl;

    cout << lborder << lborder << "   --BURGERS--" << endl << endl;
    cout << lborder << hborder << "   [CODE]\t\t\t[PRICE] " << endl;
    cout << lborder << hborder << "  - [1] HAMBURGER                  43.5   " << endl;
    cout << lborder << hborder << "  - [2] CHEESEBURGER               53.5   " << endl;
    cout << lborder << hborder << "  - [3] DOUBLE BURGER              57.5   " << endl;
    cout << lborder << hborder << "  - [4] DOUBLE CH.BURGER           62.0   " << endl;
    cout << lborder << hborder << "  - [5] PARRY MELT                 64.0   " << endl << endl << endl;

    cout << hborder << "   ";
    for (int i = 0; i < 88; i++)
    {
        cout << "=";
    }
    cout << endl << endl << endl;
}

void hotdogs_menu()
{
    cout << "customer's pov:" << endl << endl << endl;

    cout << hborder << "   ";
    for (int i = 0; i < 88; i++)
    {
        cout << "=";
    }
    cout << endl << endl;

    cout << lborder << lborder << "   --HOTDOGS--" << endl << endl;
    cout << lborder << hborder << "   [CODE]\t\t\t[PRICE] " << endl;
    cout << lborder << hborder << "  - [1] NEW YORK DOG               55.5   " << endl;
    cout << lborder << hborder << "  - [2] CHICAGO DOG                60.0   " << endl;
    cout << lborder << hborder << "  - [3] CHEESEDOG                  64.5   " << endl;
    cout << lborder << hborder << "  - [4] BACON DOG                  70.0   " << endl << endl << endl;

    cout << hborder << "   ";
    for (int i = 0; i < 88; i++)
    {
        cout << "=";
    }
    cout << endl << endl << endl;
}

void bev_menu()
{
    cout << "customer's pov:" << endl << endl << endl;

    cout << hborder << "   ";
    for (int i = 0; i < 88; i++)
    {
        cout << "=";
    }
    cout << endl << endl;

    cout << lborder << "\t\t          " << "   --BEVERAGES--" << endl << endl;
    cout << lborder << "[CODE]" << "\t\t\t\t" << "[SMALL]    [MEDIUM]    [LARGE]" << endl;
    cout << lborder << "- [1] COFFEE  " << "\t\t\t" << "   45         55          65" << endl;
    cout << lborder << "- [2] ICED TEA" << "\t\t\t" << "   35         45          55" << endl;
    cout << lborder << "- [3] MILK TEA" << "\t\t\t" << "   29         39          49" << endl;
    cout << lborder << "- [4] COLA    " << "\t\t\t" << "   25         30          35" << endl << endl << endl;

    cout << hborder << "   ";
    for (int i = 0; i < 88; i++)
    {
        cout << "=";
    }
    cout << endl << endl << endl;
}

void process_order(int category, int selector, double num_of_order, int size, string* tmpname, double* tmpprice, double* tmpquant)
{

    switch (category)
    {
    case 1:
        switch (selector)
        {
        case 1:
            *tmpname = "HAMBURGER";
            *tmpprice = 43.5;
            *tmpquant = num_of_order;
            break;
        case 2:
            *tmpname = "CHEESEBURGER";
            *tmpprice = 53.5;
            *tmpquant = num_of_order;
            break;
        case 3:
            *tmpname = "DOUBLE BURGER";
            *tmpprice = 57.5;
            *tmpquant = num_of_order;
            break;
        case 4:
            *tmpname = "DOUBLE CH.BURGER";
            *tmpprice = 62.0;
            *tmpquant = num_of_order;
            break;
        case 5:
            *tmpname = "PATTY MELT";
            *tmpprice = 64.0;
            *tmpquant = num_of_order;
            break;
        }
        break;

    case 2:
        switch (selector)
        {
        case 1:
            *tmpname = "NEW YORK DOG";
            *tmpprice = 55.5;
            *tmpquant = num_of_order;
            break;
        case 2:
            *tmpname = "CHICAGO DOG";
            *tmpprice = 60.0;
            *tmpquant = num_of_order;
            break;
        case 3:
            *tmpname = "CHEESEDOG";
            *tmpprice = 64.5;
            *tmpquant = num_of_order;
            break;
        case 4:
            *tmpname = "BACON DOG";
            *tmpprice = 70.0;
            *tmpquant = num_of_order;
            break;
        }
        break;

    case 3:
        switch (selector)
        {
        case 1:
            *tmpname = "COFFEE";
            *tmpprice = 45.0;
            *tmpquant = num_of_order;
            break;
        case 2:
            *tmpname = "ICED TEA";
            *tmpprice = 35.0;
            *tmpquant = num_of_order;
            break;
        case 3:
            *tmpname = "MILK TEA";
            *tmpprice = 29.0;
            *tmpquant = num_of_order;
            break;
        case 4:
            *tmpname = "COLA";
            *tmpprice = 25.0;
            *tmpquant = num_of_order;
            break;
        }
        break;

    }
}

void print_orders(vector <food> orders, double* bill)
{
    *bill = 0;

    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl << endl;



    cout << lborder << "[ID]   [NAME] \t      [SIZE]    [PRICE]    [QUANT]    [TOTAL]" << endl << endl;

    for (int i = 0; i < orders.size(); i++)
    {
        int quantlength = 0;
        int lop = orders[i].getquantity();

        do
        {
            quantlength++;
            lop = lop / 10;
        } while (lop > 0);

        if (orders[i].getcategory() != 3)
        {
            orders[i].setsize(0);
        }

        cout << lborder << " " << i + 1 << ".     " << orders[i].getname();

        for (int j = 0; j < 22 - orders[i].getname().size(); j++)
        {
            cout << " ";
        }

        cout << orders[i].getsize();

        cout << fixed << std::setprecision(1) << "         " << orders[i].getfprice();

        cout << setprecision(0) << "       " << orders[i].getquantity() << "x";

        for (int j = 0; j < 9 - quantlength; j++)
        {
            cout << " ";
        }

        cout << fixed << setprecision(1) << orders[i].get_total() << endl;

    }

    for (int i = 0; i < orders.size(); i++)
    {
        *bill += orders[i].get_total();
    }

    cout << endl;
    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "=";
    }
    cout << endl << endl;

    cout << lborder << lborder << hborder << "\t   TOTAL BILL: " << *bill << endl;


}

void print_ordersreceipt(vector <food> orders, double bill, double balance, double change)
{
    cout << "cashier's pov:" << endl << endl;
    cout << lborder << hborder << "\t           ---ZAI's SHOP---" << endl;
    cout << lborder << hborder << "\t081, Brgy. Matictic Norzagaray Bulacan" << endl;
    cout << endl << endl;
    cout << hborder << "   \t       \t \t\t\t\t\t          DATE: " << __DATE__ << endl;
    cout << hborder << "   RECEIPT RECEIPT \t\t\t\t\t\t  TIME: " << __TIME__ << endl << endl;

    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "-";
    }
    cout << endl << endl;

    cout << lborder << "[ID]   [NAME] \t      [SIZE]    [PRICE]    [QUANT]    [TOTAL]" << endl << endl;

    for (int i = 0; i < orders.size(); i++)
    {
        int quantlength = 0;
        int lop = orders[i].getquantity();

        do
        {
            quantlength++;
            lop = lop / 10;
        } while (lop > 0);

        if (orders[i].getcategory() != 3)
        {
            orders[i].setsize(0);
        }

        cout << lborder << " " << i + 1 << ".     " << orders[i].getname();

        for (int j = 0; j < 22 - orders[i].getname().size(); j++)
        {
            cout << " ";
        }

        cout << orders[i].getsize();

        cout << fixed << setprecision(1) << "         " << orders[i].getfprice();

        cout << setprecision(0) << "       " << orders[i].getquantity() << "x";

        for (int j = 0; j < 9 - quantlength; j++)
        {
            cout << " ";
        }

        cout << fixed << setprecision(1) << orders[i].get_total() << endl;

    }


    cout << endl;
    cout << hborder;
    for (int i = 0; i < 90; i++)
    {
        cout << "-";
    }
    cout << endl << endl;



    cout << lborder << lborder << hborder << "\t   TOTAL BILL: " << bill << endl;
    cout << lborder << lborder << hborder << "\t      PAYMENT: " << balance << endl;
    cout << lborder << lborder << hborder << "\t       CHANGE: " << change << endl << endl;
    cout << lborder << hborder << "      THANK YOU FOR PURCHASING!!! " << endl;
    cout << lborder << hborder << "          PLEASE COME AGAIN!!! " << endl << endl;
}


bool cin_check()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore();

        return true;
    }

    return false;
}
