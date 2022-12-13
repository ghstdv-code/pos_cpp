#ifndef HELPER_H
#define HELPER_H

#include <string>
using namespace std;

class Helper
{
    public:
        bool IsTrue(char);
        bool IsCorrectOption(char);
        bool IsValid(string, double);
        bool IsValid(string, bool);
    private:
        bool IsValidB;
};

#endif // HELPER_H
