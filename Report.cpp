#include "Report.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void Report::AddToCart(int Qt, string Item, double price){
    this->Qts.push_back(Qt);
    this->Items.push_back(Item);
    this->Prices.push_back(price);
}

void Report::BuildReport(){
    cout << left << setw(60) << setfill('=') << "+" << "+\n";
    cout << left << setw(20) << setfill(' ') << "|Customer Name:" << right << setw(40) << setfill(' ') << this->Name << "|" << endl;
    cout << left << setw(60) << setfill('-') << "|" << "|" << endl;
    cout << setprecision(2) << showpoint << fixed;
    for(int x = 0; x < this->Items.size(); x++){
        cout << left << setw(20) << setfill(' ') << "|" << left << setw(3) << setfill(' ') << this->Qts[x];
        cout << left << setw(25) << setfill(' ') << this->Items[x];
        cout << right << setw(12) << setfill(' ') << this->Prices[x] * this->Qts[x] << "|" << endl;
    }
    cout << left << setw(60) << setfill('-') << "|" << "|" << endl;
    cout << left << setw(20) << setfill(' ') << "|Sub-Total" << right << setw(40) << setfill(' ') << this->Sub_Total << "|" << endl;
    cout << left << setw(60) << setfill('-') << "|" << "|" << endl;
    cout << left << setw(21) << setfill(' ') << "|Senior Discount(20%)" << right << setw(39) << setfill(' ') << (Sr_Discount * Sub_Total) << "|" << endl;
    cout << left << setw(20) << setfill(' ') << "|Other Discount" << right << setw(40) << setfill(' ') << Other << "|" << endl;
    cout << left << setw(60) << setfill('-') << "|" << "|" << endl;

    cout << left << setw(20) << setfill(' ') << "|Final Total" << right << setw(40) << setfill(' ') << Total << "|" << endl;
    cout << left << setw(20) << setfill(' ') << "|Cash" << right << setw(40) << setfill(' ') << Cash << "|" << endl;
    cout << left << setw(60) << setfill('-') << "|" << "|" << endl;
    cout << left << setw(20) << setfill(' ') << "|Change" << right << setw(40) << setfill(' ') << Cash-Total << "|" << endl;
    cout << left << setw(60) << setfill('=') << "+" << "+\n";
}

void Report::GetName(string name){
    this->Name = name;
}

void Report::GetTotal(){
    for(int x = 0; x < Qts.size(); x++){
        this->Sub_Total += Prices[x] * Qts[x];
    }
    // In-line Condition to avoid negative number
    Total = (Sub_Total - ((Sr_Discount * Sub_Total) + Other) > 0 ? Sub_Total - ((Sr_Discount * Sub_Total) + Other) : 0);

}
