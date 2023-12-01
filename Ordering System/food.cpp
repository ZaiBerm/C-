#include "food.h"


void food::setfinfo(string a, double b, double ewan, int sizeo, int cat)
{
    name = a;
    price = b;
    quant = ewan;
    size = sizeo;
    category = cat;
}

//setter of total
void food::settotal(double x)
{
    ordertotal = x;
}

//setter of size
void food::setsize(int x)
{
    size = x;
}

//setter of quantity
void food::setquant(double x)
{
    quant = x;
}

//getter of name
string food::getname()
{
    return name;
}

//getter of price
double food::getfprice()
{
    double tmpprice = price;
    if (category == 3)
    {
        if (name == "COLA")
        {
            for (int i = 1; i < size; i++)
            {
                tmpprice += 5;
            }
        }
        else
        {
            for (int i = 1; i < size; i++)
            {
                tmpprice += 10;
            }
        }

    }

    return tmpprice;
}

//getter of quantity
double food::getquantity()
{
    return quant;
}

//getter of size
int food::getsize()
{
    return size;
}
//getter of category
int food::getcategory()
{
    return category;
}

//getter of total
double food::get_total()
{

    ordertotal = getfprice() * quant;

    return ordertotal;
}