#include "Helper.h"

#include <iostream>

using namespace std;
bool Helper::IsTrue(char input){
        this->IsValidB = false;
        switch(input){
            case 'Y':
            case 'y':
                this->IsValidB = true;
                break;
            case 'N':
            case 'n':
            default:
                this->IsValidB = false;
                break;
            }
            return this->IsValidB;
    }

bool Helper::IsCorrectOption(char input){
        this->IsValidB = false;
        switch(input){
        case 'Y':
        case 'y':
        case 'N':
        case 'n':
            this->IsValidB= true;
            break;
        }
        return this->IsValidB;
    }

bool Helper::IsValid(string text, double obj){
        while(true){
            if(cin.fail()){
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << text;
                cin >> obj;
            }
            else break;
        }
        return true;
    }

bool Helper::IsValid(string text, bool obj){
        while(true){
            if(cin.fail()){
                cin.clear();
                cin.ignore(INT_MAX, '\n');;
                cout << text;
                cin >> obj;
            }
            else break;
        }
        return true;
    }
