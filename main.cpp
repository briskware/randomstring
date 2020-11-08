#include <iostream>
#include <string>
#include "RandomString.h"

#define ASIZEOF(arr) sizeof(arr)/sizeof(*arr)

using namespace std;

int main()
{
    // initialise a random vector of adjectives
    const string arr[] = {
        "awesome",
        "cool",
        "brilliant",
        "incredibely smart",
        "absolutely hilarious",
        "pretty",
        "dirty",
        "silly",
        "crazy",
        "occasionally rude",
        "stupid",
        "ugly",
        "annoying",
        "careless",
        "lazy",
        "smelly",
        "disgusting",
        "incompetent",
        "unsuccessful with girls",
        "crazy about computers",
        "destructive",
        "disrespectfull",
        "heavenly",
        "gorgeous",
        "very pretty",
        "horny",
        "clumsy"
    };
    RandomString adjectives(arr, ASIZEOF(arr));

    const string arr2[] = { "Greetings", "Hello", "Hi"};
    RandomString greetings(arr2, ASIZEOF(arr2));

    const string arr3[] = {
        "is",
        "is never",
        "is mostly",
        "is very seldomly",
        "never does anything",
        "always does something",
        "sometimes does something",
        "is sometimes",
        "can be",
        "never is",
        "always behaves",
        "never behaves",
        "sometimes behaves",
        "does usually act"
    };
    RandomString verbs(arr3, ASIZEOF(arr3));

    const string arr4[] = {
        "it is verifiable",
        "it happens very often",
        "there is a good reason for this",
        "there is never a good reason for this",
        "everybody says so",
        "all the people at school say so",
        "it is proven beyond reasonable doubt",
        "it is a proven fact",
        "it is so obvious",
        "it is never that obvious",
        "it is written in the holy books",
        "the internet says so",
        "everybody disapproves",
        "most people don't really care",
        "everybody cares so much",
        "the sun rises every morning",
        "the moon never falls from the sky",
        "people who landed on Mars said so",
        "the Egyptians have carved it in stone",
        "Moses killed his child for this",
        "Jesus turned water into wine",
        "a 4 86 is slower than a Pentium",
        "Mac OS 10 is better then Windows",
        "iOS is better than Android",
        "Star Trek beats Star Wars",
        "stupid people voted for Donald Trump",
        "Brexit"
    };
    RandomString reasons(arr4, ASIZEOF(arr4));

    const string arr5[] = {
        "because",
        "while",
        "if",
        "since",
        "as"
    };
    RandomString conjuctions(arr5, ASIZEOF(arr5));

    // some variables
    string name;
    int howMany;

    // read in the user's name
    cout << "What is your name ? ";
    cin >> name;

    // read in a number
    cout << greetings.getRandomString() << " " << name << ", how many times should I print out an awesome sentence? " << endl;
    cin >> howMany;

    // loop through a number of times to get a nice printout
    for (int i=0; i<howMany; ++i) {
        cout
            << name << " "
            << verbs.getRandomString() << " "
            << adjectives.getRandomString() << ", "
            << conjuctions.getRandomString() << " "
            << reasons.getRandomString() << "."
            //<< (" << i+1 << ")"
            << endl;
    }
    return 0;
}
