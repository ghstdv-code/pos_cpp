#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <vector>

using namespace std;

class Dictionary
{
    public:
        void AddPage(string, string, string);
        string Find(string);
        string FindValue2(string);
        bool HasRow(string);
    private:
        vector<vector<string> > Rows;
};

#endif // DICTIONARY_H
