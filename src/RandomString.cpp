#include "RandomString.h"

#include <cstdlib>
#include <iostream>

using namespace std;

RandomString::RandomString(const string *arr, size_t cnt) {
    this->as = new vector<string>(arr, arr + cnt);
}

RandomString::~RandomString() {
    delete this->as;
}

const string RandomString::getRandomString() {
    int i = rand() % this->as->size();
    return as->at(i);
}
