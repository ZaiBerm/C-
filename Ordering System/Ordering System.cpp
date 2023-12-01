//DONE DONE
#include <iostream>
#include <iomanip>
#include <vector>
#include <windows.h>
#include "food.h"
#include "ZOSF.h"
using namespace std;


int main()
{
    int selector = 0;
    food order;
    vector<food> orders;
    int size = 0;
    double num_of_order = 0.0;
    int category = 0;
    string tmpname;
    double tmpprice;
    double tmpquant;
    bool runner = true;
    double totalbill = 0;
    double balance = 0;
    double change = 0;

    front_page();

    do
    {
        cout << "\t\t\t\t\t\t ENTER: ";
        cin >> selector;
        cout << endl;

        cin_check();

        if (selector == 2)
        {
            return 1;
        }
        else if (selector == 1)
        {
            break;
        }
        else
        {
            cout << "\t\t\t\t\t\t\tINVALID INPUT" << endl;
        }

    } while (selector != 1 && selector != 2);


    system("cls");


categ:

    system("cls");

    menu();

    cout << endl << endl << endl;

    do
    {
        cout << hborder << "IN WHAT CATEGORY WOULD YOU LIKE TO ORDER? ";
        cin >> selector;
        cout << endl;
        cin_check();


        if (selector >= 1 && selector <= 2)
        {
            break;
        }
        else
        {
            cout << "\t\t\t\t\t\t\tINVALID INPUT" << endl;
        }

    } while (selector != 1 && selector != 2 && selector != 3);

    system("cls");

    if (selector == 1)
    {
    burg:
        burgers_menu();
        category = 1;
        size = 1;

        //Sleep(800);  //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

        do
        {
            cout << "\t\t\t\t ENTER ORDER: ";
            cin >> selector;
            cout << endl;
            cin_check();
        } while (selector < 1 || selector > 5);

        //Sleep(300);  //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.


        do
        {
            cout << "\t\t\t\t HOW MANY: ";
            cin >> num_of_order;
            cout << endl;
        } while (cin_check());

    }
    else if (selector == 2)
    {
    dog:
        hotdogs_menu();
        category = 2;
        size = 1;

        //Sleep(800);   //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

        do
        {
            cout << "\t\t\t\t ENTER ORDER: ";
            cin >> selector;
            cout << endl;
            cin_check();

        } while (selector < 1 || selector > 4);

        //Sleep(300);   //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

        do
        {
            cout << "\t\t\t\t HOW MANY: ";
            cin >> num_of_order;
            cout << endl;
        } while (cin_check());
    }
    else if (selector == 3)
    {
    bev:
        bev_menu();
        category = 3;

        //Sleep(800);   //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

        do
        {
            cout << "\t\t\t\t ENTER SIZE [1]SMALL, [2]MEDIUM, [3]LARGE: ";
            cin >> size;
            cout << endl;
            cin_check();
        } while (size < 1 || size > 3);

        //Sleep(300);   //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

        do
        {
            cout << "\t\t\t\t ENTER ORDER: ";
            cin >> selector;
            cout << endl;
            cin_check();
        } while (selector < 1 || selector > 4);

        //Sleep(300);   //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

        do
        {
            cout << "\t\t\t\t HOW MANY: ";
            cin >> num_of_order;
            cout << endl;
        } while (cin_check());
    }

    process_order(category, selector, num_of_order, size, &tmpname, &tmpprice, &tmpquant);

    order.setfinfo(tmpname, tmpprice, tmpquant, size, category);

    orders.push_back(order);

    //Sleep(500);   //remove the double slash on the start of Sleep function if you want some delay when your program prompt for order.

    do
    {
        cout << lborder << lborder << lborder << "BUY MORE? [1]YES, [2]NO: ";
        cin >> selector;
        cout << endl;
        cin_check();

    } while (selector != 1 && selector != 2);

    if (selector == 1)
    {
        do
        {
            cout << lborder << lborder << lborder << "IN THE SAME CATEGORY? [1]YES, [2]NO: ";
            cin >> selector;
            cout << endl;
            cin_check();
        } while (selector != 1 && selector != 2);

        if (selector == 1)
        {
            system("cls");

            if (category == 1)
            {
                goto burg;
            }
            else if (category == 2)
            {
                goto dog;
            }
            else if (category == 3)
            {
                goto bev;
            }
        }
        else if (selector == 2)
        {
            goto categ;
        }
    }

checkout:

    system("cls");

    cout << "customer's pov:";
    print_orders(orders, &totalbill);

    cout << endl << endl;

    cout << hborder << "[1]CONFIRM ITEM, [2]EDIT ITEM, [3]CLEAR ALL ITEMS AND GO TO THE MENU PAGE " << endl << endl;

    do
    {
        cout << hborder << "ENTER: ";
        cin >> selector;
        cout << endl;
        cin_check();
    } while (selector != 1 && selector != 2 && selector != 3);

    cout << endl << endl;

    if (selector == 1)
    {
        system("cls");
        loading();
        system("cls");

        cout << "cashier's pov:";
        print_orders(orders, &totalbill);

        do
        {
            cout << lborder << lborder << hborder << "  CUSTOMER'S PAYMENT: ";
            cin >> balance;
            cout << endl;
        } while (cin_check());


        if (balance >= totalbill)
        {
            change = balance - totalbill;

            cout << endl << lborder << lborder << hborder << "\t       CHANGE: " << change << endl << endl;

            do
            {
                cout << hborder << "PRINT THE RECEIPT? [1]YES, [2]NO: ";
                cin >> selector;
                cin_check();

            } while (selector != 1 && selector != 2);

            system("cls");

            if (selector == 1)
            {
                print_ordersreceipt(orders, totalbill, balance, change);
                cout << endl;
                cout << hborder;
                system("pause");
                return 0;
            }

        }
        else
        {
            cout << lborder << lborder << hborder << "\t                 INSUFFICENT BALANCE" << endl;
        }

    }
    else if (selector == 2)
    {

    editpage:

        system("cls");
        cout << "customer's pov:";
        print_orders(orders, &totalbill);

        cout << endl << endl << hborder << "[1]DECREASE ITEM, [2]INCREASE ITEM, [3]ADD ITEM, [4]BACK" << endl << endl;

        do
        {
            cout << hborder << "ENTER: ";
            cin >> selector;
            cin_check();
        } while (selector != 1 && selector != 2 && selector != 3 && selector != 4);

        if (selector == 1)
        {
            do
            {
                system("cls");

                cout << "customer's pov:";
                print_orders(orders, &totalbill);

                cout << endl << endl << hborder << "ENTER THE ID OF THE ITEM YOU WANT TO DECREASE. " << endl;
                cout << hborder << "[" << orders.size() + 1 << "] BACK" << endl << endl;


                do
                {
                    cout << hborder << "ENTER: ";
                    cin >> selector;
                    cin_check();
                } while (selector <= 0 || selector > orders.size() + 1);

                if (selector != orders.size() + 1)
                {
                    orders[selector - 1].setquant(orders[selector - 1].getquantity() - 1);
                }

                for (int i = 0; i < orders.size(); i++)
                {
                    if (orders[i].getquantity() == 0)
                    {
                        orders.erase(orders.begin() + i);
                    }
                }

            } while (selector != orders.size() + 1);

        }
        else if (selector == 2)
        {
            do
            {
                system("cls");

                cout << "customer's pov:";
                print_orders(orders, &totalbill);

                cout << endl << endl << hborder << "ENTER THE ID OF THE ITEM YOU WANT TO INCREASE. " << endl;
                cout << hborder << "[" << orders.size() + 1 << "] BACK" << endl << endl;

                do
                {
                    cout << hborder << "ENTER: ";
                    cin >> selector;
                    cin_check();
                } while (selector <= 0 || selector > orders.size() + 1);


                if (selector != orders.size() + 1)
                {
                    orders[selector - 1].setquant(orders[selector - 1].getquantity() + 1);
                }
                    

            } while (selector != orders.size() + 1);
        }
        else if (selector == 3)
        {
            goto categ;
        }
        else
        {
            goto checkout;
        }

        goto editpage;
    }
    else if (selector == 3)
    {
        while (orders.size() != 0)
        {
            orders.pop_back();
        }
        goto categ;
    }

}
