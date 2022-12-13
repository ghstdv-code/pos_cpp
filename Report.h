#ifndef REPORT_H
#define REPORT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Report
{
    public:
        void GetName(string);
        void AddToCart(int, string, double);
        void BuildReport();
        double Other;
        void GetTotal();
        double Total, Cash, Sr_Discount = 0;
    private:
        double Sub_Total;
        string Name;
        vector<string> Items;
        vector<int> Qts;
        vector<double> Prices;
};

#endif // REPORT_H
