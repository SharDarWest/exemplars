#ifndef __DERIVEDCLASS_H_INCL__
#define __DERIVEDCLASS_H_INCL__

#include "BaseClass.h"

/**
 * A typical derived class showing my preferred approach.
 * 
 * @author   Sharon
 */
class DerivedClass : public BaseClass {
public:
    // Constructor
    DerivedClass();

    DerivedClass(int number, string str, float flt);

    // Destructor
    virtual ~DerivedClass();

    // Copy constructor
    DerivedClass(const DerivedClass& src);

    // Assignment operator
    DerivedClass& operator=(const DerivedClass& src);

    // Return a string representing the values of this class.
    string to_string();

private:
    float derivedFloat;
};

// Constructor implementation
inline DerivedClass::DerivedClass() : BaseClass(), derivedFloat(0.0) {
}

inline DerivedClass::DerivedClass(int number, string str, float flt) : BaseClass(number, str), derivedFloat(flt) {
}

// Destructor implementation
inline DerivedClass::~DerivedClass() {
}


#endif // __DERIVEDCLASS_H_INCL__
