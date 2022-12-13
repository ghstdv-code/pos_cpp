#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#include "Interface.h"
#include "lib/Dictionary.h"
#include "Report.h"
#include "lib/Helper.h"

using namespace std;
Dictionary items;

void AddToDictionary(){
    items.AddPage("B1", "Hamburger", "40");
    items.AddPage("B2", "CheeseBurger", "50");
    items.AddPage("B3", "Bacon CheeseBurger", "60");
    items.AddPage("B4", "BBQ Bacon Burger", "60");
    items.AddPage("B5", "Islander Burger", "65");

    items.AddPage("S1", "Italian Spaghetti", "90");
    items.AddPage("S2", "Carbonara", "100");
    items.AddPage("S3", "Bacon and Mushroom", "100");
    items.AddPage("S4", "Bolognese", "110");
    items.AddPage("S5", "Crab Tomato Cream Sauce", "150");

    items.AddPage("C1", "1pc Friend Chicken", "60");
    items.AddPage("C2", "2pcs Fried Chicken", "100");
    items.AddPage("C3", "Chicken Fillet", "55");
    items.AddPage("C4", "Chicken BBQ", "65");
    items.AddPage("C5", "Chicken Nuggets", "50");

    items.AddPage("D1", "Soda", "30");
    items.AddPage("D2", "Juices", "35");
    items.AddPage("D3", "Iced Tea", "25");
    items.AddPage("D4", "Water", "20");
}

void InitializeComponent(void){
   Interface iface;
   iface.Header();
   iface.Body();
   iface.Footer();
}

int main()
{

    Report rep;
    Helper help;
    // Add all values to Dictionary Class
    AddToDictionary();

    // Declare necessary variable
    string order_name, name;
    int quantity;
    char is_Senior, another = 'Y', is_other;

    // initialize Interface Design
    InitializeComponent();

    // Get Name
    cout << endl << "Enter Customer Name:\t\t", getline(cin, name);
    rep.GetName(name);
    // Ask if Senior
    cout << "Senior Citizen?(Y/N):\t\t", cin >> is_Senior;
        while(!help.IsCorrectOption(is_Senior))
        {
            cin.clear(); // <- Clear Stream
            cin.ignore(INT_MAX, '\n'); // <- Ignore until newline detected
            cout << "Invalid Option. Try Again:\t"; // <- Error provider message
            cin >> is_Senior; // <- Re-Enter Input
        }
        // If Senior Put 20% discount
        if(help.IsTrue(is_Senior)){
            // Formula: P/100
            rep.Sr_Discount = 0.2; // <- Convert Percent to Decimal
        }

    // Check for other discount
    cout << "Other Discount? (Y/N):\t\t", cin >> is_other;
        // Verify for validity of Options
        while(!help.IsCorrectOption(is_other))
        {
            // If fail the input stream will be cleared and get new input
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid Option. Try Again:\t";
            cin >> is_other;
        }
        // Check if the inputs is equal to true
        if(help.IsTrue(is_other)){
            cout << "Enter Discount Amount:\t\t", cin >> rep.Other;
            // If true pass the parameters to the report generator class
            help.IsValid("Invalid Input. Try Again:\t", rep.Other);
        }

    // Make a loop until it breaks
    while(help.IsTrue(another)){
            cout << endl;
            cout << "Enter Order Code:\t\t", cin >> order_name;
            while(!items.HasRow(order_name)){ // <- Check For row if Exist
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Order Code Invalid. Try Again:\t";
                cin >> order_name;
            }

            // Check for non-numeric characters
            cout << "Enter Quantity:\t\t\t", cin >> quantity;
            while(true){
                if(cin.fail()){
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    cout << "Input Invalid. Try Again:\t";
                    cin >> quantity;
                }
                else{
                    if(quantity <= 0){ // <- Check for quantity for zero
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        cout << "Quantity Invalid. Try Again:\t";
                        cin >> quantity;
                    }
                    else break;
                }
            }
            // Add to cart // Use stod method to implicit convert string to decimal
            rep.AddToCart(quantity, items.Find(order_name), stod(items.FindValue2(order_name)));
            cout << endl << "Another Order? (Y/N):\t\t", cin >> another;
            while(!help.IsCorrectOption(another))
            {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Invalid Option. Try Again:\t";
                cin >> another;
            }
        }

    cout << setprecision(2) << fixed << showpoint;
    rep.GetTotal(); // <- Compute Total;
    cout << endl << "Amount Total:\t\t\t" << rep.Total << endl;
    if(rep.Total > 0){ // <- If the total is zero proceeding will be pointless
    cout << "Enter Cash:\t\t\t", cin >> rep.Cash;
        if(help.IsValid("Invalid Input. Try Again:\t", rep.Cash)){
            while(rep.Cash < rep.Total){
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Not Enough Cash. Try Again:\t";
                cin >> rep.Cash;
            }
        }
    }
    cout << endl;

    cout << left << setw(100) << setfill('-') << endl << endl;
    rep.BuildReport(); // <- Build report //

    system("PAUSE");
}
