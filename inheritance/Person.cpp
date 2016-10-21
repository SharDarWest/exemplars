#include "Person.h"

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

string Person::getFullName() const {
    return firstName + " " + lastName;
}

void Person::setFirstName(const string &name) {
    firstName = name;
}

void Person::setLastName(const string &name) {
    lastName = name;
}


