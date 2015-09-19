#ifndef RANDOMSTRING_H
#define RANDOMSTRING_H

#include <string>
#include <vector>

using namespace std;

class RandomString
{
    public:

        RandomString(const string *arr, size_t cnt);
        virtual ~RandomString();

        /**
          * Returns a random string from the set used at class  creation
          */
        const string getRandomString();

    private:
        const vector<string> *as;

};

#endif // RANDOMSTRING_H
