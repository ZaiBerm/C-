#pragma once

#include "food.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

extern string lborder;
extern string hborder;

//FUNCTION THAT PRINTS
void front_page();  //this function prints the front page (the with with big letters)
void loading();  //this one prints the loading that seperates the customer's pov and cashier's pov
void menu();  //prints the menu
void burgers_menu();  //prints the burger category
void hotdogs_menu();  //prints the burger category
void bev_menu();  //prints the burger category
void print_orders(vector <food> orders, double* bill);  //prints all the foods/beverages that you ordered 
void print_ordersreceipt(vector <food> orders, double bill, double balance, double change);  //prints the receipt

//FUNCTION THAT ASSIGN A VALUE ON THE TEMPORARY VARIABLES
void process_order(int category, int selector, double num_of_order, int size, string* tmpname, double* tmpprice, double* tmpquant);  //assigns value to the temporary variable that wil be use to store a value to the members of the object of a food class

//FUNCTION THAT CHECKS THE INPUT
bool cin_check();
