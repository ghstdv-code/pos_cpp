#include "Interface.h"
#include <iomanip>
#include <string>
#include <iostream>

using namespace std;
void Interface::Header(){
    cout << left << setw(98) << setfill('-') << "+" << "+\n";
    cout << left << setw(98) << setfill(' ') << "|" << "|\n";

    cout << left << setw(43) << setfill(' ') << "|" << "UNI-Fast Food";
    cout << right << setw(44) << setfill(' ') << "|\n";

    cout << left << setw(41) << setfill(' ') << "|" << "Atimonan, Quezon";
    cout << right << setw(43) << setfill(' ') << "|\n";

    cout << left << setw(98) << setfill(' ') << "|" << "|\n";
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";
}
 void Interface::Body(){

    // Sub-Header
    cout << left << setw(13) << setfill(' ') << "|" << "Burger" << setw(13) << setfill(' ') << "" << "|";
    cout << left << setw(13) << setfill(' ') << "" << "Pasta" << setw(14) << setfill(' ') << "" << "|";
    cout << left << setw(13) << setfill(' ') << "" << "Chicken" << setw(12) << setfill(' ') << "" << "|\n";

    // Divider
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";

    // Row 1
    cout << left << setw(6) << setfill(' ') << "|(B1)" << setw(18) << setfill(' ') << "Ham Burger"
    << right << setw(9) << setfill(' ') << "P60.00|";
    cout << left << setw(5) << setfill(' ') << "(S1)" << setw(18) << setfill(' ') << "Italian Spaghetti"
    << right << setw(10) << setfill(' ') << "P90.00|";
    cout << left << setw(5) << setfill(' ') << "(C1)" << setw(18) << setfill(' ') << "1pc Fried Chicken"
    << right << setw(10) << setfill(' ') << "P60.00|" << endl;

    // Divider
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";

    // Row 2
    cout << left << setw(6) << setfill(' ') << "|(B2)" << setw(18) << setfill(' ') << "CheeseBurger"
    << right << setw(9) << setfill(' ') << "P50.00|";
    cout << left << setw(5) << setfill(' ') << "(S2)" << setw(18) << setfill(' ') << "Carbonara"
    << right << setw(10) << setfill(' ') << "P100.00|";
    cout << left << setw(5) << setfill(' ') << "(C2)" << setw(18) << setfill(' ') << "2pcs Fried Chicken"
    << right << setw(10) << setfill(' ') << "P110.00|" << endl;

    // Divider
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";

    // Row 3
    cout << left << setw(6) << setfill(' ') << "|(B3)" << setw(18) << setfill(' ') << "Bacon CheeseBurger"
    << right << setw(9) << setfill(' ') << "P60.00|";
    cout << left << setw(5) << setfill(' ') << "(S3)" << setw(18) << setfill(' ') << "Bacon and Mushroom"
    << right << setw(10) << setfill(' ') << "P100.00|";
    cout << left << setw(5) << setfill(' ') << "(C3)" << setw(18) << setfill(' ') << "Chicken Fillet"
    << right << setw(10) << setfill(' ') << "P55.00|" << endl;

    // Divider
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";

    // Row 4
    cout << left << setw(6) << setfill(' ') << "|(B4)" << setw(18) << setfill(' ') << "BBQ Bacon Burger"
    << right << setw(9) << setfill(' ') << "P60.00|";
    cout << left << setw(5) << setfill(' ') << "(S4)" << setw(18) << setfill(' ') << "Bolognese"
    << right << setw(10) << setfill(' ') << "P110.00|";
    cout << left << setw(5) << setfill(' ') << "(C4)" << setw(18) << setfill(' ') << "Chicken BBQ"
    << right << setw(10) << setfill(' ') << "P65.00|" << endl;

    // Divider
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";

    // Row 5
    cout << left << setw(6) << setfill(' ') << "|(B5)" << setw(18) << setfill(' ') << "Islander Burger"
    << right << setw(9) << setfill(' ') << "P65.00|";
    cout << left << setw(5) << setfill(' ') << "(S5)" << setw(18) << setfill(' ') << "Crab Tomato"
    << right << setw(10) << setfill(' ') << "P150.00|";
    cout << left << setw(5) << setfill(' ') << "(C5)" << setw(18) << setfill(' ') << "Chicken Nuggets"
    << right << setw(10) << setfill(' ') << "P50.00|" << endl;

    cout << left << setw(32) << setfill(' ') << "|" << "|" << setw(5) << setfill(' ') << "" << setw(27) << setfill(' ')
    << "Cream Sauce" << "|" << setw(32) << setfill(' ') << "" << "|" << endl;

    // Divider
    cout << left << setw(32) << setfill('-') << "+" << "+" << setw(32) << setfill('-') << "" << "+"
    << setw(32) << setfill('-') << "" << "+\n";


    // Header Drinks
    cout << left << setw(46) << setfill(' ') << "|" << "Drinks" << setw(46) << setfill(' ') << "" << "|\n";

    // Divider
    cout << left << setw(23) << setfill('-') << "+" << "+" << setw(24) << setfill('-') << "" << "+"
    << setw(24) << setfill('-') << "" << "+" << setw(24) << setfill('-') << "" << "+\n";

    // Row 1
    cout << left << setw(6) << setfill(' ') << "|(D1)" << setw(10) << setfill(' ')
    << "Soda" << right << setw(8) << setfill(' ') << "P30.00|";
    cout << left << setw(5) << setfill(' ') << "(D2)" << setw(11) << setfill(' ')
    << "Juices" << right << setw(9) << setfill(' ') << "P35.00|";
    cout << left << setw(5) << setfill(' ') << "(D3)" << setw(11) << setfill(' ')
    << "Ice Tea" << right << setw(9) << setfill(' ') << "P25.00|";
    cout << left << setw(5) << setfill(' ') << "(D4)" << setw(13) << setfill(' ')
    << "Water" << right << setw(7) << setfill(' ') << "P20.00|" << endl;

    // Divider
    cout << left << setw(23) << setfill('-') << "+" << "+" << setw(24) << setfill('-') << "" << "+"
    << setw(24) << setfill('-') << "" << "+" << setw(24) << setfill('-') << "" << "+\n";

 }

 void Interface::Footer(){
    cout << left << setw(98) << setfill(' ') << "|Senior Discount: 20%" << "|\n";
    cout << left << setw(98) << setfill('-') << "+" << "+\n";
 }
