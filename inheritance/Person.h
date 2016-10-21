#ifndef __PERSON_H_INCL__
#define __PERSON_H_INCL__


#include <iostream>
using namespace std;

/**
 * TODO: Add class description
 * 
 * @author   Sharon
 */
class Person {
public:
    // Constructor
    Person();

    Person(const string fName, const string lName);

    // Destructor
    virtual ~Person();

    string getFirstName() const;
    string getLastName() const;
    string getFullName() const;
    void setFirstName(const string &name);
    void setLastName(const string &name); 

    // Copy constructor
    // TODO: Uncomment the copy constructor when you need it.
    //Person(const Person& src);

    // Assignment operator
    // TODO: Uncomment the assignment operator when you need it.
    //Person& operator=(const Person& src);

private:
    string firstName;
    string lastName;
    

};

// Constructor implementation
inline Person::Person() {
}


// Constructor implementation
inline Person::Person(const string fName, const string lName) : firstName(fName), lastName(lName) {
}


// Destructor implementation
inline Person::~Person() {
}

// TODO: Uncomment the copy constructor when you need it.
//inline Person::Person(const Person& src)
//{
//   // TODO: copy
//}

// TODO: Uncomment the assignment operator when you need it.
//inline Person& Person::operator=(const Person& rhs)
//{
//   if (this == &rhs) {
//      return *this;
//   }
//
//   // TODO: assignment
//
//   return *this;
//}

#endif // __PERSON_H_INCL__
