#ifndef __BASECLASS_H_INCL__
#define __BASECLASS_H_INCL__

#include <iostream>
using namespace std;

#include "Person.h"


/**
 * A typical base class, showing my preferred approach.
 * 
 * @author   Sharon
 */
class BaseClass {
public:
    // Constructor
    BaseClass();

    BaseClass(int aNumber, string aString);

    // Destructor
    virtual ~BaseClass();

    // Copy constructor
    BaseClass(const BaseClass& src);

    // Assignment operator
    BaseClass& operator=(const BaseClass& src);

    // Return a string representing the values of this class.
    string to_string();

    void haveFunWithPerson(Person &someone);
    void noMessWithPerson(const Person &someone);

private:
    int baseNumber;
    string baseString;
};

// Constructor implementation
inline BaseClass::BaseClass() : baseNumber(0), baseString("") {
}

inline BaseClass::BaseClass(int aNumber, string aString) : baseNumber(aNumber), baseString(aString) {
}

// Destructor implementation
inline BaseClass::~BaseClass() {
}


#endif // __BASECLASS_H_INCL__
