#pragma once

#include <string>
#include <vector>
using std::string;

class food {
private:

    string name;
    double price = 0.0;
    double quant = 0.0;
    int size = 1;
    int category = 0;
    double ordertotal = 0.0;

public:

    //setters
    void setfinfo(string a, double b, double ewan, int sizeo, int cat);
    void settotal(double x);
    void setsize(int x);
    void setquant(double x);

    //getters
    string getname();
    double getfprice();
    double getquantity();
    int getsize();
    int getcategory();
    double get_total();
};