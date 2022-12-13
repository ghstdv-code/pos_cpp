#include "Dictionary.h"
#include <vector>

// Property of Gernel Esguerra  //
// Under Apache 2.0 License     //
// Find on GitHub               //

using namespace std;

void Dictionary::AddPage(string key, string value, string value2){
    // Matrix of Vector //
    vector<string> row;     // <- Create vector for row;
    row.push_back(key);     // <- Set Key
    row.push_back(value);   // <- Set First Value
    row.push_back(value2);  // <- Set Second Value
    Rows.push_back(row);    // <- Bound vector to another vector
}

string Dictionary::Find(string key){
    string value = "";                          // <- set string to null
    for(int x = 0; x < this->Rows.size(); x++){ // <- Loop to check all values
        if(this->Rows[x][0] == key){            // <- Compare each value until it find the similar
            value = Rows[x][1];                 // <- Set Value
        }
    }
    return value;                               // <- Return to function
}

string Dictionary::FindValue2(string key){
    string value = "0.0";
    for(int x = 0; x < this->Rows.size(); x++){
        if(this->Rows[x][0] == key){
            value = Rows[x][2];
            break;
        }
    }
    return value;
}

bool Dictionary::HasRow(string key){
    // Check if row existed //
    for(int x = 0; x < this->Rows.size(); x++){ // <- Create loop to check each value
        if(this->Rows[x][0] == key){
            return true;                        // <- If found return true
            break;                              // <- Stop Condition
        }
    }
    return false;                               // <- If not found value will become false
}
